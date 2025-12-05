#include "AutoChessPlayerController.h"
#include "AutoChessCardBase.h"
#include "AutoChessGrid.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h" // For GEngine
#include "Engine/Engine.h" // For GEngine
#include "Blueprint/UserWidget.h"
#include "AutoChessUnitWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h" // Add this include
#include "AutoChessHighlightActor.h"
#include "Components/InstancedStaticMeshComponent.h"

AAutoChessPlayerController::AAutoChessPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	// 初始化 GAS 组件
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* AAutoChessPlayerController::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAutoChessPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// 设置输入模式为 GameAndUI，确保鼠标既能点击 UI 也能点击世界
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);

	// 初始化 GAS
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}

	// 初始化法力值
	Mana = 0.0f;
	DrawCardTimer = 0.0f;

}

void AAutoChessPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();

	// 在这里设置 TeamID 最安全，因为 LocalPlayer 肯定存在
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		int32 ControllerId = LocalPlayer->GetControllerId();
		TeamID = ControllerId;
		UE_LOG(LogTemp, Warning, TEXT("[PlayerController::ReceivedPlayer] Found LocalPlayer. ControllerId: %d -> TeamID: %d"), 
			ControllerId, TeamID);

		// 生成高亮管理器
		if (!HighlightActor && GetWorld())
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this; // 暂时设为 PC
			HighlightActor = GetWorld()->SpawnActor<AAutoChessHighlightActor>(AAutoChessHighlightActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
			
			UE_LOG(LogTemp, Warning, TEXT("[PC %d ReceivedPlayer] HighlightActor spawned: %s"), ControllerId, HighlightActor ? TEXT("SUCCESS") : TEXT("FAILED"));
			
			if (HighlightActor)
			{
				// 尝试获取 Pawn 并设置为 Owner (为了 bOnlyOwnerSee)
				APawn* CurrentPawn = GetPawn();
				if (CurrentPawn)
				{
					HighlightActor->SetOwner(CurrentPawn);
					UE_LOG(LogTemp, Warning, TEXT("[PC %d ReceivedPlayer] HighlightActor Owner set to Pawn: %s"), ControllerId, *CurrentPawn->GetName());
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("[PC %d ReceivedPlayer] Pawn is NULL, will set Owner in OnPossess"), ControllerId);
				}
				
				// 初始化视觉 (从 Grid 获取材质)
				if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
				{
					if (GS->GameGrid)
					{
						HighlightActor->InitVisuals(GS->GameGrid->TileMesh, GS->GameGrid->MaterialHighlight);
						UE_LOG(LogTemp, Warning, TEXT("[PC %d ReceivedPlayer] HighlightActor InitVisuals called. Mesh: %s, Material: %s"), 
							ControllerId, 
							GS->GameGrid->TileMesh ? TEXT("Valid") : TEXT("NULL"),
							GS->GameGrid->MaterialHighlight ? TEXT("Valid") : TEXT("NULL"));
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("[PC %d ReceivedPlayer] GameGrid is NULL!"), ControllerId);
					}
				}
			}
		}

		// --- 初始化虚拟光标 (仅针对 Player 1 / 手柄玩家) ---
		if (TeamID == 1 && VirtualCursorClass && !VirtualCursorWidget)
		{
			VirtualCursorWidget = CreateWidget<UUserWidget>(this, VirtualCursorClass);
			if (VirtualCursorWidget)
			{
				VirtualCursorWidget->AddToViewport(100); // 高 Z-Order 确保在最上层
				
				// 初始位置设为屏幕中心
				FVector2D ViewportSize;
				if (GetLocalPlayer() && GetLocalPlayer()->ViewportClient)
				{
					GetLocalPlayer()->ViewportClient->GetViewportSize(ViewportSize);
					VirtualCursorPosition = ViewportSize * 0.5f;
					VirtualCursorWidget->SetPositionInViewport(VirtualCursorPosition);
				}
				
				UE_LOG(LogTemp, Warning, TEXT("[PC %d] Virtual Cursor Created!"), TeamID);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[PlayerController::ReceivedPlayer] LocalPlayer is NULL! This should not happen for local players."));
	}
}

void AAutoChessPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	// 确保 HighlightActor 的 Owner 是 Pawn
	if (HighlightActor && InPawn)
	{
		HighlightActor->SetOwner(InPawn);
		UE_LOG(LogTemp, Warning, TEXT("[PC OnPossess] HighlightActor Owner set to Pawn: %s"), *InPawn->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[PC OnPossess] HighlightActor: %s, InPawn: %s"), 
			HighlightActor ? TEXT("Valid") : TEXT("NULL"),
			InPawn ? *InPawn->GetName() : TEXT("NULL"));
	}
}



void AAutoChessPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// --- 虚拟光标移动逻辑 (仅 Player 1) ---
	if (TeamID == 1 && VirtualCursorWidget)
	{
		float AxisX = GetInputAnalogKeyState(EKeys::Gamepad_LeftX);
		float AxisY = GetInputAnalogKeyState(EKeys::Gamepad_LeftY); 
		// UE Gamepad LeftY: Up is +1, Down is -1. Screen Y: Down is +. So we need to invert Y.
		
		// 死区处理
		if (FMath::Abs(AxisX) < 0.1f) AxisX = 0.0f;
		if (FMath::Abs(AxisY) < 0.1f) AxisY = 0.0f;

		if (AxisX != 0.0f || AxisY != 0.0f)
		{
			VirtualCursorPosition.X += AxisX * CursorMoveSpeed * DeltaTime;
			VirtualCursorPosition.Y -= AxisY * CursorMoveSpeed * DeltaTime; // Invert Y for screen coords

			// 限制在视口范围内
			FVector2D ViewportSize;
			if (GetLocalPlayer() && GetLocalPlayer()->ViewportClient)
			{
				GetLocalPlayer()->ViewportClient->GetViewportSize(ViewportSize);
				VirtualCursorPosition.X = FMath::Clamp(VirtualCursorPosition.X, 0.0f, ViewportSize.X);
				VirtualCursorPosition.Y = FMath::Clamp(VirtualCursorPosition.Y, 0.0f, ViewportSize.Y);
			}

			VirtualCursorWidget->SetPositionInViewport(VirtualCursorPosition);
		}
	}

	// 延迟创建 HUD，确保 Player 已经附加
	if (!MainHUDWidget && IsLocalController() && MainHUDClass)
	{
		if (GetLocalPlayer())
		{
			MainHUDWidget = CreateWidget<UUserWidget>(this, MainHUDClass);
			if (MainHUDWidget)
			{
				MainHUDWidget->AddToPlayerScreen();
			}
		}
	}

	// 简单的 Debug UI 显示
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		FString PhaseName = TEXT("Unknown");
		switch (GM->CurrentPhase)
		{
		case EAutoChessPhase::Preparation: PhaseName = TEXT("Preparation"); break;
		case EAutoChessPhase::Battle:      PhaseName = TEXT("Battle"); break;
		case EAutoChessPhase::Settlement:  PhaseName = TEXT("Settlement"); break;
		}

		FString DebugMsg = FString::Printf(TEXT("Round: %d | Phase: %s | Time: %.1f"), 
			GM->CurrentRound, *PhaseName, GM->PhaseTimer);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Yellow, DebugMsg);
		}
	}

	// 处理鼠标点击和拖拽 (支持分屏共享鼠标)
	if (IsLocalController())
	{
		// 获取视口鼠标位置 (Slate Units)
		FVector2D MousePos = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
		float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
		MousePos *= ViewportScale; // 转换为像素

		// 获取视口大小
		FVector2D ViewportSize;
		GetLocalPlayer()->ViewportClient->GetViewportSize(ViewportSize);

		// 判断鼠标在哪个半屏
		bool bIsRightSide = MousePos.X > (ViewportSize.X * 0.5f);
		
		// 目标控制器
		AAutoChessPlayerController* TargetPC = this;
		
		// 如果是分屏模式且鼠标在右侧，尝试获取玩家2的控制器
		if (bIsRightSide && UGameplayStatics::GetNumPlayerControllers(this) > 1)
		{
			TargetPC = Cast<AAutoChessPlayerController>(UGameplayStatics::GetPlayerController(this, 1));
		}
		
		// 如果目标控制器不是自己，且自己是 Player 0，则负责转发输入
		// 注意：Player 1 (Index 1) 也会运行这个 Tick，但它没有鼠标输入，所以不会触发
		if (TargetPC && (TargetPC == this || GetLocalPlayer()->GetControllerId() == 0))
		{
			if (WasInputKeyJustPressed(EKeys::LeftMouseButton))
			{
				TargetPC->HandleDragStart(MousePos);
				if (!TargetPC->bIsDragging)
				{
					TargetPC->HandleClick(MousePos);
				}
			}
			else if (WasInputKeyJustReleased(EKeys::LeftMouseButton))
			{
				if (TargetPC->bIsDragging)
				{
					TargetPC->HandleDragEnd();
				}
			}

			if (TargetPC->bIsDragging)
			{
				TargetPC->HandleDragging(MousePos);
			}
		}
	}
	else if (TeamID == 1 && VirtualCursorWidget) // Player 1 使用虚拟光标拖拽
	{
		if (bIsDragging)
		{
			HandleDragging(VirtualCursorPosition);
		}
	}

	// 更新血条 UI
	UpdateHealthBars();

	// 确保高亮管理器的 Owner 正确 (分屏修复)
	if (HighlightActor && GetPawn() && HighlightActor->GetOwner() != GetPawn())
	{
		HighlightActor->SetOwner(GetPawn());
		UE_LOG(LogTemp, Warning, TEXT("[PC PlayerTick] Fixed HighlightActor Owner to: %s"), *GetPawn()->GetName());
	}

	// 确保高亮管理器已初始化 (延迟初始化，防止 GameGrid 还未准备好)
	if (HighlightActor && HighlightActor->HighlightISM)
	{
		// 检查是否有 Mesh（判断是否已初始化）
		if (!HighlightActor->HighlightISM->GetStaticMesh())
		{
			AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
			if (GS && GS->GameGrid && GS->GameGrid->TileMesh)
			{
				HighlightActor->InitVisuals(GS->GameGrid->TileMesh, GS->GameGrid->MaterialHighlight);
				UE_LOG(LogTemp, Warning, TEXT("[PC PlayerTick] Deferred HighlightActor InitVisuals called. Mesh: %s, Material: %s"),
					GS->GameGrid->TileMesh ? TEXT("Valid") : TEXT("NULL"),
					GS->GameGrid->MaterialHighlight ? TEXT("Valid") : TEXT("NULL"));
			}
		}
	}

	// 战斗阶段逻辑：回蓝和抽牌
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Battle)
		{
			RegenerateMana(DeltaTime);
			ProcessAutoDraw(DeltaTime);
		}
	}

}

void AAutoChessPlayerController::HandleClick(const FVector2D& ScreenPosition)
{
	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ScreenPosition.X, ScreenPosition.Y, WorldLoc, WorldDir))
	{
		FVector End = WorldLoc + WorldDir * 10000.0f;
		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, WorldLoc, End, ECC_Visibility))
		{
			AActor* HitActor = Hit.GetActor();

			// 1. 点击格子放置单位
			if (SelectedCardClass && HitActor && HitActor->IsA(AAutoChessGrid::StaticClass()))
			{
				if (AAutoChessGrid* Grid = Cast<AAutoChessGrid>(HitActor))
				{
					int32 GridX, GridY;
					if (Grid->WorldToGrid(Hit.Location, GridX, GridY))
					{
						PlaceUnit(SelectedCardClass, GridX, GridY);
						SelectedCardClass = nullptr; // 放置后清除选择
					}
				}
			}
			// 2. 点击单位 (例如出售或查看信息)
			else if (AAutoChessUnitBase* ClickedUnit = Cast<AAutoChessUnitBase>(HitActor))
			{
				// 简单的出售逻辑：点击自己的单位出售
				// SellUnit(ClickedUnit);
			}
		}
	}
}

void AAutoChessPlayerController::BuyCard(TSubclassOf<UAutoChessCardBase> CardClass)
{
	if (CardClass)
	{
		// 检查金币是否足够 (逻辑待完善)
		// AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
		// if (GS->Player1Gold >= Cost) ...

		SelectedCardClass = CardClass;
		UE_LOG(LogTemp, Log, TEXT("Card Selected: %s"), *CardClass->GetName());
	}
}

void AAutoChessPlayerController::PlaceUnit(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY)
{
	if (!CardClass) return;

	// 获取卡牌默认对象以读取属性
	UAutoChessCardBase* CardCDO = CardClass->GetDefaultObject<UAutoChessCardBase>();
	if (!CardCDO || !CardCDO->UnitClass) return;

	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (GS && !GS->IsGridOccupied(GridX, GridY))
	{
		// 生成单位
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			FVector SpawnLoc = Grid->GridToWorld(GridX, GridY);
			SpawnLoc.Z += 50.0f; // 稍微抬高一点

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AAutoChessUnitBase* NewUnit = GetWorld()->SpawnActor<AAutoChessUnitBase>(CardCDO->UnitClass, SpawnLoc, FRotator::ZeroRotator, SpawnParams);
			
			if (NewUnit)
			{
				NewUnit->TeamID = TeamID; // 使用当前控制器的 TeamID
				NewUnit->SnapToGrid(); // 确保对齐
			}
		}
	}
}

void AAutoChessPlayerController::SellUnit(AAutoChessUnitBase* Unit)
{
	if (Unit)
	{
		// 返还金币逻辑...
		Unit->Destroy();
	}
}

void AAutoChessPlayerController::HandleDragStart(const FVector2D& ScreenPosition)
{
	// 只有在准备阶段允许拖拽
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase != EAutoChessPhase::Preparation) return;
	}

	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ScreenPosition.X, ScreenPosition.Y, WorldLoc, WorldDir))
	{
		FVector End = WorldLoc + WorldDir * 10000.0f;
		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, WorldLoc, End, ECC_Visibility))
		{
			if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(Hit.GetActor()))
			{
				// 只能拖拽自己的单位
				if (Unit->TeamID != TeamID) return; 

				DraggedUnit = Unit;
				bIsDragging = true;
				
				DragOffset = FVector::ZeroVector;

				// 暂时禁用碰撞，防止拖拽时扫到其他东西
				DraggedUnit->SetActorEnableCollision(false);
			}
		}
	}
}

void AAutoChessPlayerController::HandleDragging(const FVector2D& ScreenPosition)
{
	if (!bIsDragging || !DraggedUnit) return;

	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ScreenPosition.X, ScreenPosition.Y, WorldLoc, WorldDir))
	{
		// 射线检测到了地面或棋盘
		FVector End = WorldLoc + WorldDir * 10000.0f;
		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, WorldLoc, End, ECC_Visibility))
		{
			FVector NewLocation = Hit.Location;
			
			// 保持单位原有的 Z 高度
			NewLocation.Z = DraggedUnit->GetActorLocation().Z;
			
			DraggedUnit->SetActorLocation(NewLocation);
		}
	}
}

void AAutoChessPlayerController::HandleDragEnd()
{
	if (!bIsDragging || !DraggedUnit) return;

	// 恢复碰撞
	DraggedUnit->SetActorEnableCollision(true);

	// 1. 获取拖拽结束时的目标格子坐标
	// 先不直接 Snap，而是先计算目标位置
	FIntPoint TargetGridPos = DraggedUnit->CurrentGridPos; // 默认回原位
	
	if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			int32 X, Y;
			// 使用当前 Actor 位置计算所在的格子
			if (Grid->WorldToGrid(DraggedUnit->GetActorLocation(), X, Y))
			{
				TargetGridPos = FIntPoint(X, Y);
			}
		}
		
		// 2. 检查是否有单位在目标格子
		AAutoChessUnitBase* OverlappingUnit = nullptr;
		for (AAutoChessUnitBase* OtherUnit : GS->AllUnits)
		{
			if (OtherUnit && OtherUnit != DraggedUnit && IsValid(OtherUnit))
			{
				if (OtherUnit->CurrentGridPos == TargetGridPos)
				{
					OverlappingUnit = OtherUnit;
					break;
				}
			}
		}

		if (OverlappingUnit)
		{
			// 3. 交换位置逻辑
			// 记录被拖拽单位原来的位置
			FIntPoint OriginalPos = DraggedUnit->CurrentGridPos;

			// 交换坐标
			DraggedUnit->CurrentGridPos = TargetGridPos;
			OverlappingUnit->CurrentGridPos = OriginalPos;

			// 两个单位都吸附到新格子
			DraggedUnit->SnapToGrid();
			OverlappingUnit->SnapToGrid();

			UE_LOG(LogTemp, Log, TEXT("Swapped Unit %s with %s"), *DraggedUnit->GetName(), *OverlappingUnit->GetName());
		}
		else
		{
			// 4. 没有重叠，直接移动过去
			// 这里需要更新 CurrentGridPos，因为 SnapToGrid 依赖它或者反之
			// 实际上 SnapToGrid 会根据当前 WorldLocation 计算 GridPos 并吸附
			// 但为了保险，我们手动设置一下
			DraggedUnit->CurrentGridPos = TargetGridPos;
			DraggedUnit->SnapToGrid();
		}
	}
	else
	{
		DraggedUnit->SnapToGrid();
	}

	bIsDragging = false;
	DraggedUnit = nullptr;
}

void AAutoChessPlayerController::UpdateHealthBars()
{
	if (!UnitHealthBarClass) return;

	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS) return;

	// 1. 标记所有现有的 Widget 为“待删除”
	TArray<AAutoChessUnitBase*> UnitsToRemove;
	for (auto& Elem : UnitHealthBars)
	{
		if (!IsValid(Elem.Key) || !GS->AllUnits.Contains(Elem.Key))
		{
			UnitsToRemove.Add(Elem.Key);
		}
	}

	// 移除无效单位的 Widget
	for (AAutoChessUnitBase* Unit : UnitsToRemove)
	{
		if (UnitHealthBars[Unit])
		{
			UnitHealthBars[Unit]->RemoveFromParent();
		}
		UnitHealthBars.Remove(Unit);
	}

	// 2. 遍历所有单位，更新或创建 Widget
	for (AAutoChessUnitBase* Unit : GS->AllUnits)
	{
		if (!IsValid(Unit)) continue;

		UAutoChessUnitWidget* Widget = nullptr;

		// 查找或创建
		if (UnitHealthBars.Contains(Unit))
		{
			Widget = UnitHealthBars[Unit];
		}
		else
		{
			Widget = CreateWidget<UAutoChessUnitWidget>(this, UnitHealthBarClass);
			if (Widget)
			{
				Widget->AddToViewport(); // 添加到视口
				UnitHealthBars.Add(Unit, Widget);
			}
		}

		// 更新位置和数据
		if (Widget)
		{
			// 更新数据 - 从 GAS AttributeSet 读取
			// 更新数据 - 从 GAS AttributeSet 读取
			float CurrentHealth = Unit->Health; // 默认值
			float CurrentMaxHealth = Unit->MaxHealth;
			float CurrentShield = 0.0f;

			if (Unit->AttributeSet)
			{
				CurrentHealth = Unit->AttributeSet->GetHealth();
				CurrentMaxHealth = Unit->AttributeSet->GetMaxHealth();
				CurrentShield = Unit->AttributeSet->GetShield();
			}

			Widget->UpdateHealth(CurrentHealth, CurrentMaxHealth, CurrentShield);
			
			// 更新法力值
			float CurrentMana = Unit->Mana;
			float CurrentMaxMana = Unit->MaxMana;
			if (Unit->AttributeSet)
			{
				CurrentMana = Unit->AttributeSet->GetMana();
				CurrentMaxMana = Unit->AttributeSet->GetMaxMana();
			}
			Widget->UpdateMana(CurrentMana, CurrentMaxMana);

			Widget->SetTeamColor(Unit->TeamID);

			// 更新位置 (世界 -> 屏幕)
			FVector WorldLoc = Unit->GetActorLocation();
			WorldLoc.Z += HealthBarZOffset; // 使用可配置的偏移

			FVector2D ScreenPos;
			if (ProjectWorldLocationToScreen(WorldLoc, ScreenPos))
			{
				Widget->SetPositionInViewport(ScreenPos);
				Widget->SetVisibility(ESlateVisibility::HitTestInvisible);

				// 计算缩放 (近大远小)
				FVector CameraLoc;
				FRotator CameraRot;
				GetPlayerViewPoint(CameraLoc, CameraRot);

				float Dist = FVector::Dist(CameraLoc, WorldLoc);
				// 避免除以0
				if (Dist < 1.0f) Dist = 1.0f;

				float Scale = HealthBarRefDistance / Dist;
				Scale = FMath::Clamp(Scale, HealthBarMinScale, HealthBarMaxScale);

				Widget->SetRenderScale(FVector2D(Scale, Scale));
			}
			else
			{
				// 如果在屏幕外，隐藏
				Widget->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
}

void AAutoChessPlayerController::RegenerateMana(float DeltaTime)
{
	if (Mana < MaxMana)
	{
		Mana += ManaRegenRate * DeltaTime;
		if (Mana > MaxMana)
		{
			Mana = MaxMana;
		}
		// 广播法力更新
		OnManaUpdated.Broadcast(Mana, MaxMana);
	}
}

void AAutoChessPlayerController::ProcessAutoDraw(float DeltaTime)
{
	DrawCardTimer += DeltaTime;
	if (DrawCardTimer >= DrawCardInterval)
	{
		DrawCardTimer = 0.0f;
		DrawCard();
	}
}

void AAutoChessPlayerController::DrawCard()
{
	if (DeckConfig.Num() == 0) return;

	// 随机抽一张
	int32 Index = FMath::RandRange(0, DeckConfig.Num() - 1);
	TSubclassOf<UAutoChessCardBase> CardClass = DeckConfig[Index];

	if (CardClass)
	{
		// 实例化卡牌对象
		UAutoChessCardBase* NewCard = NewObject<UAutoChessCardBase>(this, CardClass);
		if (NewCard)
		{
			HandCards.Add(NewCard);
			// 广播手牌更新
			OnHandUpdated.Broadcast(HandCards);
			// 可以在这里播放抽牌音效或UI动画
		}
	}
}

bool AAutoChessPlayerController::TryPlayCardAtPosition(UAutoChessCardBase* Card, const FVector2D& ScreenPosition)
{
	UE_LOG(LogTemp, Warning, TEXT("[TryPlayCardAtPosition] Called with Card: %s"), Card ? *Card->CardName.ToString() : TEXT("NULL"));

	if (!IsValid(Card))
	{
		UE_LOG(LogTemp, Error, TEXT("[TryPlayCardAtPosition] Card is Invalid or NULL!"));
		return false;
	}

	// 检查游戏阶段
	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Settlement) return false;
	}

	if (!GS || !GS->GameGrid) 
	{
		UE_LOG(LogTemp, Error, TEXT("[TryPlayCardAtPosition] GameState or Grid is NULL!"));
		return false;
	}

	// 直接使用传入的 ScreenPosition (已经包含了正确的坐标源)
	FVector2D ViewportPosition = ScreenPosition;
	
	// 注意：ScreenPosition 通常已经是视口坐标 (Slate Units) 或 像素坐标
	// 如果来自 GetCursorPosition()，它是像素坐标 (ViewportPosition * Scale)
	// 如果来自 UMG OnDrop，它是 Geometry 转换后的坐标
	
	// 这里假设传入的是像素坐标 (因为 GetCursorPosition 返回的是像素)
	// 如果 DeprojectScreenPositionToWorld 需要像素坐标，则直接使用
	// 如果需要 Slate Units，则除以 Scale
	
	// DeprojectScreenPositionToWorld 文档说: "ScreenPosition: The position in screen space (pixels)"
	// 所以我们直接用 ScreenPosition 即可，不需要再乘以 Scale (除非传入的是 Slate Units)
	
	// 我们的 GetCursorPosition 返回的是: GetMousePositionOnViewport * Scale (即像素)
	// 所以这里直接用 ScreenPosition
	ViewportPosition = ScreenPosition;

	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ViewportPosition.X, ViewportPosition.Y, WorldLoc, WorldDir))
	{
		// 自动计算交互平面高度（从棋盘中心格子的实际位置）
		// 这样在所有设备上都能保证准确性
		float GridZ;
		if (GS->GameGrid->GridWidth > 0 && GS->GameGrid->GridHeight > 0)
		{
			// 获取中心格子的世界坐标
			int32 CenterX = GS->GameGrid->GridWidth / 2;
			int32 CenterY = GS->GameGrid->GridHeight / 2;
			FVector CenterWorldPos = GS->GameGrid->GridToWorld(CenterX, CenterY);
			GridZ = CenterWorldPos.Z; // 使用中心格子的实际 Z 坐标作为平面高度
		}
		else
		{
			// 回退方案：使用 Grid Actor 的位置
			GridZ = GS->GameGrid->GetActorLocation().Z;
		}

		if (FMath::Abs(WorldDir.Z) > KINDA_SMALL_NUMBER)
		{
			float t = (GridZ - WorldLoc.Z) / WorldDir.Z;
			
			if (t > 0.0f)
			{
				FVector Intersection = WorldLoc + WorldDir * t;
				
				int32 GridX = -1;
				int32 GridY = -1;
				
				// 将世界坐标转换为格子坐标（即使在边缘也允许）
				GS->GameGrid->WorldToGrid(Intersection, GridX, GridY);
				
				UE_LOG(LogTemp, Warning, TEXT("[TryPlayCardAtPosition] Plane Intersection at GridPos: (%d, %d)"), GridX, GridY);
				
				// 查找格子上的单位（可能为空）
				AAutoChessUnitBase* TargetUnit = GS->GetUnitAtGrid(GridX, GridY);
				UE_LOG(LogTemp, Warning, TEXT("[TryPlayCardAtPosition] Target unit on grid: %s"), TargetUnit ? *TargetUnit->GetName() : TEXT("NULL (Empty Grid)"));
				
				// 允许对空地施放（AOE 技能）
				return PlayCard(Card, TargetUnit);
			}
		}
	}


	UE_LOG(LogTemp, Warning, TEXT("[TryPlayCardAtPosition] Failed to find valid target"));
	return false;
}

void AAutoChessPlayerController::UpdateDragHighlight(UAutoChessCardBase* Card, const FVector2D& ScreenPosition)
{
	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS || !GS->GameGrid) return;

	if (!Card)
	{
		if (HighlightActor && GS && GS->GameGrid)
		{
			HighlightActor->UpdateHighlights(GS->GameGrid, TArray<FIntPoint>());
		}
		return;
	}

	// 使用 WidgetLayoutLibrary 获取视口鼠标位置 (Slate Units)
	FVector2D ViewportPosition = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
	
	// 获取视口缩放比例 (DPI Scale)
	float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
	
	// 将 Slate Units 转换为 Pixels
	ViewportPosition *= ViewportScale;

	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ViewportPosition.X, ViewportPosition.Y, WorldLoc, WorldDir))
	{
		// 自动计算交互平面高度（从棋盘中心格子的实际位置）
		float GridZ;
		if (GS->GameGrid->GridWidth > 0 && GS->GameGrid->GridHeight > 0)
		{
			int32 CenterX = GS->GameGrid->GridWidth / 2;
			int32 CenterY = GS->GameGrid->GridHeight / 2;
			FVector CenterWorldPos = GS->GameGrid->GridToWorld(CenterX, CenterY);
			GridZ = CenterWorldPos.Z;
		}
		else
		{
			GridZ = GS->GameGrid->GetActorLocation().Z;
		}

		// 计算射线与平面的交点: t = (PlaneZ - RayOriginZ) / RayDirZ
		if (FMath::Abs(WorldDir.Z) > KINDA_SMALL_NUMBER)
		{
			float t = (GridZ - WorldLoc.Z) / WorldDir.Z;
			
			// 只有交点在相机前方才有效
			if (t > 0.0f)
			{
				FVector Intersection = WorldLoc + WorldDir * t;
				
				int32 CenterX = -1;
				int32 CenterY = -1;
				
				// 转换为格子坐标
				if (GS->GameGrid->WorldToGrid(Intersection, CenterX, CenterY))
				{
					// 高亮逻辑
					TArray<FIntPoint> HighlightPoints;
					int32 Radius = Card->AOERadius;

					for (int32 x = CenterX - Radius; x <= CenterX + Radius; x++)
					{
						for (int32 y = CenterY - Radius; y <= CenterY + Radius; y++)
						{
							if (GS->GameGrid->IsValidGridPosition(x, y))
							{
								HighlightPoints.Add(FIntPoint(x, y));
							}
						}
					}
					
					// 缓存高亮格子列表到卡牌对象中
					Card->HighlightedTiles = HighlightPoints;
					
					// 使用专属的高亮管理器
					if (HighlightActor)
					{
						HighlightActor->UpdateHighlights(GS->GameGrid, HighlightPoints);
					}
					return;
				}
			}
		}
	}

	// 如果都没匹配上，清除高亮
	if (HighlightActor)
	{
		HighlightActor->UpdateHighlights(GS->GameGrid, TArray<FIntPoint>());
	}
}

bool AAutoChessPlayerController::PlayCard(UAutoChessCardBase* Card, AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Called with Card: %s, Target: %s"), 
		Card ? *Card->CardName.ToString() : TEXT("NULL"),
		Target ? *Target->GetName() : TEXT("NULL"));

	if (!IsValid(Card) || !HandCards.Contains(Card))
	{
		UE_LOG(LogTemp, Error, TEXT("[PlayCard] Card is Invalid, NULL or not in hand!"));
		return false;
	}

	// 检查游戏阶段：结算阶段禁止出牌
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Settlement)
		{
			UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Cannot play card during Settlement phase!"));
			return false;
		}
	}

	// 移除严格的目标验证逻辑，允许 AOE 法术对空地施放
	// 具体的伤害判定逻辑交由 GAS (Gameplay Ability) 处理
	UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Skipping target validation to allow AOE casting."));

	// 2. 检查费用
	UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Checking mana: Current=%f, Required=%d"), Mana, Card->Cost);
	if (Mana >= Card->Cost)
	{
		// 扣费
		Mana -= Card->Cost;
		OnManaUpdated.Broadcast(Mana, MaxMana);
		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Mana deducted, new Mana: %f"), Mana);

		// 触发效果
		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Calling Card->OnPlayed()..."));
		Card->OnPlayed(this, Target);

		// 移除手牌
		HandCards.Remove(Card);
		OnHandUpdated.Broadcast(HandCards);
		
		// 成功打出后清除高亮
		if (IsValid(HighlightActor) && GetWorld())
		{
			if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
			{
				if (GS->GameGrid)
				{
					HighlightActor->UpdateHighlights(GS->GameGrid, TArray<FIntPoint>());
				}
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Card played successfully!"));
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Not enough mana!"));
	return false;
}

FVector2D AAutoChessPlayerController::GetCursorPosition()
{
	// 如果是 Player 1 且有虚拟光标，返回虚拟光标位置
	if (TeamID == 1 && VirtualCursorWidget)
	{
		return VirtualCursorPosition;
	}

	// 否则返回鼠标位置 (Player 0 或 fallback)
	return UWidgetLayoutLibrary::GetMousePositionOnViewport(this) * UWidgetLayoutLibrary::GetViewportScale(this);
}

void AAutoChessPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftClick", IE_Pressed, this, &AAutoChessPlayerController::OnLeftClickPressed);
	InputComponent->BindAction("LeftClick", IE_Released, this, &AAutoChessPlayerController::OnLeftClickReleased);
	
	// 绑定手柄 A 键作为点击 (Face Button Bottom)
	InputComponent->BindKey(EKeys::Gamepad_FaceButton_Bottom, IE_Pressed, this, &AAutoChessPlayerController::OnLeftClickPressed);
	InputComponent->BindKey(EKeys::Gamepad_FaceButton_Bottom, IE_Released, this, &AAutoChessPlayerController::OnLeftClickReleased);
}

void AAutoChessPlayerController::OnLeftClickPressed()
{
	HandleClick(GetCursorPosition());
}

void AAutoChessPlayerController::OnLeftClickReleased()
{
	if (bIsDragging)
	{
		HandleDragEnd();
	}
}


