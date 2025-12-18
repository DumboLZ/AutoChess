#include "AutoChessPlayerController.h"
#include "AutoChessCardBase.h"
#include "AutoChessGrid.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h" // For GEngine
#include "Blueprint/UserWidget.h"
#include "AutoChessUnitWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h" 
#include "AutoChessHighlightActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"
#include "AutoChessUnitData.h"
#include "AutoChessAttributeSet.h"

// FCardDisplayData 构造函数实现
FCardDisplayData::FCardDisplayData(UAutoChessCardBase* Card)
{
	if (Card)
	{
		CardName = Card->CardName;
		CardDescription = Card->CardDescription;
		Cost = Card->Cost;
		bConsumeAllMana = Card->bConsumeAllMana;
		Icon = Card->Icon;
		DisplayDuration = Card->DisplayDuration;
	}
}

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

void AAutoChessPlayerController::OnRep_Mana()
{
	OnManaUpdated.Broadcast(Mana, MaxMana);
}

void AAutoChessPlayerController::OnRep_HandCards()
{
	// 过滤掉尚未复制完成的空指针
	TArray<UAutoChessCardBase*> ValidCards;
	for (UAutoChessCardBase* Card : HandCards)
	{
		if (Card)
		{
			ValidCards.Add(Card);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("[PC %d Client] OnRep_HandCards: %d cards (Valid: %d)"), 
		TeamID, HandCards.Num(), ValidCards.Num());
	
	// 广播委托 (使用过滤后的列表)
	OnHandUpdated.Broadcast(ValidCards);
	
	// 如果HUD已创建，直接调用更新
	if (MainHUDWidget)
	{
		// 注意：这里需要包含 HUD 头文件才能 Cast，或者使用 Interface
		// 为了避免循环依赖，我们暂时只广播委托。
		// 如果蓝图绑定了 OnHandUpdated，应该能收到。
	}
}

void AAutoChessPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AAutoChessPlayerController, Mana, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(AAutoChessPlayerController, HandCards, COND_OwnerOnly);
	DOREPLIFETIME(AAutoChessPlayerController, TeamID);
}

bool AAutoChessPlayerController::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	// 复制手牌中的卡牌对象
	for (UAutoChessCardBase* Card : HandCards)
	{
		if (Card)
		{
			WroteSomething |= Channel->ReplicateSubobject(Card, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
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

	// Debug: 监听比赛结束事件，确认是否收到广播
	if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
	{
		GS->OnMatchWinnerChanged.AddDynamic(this, &AAutoChessPlayerController::OnDebugMatchWinnerChanged);
	}
}

void AAutoChessPlayerController::OnDebugMatchWinnerChanged(int32 WinnerTeamID)
{
	UE_LOG(LogTemp, Error, TEXT("[PC %d] >>> DEBUG: OnMatchWinnerChanged Received! Winner: %d <<<"), TeamID, WinnerTeamID);
}

void AAutoChessPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();

	// 在这里设置 TeamID 最安全，因为 LocalPlayer 肯定存在
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		int32 ControllerId = LocalPlayer->GetControllerId();
		// TeamID = ControllerId; // FIX: 不要在这里设置 TeamID，应该由 Server 分配并复制
		UE_LOG(LogTemp, Warning, TEXT("[PlayerController::ReceivedPlayer] Found LocalPlayer. ControllerId: %d. Waiting for TeamID replication..."), 
			ControllerId);

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
	// else: Remote player on server, do nothing
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

	// 处理鼠标点击和拖拽
	if (IsLocalController())
	{
		// 获取视口鼠标位置 (Slate Units)
		FVector2D MousePos = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
		float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
		MousePos *= ViewportScale; // 转换为像素

		if (WasInputKeyJustPressed(EKeys::LeftMouseButton))
		{
			HandleDragStart(MousePos);
			if (!bIsDragging)
			{
				HandleClick(MousePos);
			}
		}
		else if (WasInputKeyJustReleased(EKeys::LeftMouseButton))
		{
			if (bIsDragging)
			{
				HandleDragEnd();
			}
		}

		if (bIsDragging)
		{
			HandleDragging(MousePos);
		}
	}
	else if (TeamID == 1 && VirtualCursorWidget) // Player 1 使用虚拟光标拖拽
	{
		if (bIsDragging)
		{
			HandleDragging(VirtualCursorPosition);
		}
	}

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
	// 注意：这部分逻辑已移至 GameMode 统一调用，避免 Host 执行两次
	/*
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Battle)
		{
			RegenerateMana(DeltaTime);
			ProcessAutoDraw(DeltaTime);
		}
	}
	*/

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
	if (HasAuthority())
	{
		// Server Logic
		if (CardClass)
		{
			// 检查金币是否足够 (逻辑待完善)
			// AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
			// if (GS->Player1Gold >= Cost) ...

			SelectedCardClass = CardClass;
			UE_LOG(LogTemp, Log, TEXT("Card Selected: %s"), *CardClass->GetName());
		}
	}
	else
	{
		// Client Request
		Server_BuyCard(CardClass);
	}
}

void AAutoChessPlayerController::Server_BuyCard_Implementation(TSubclassOf<UAutoChessCardBase> CardClass)
{
	BuyCard(CardClass);
}

void AAutoChessPlayerController::PlaceUnit(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY)
{
	if (HasAuthority())
	{
		// Server Logic
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
					
					// 注册到 GameState (Server Only)
					GS->RegisterUnit(NewUnit);
				}
			}
		}
	}
	else
	{
		// Client Request
		Server_PlaceUnit(CardClass, GridX, GridY);
	}
}

void AAutoChessPlayerController::Server_PlaceUnit_Implementation(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY)
{
	PlaceUnit(CardClass, GridX, GridY);
}

void AAutoChessPlayerController::SellUnit(AAutoChessUnitBase* Unit)
{
	if (HasAuthority())
	{
		// Server Logic
		if (Unit)
		{
			// 返还金币逻辑...
			
			// 从 GameState 注销
			if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
			{
				GS->UnregisterUnit(Unit);
			}
			
			Unit->Destroy();
		}
	}
	else
	{
		// Client Request
		Server_SellUnit(Unit);
	}
}

void AAutoChessPlayerController::Server_SellUnit_Implementation(AAutoChessUnitBase* Unit)
{
	SellUnit(Unit);
}

#include "AutoChessGhost.h"

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
				DragStartZ = Unit->GetActorLocation().Z; // 缓存初始高度
				
				DragOffset = FVector::ZeroVector;

				// 计算正确的朝向 (基于队伍)
				FRotator DragRotation = FRotator::ZeroRotator;
				if (TeamID == 0)
				{
					DragRotation = FRotator(0.0f, 90.0f, 0.0f);
				}
				else
				{
					DragRotation = FRotator(0.0f, -90.0f, 0.0f);
				}

				// 生成幽灵 Actor
				FActorSpawnParameters SpawnParams;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				DragGhost = GetWorld()->SpawnActor<AAutoChessGhost>(AAutoChessGhost::StaticClass(), Unit->GetActorLocation(), DragRotation, SpawnParams);
				
				if (DragGhost)
				{
					DragGhost->InitVisuals(Unit->GetMesh()->GetSkeletalMeshAsset(), nullptr); // 可选：设置半透明材质
					
					// 关键：同步 Mesh 的相对旋转 (因为 Unit Blueprint 中可能旋转了 Mesh)
					DragGhost->Mesh->SetRelativeRotation(Unit->GetMesh()->GetRelativeRotation());
					DragGhost->Mesh->SetRelativeScale3D(Unit->GetMesh()->GetRelativeScale3D());
				}

				// 隐藏真实单位 (本地)
				DraggedUnit->SetActorHiddenInGame(true);
			}
		}
	}
}

void AAutoChessPlayerController::HandleDragging(const FVector2D& ScreenPosition)
{
	if (!bIsDragging || !DragGhost) return; // 拖拽幽灵

	FVector WorldLoc, WorldDir;
	if (DeprojectScreenPositionToWorld(ScreenPosition.X, ScreenPosition.Y, WorldLoc, WorldDir))
	{
		// 使用平面相交计算，避免被其他单位遮挡
		if (FMath::Abs(WorldDir.Z) > KINDA_SMALL_NUMBER)
		{
			// 计算与拖拽平面的交点
			float t = (DragStartZ - WorldLoc.Z) / WorldDir.Z;
			
			if (t > 0.0f)
			{
				FVector Intersection = WorldLoc + WorldDir * t;
				DragGhost->SetActorLocation(Intersection);
			}
		}
	}
}

void AAutoChessPlayerController::HandleDragEnd()
{
	if (!bIsDragging || !DraggedUnit) return;

	// 恢复真实单位显示
	DraggedUnit->SetActorHiddenInGame(false);

	// 获取目标位置 (从幽灵位置)
	FVector FinalLoc = DraggedUnit->GetActorLocation();
	if (DragGhost)
	{
		FinalLoc = DragGhost->GetActorLocation();
		DragGhost->Destroy();
		DragGhost = nullptr;
	}

	// 1. 获取拖拽结束时的目标格子坐标
	FIntPoint TargetGridPos = DraggedUnit->CurrentGridPos; // 默认回原位
	
	if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			int32 X, Y;
			// 使用幽灵位置计算所在的格子
			if (Grid->WorldToGrid(FinalLoc, X, Y))
			{
				TargetGridPos = FIntPoint(X, Y);
			}
		}
	}

	// 2. 发送 RPC 请求移动 (Client -> Server)
	Server_MoveUnit(DraggedUnit, TargetGridPos.X, TargetGridPos.Y);

	// 3. 客户端预测 (可选，如果 OnRep 足够快可以省略，或者先吸附过去)
	// 由于我们用了 Ghost，这里可以直接让 Unit 吸附到目标位置等待 Server 确认
	DraggedUnit->CurrentGridPos = TargetGridPos; 
	DraggedUnit->SnapToGrid();

	bIsDragging = false;
	DraggedUnit = nullptr;
}

void AAutoChessPlayerController::Server_MoveUnit_Implementation(AAutoChessUnitBase* Unit, int32 TargetGridX, int32 TargetGridY)
{
	if (!Unit || !HasAuthority()) return;

	// 验证所有权
	if (Unit->TeamID != TeamID) return;

	// 验证游戏阶段
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase != EAutoChessPhase::Preparation) return;
	}

	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS) return;

	FIntPoint TargetPos(TargetGridX, TargetGridY);
	
	// 检查是否有单位在目标格子
	AAutoChessUnitBase* OverlappingUnit = nullptr;
	for (AAutoChessUnitBase* OtherUnit : GS->AllUnits)
	{
		if (OtherUnit && OtherUnit != Unit && IsValid(OtherUnit))
		{
			if (OtherUnit->CurrentGridPos == TargetPos)
			{
				OverlappingUnit = OtherUnit;
				break;
			}
		}
	}

	if (OverlappingUnit)
	{
		// 交换位置逻辑
		// 只能交换己方单位
		if (OverlappingUnit->TeamID == TeamID)
		{
			FIntPoint OriginalPos = Unit->CurrentGridPos;

			Unit->CurrentGridPos = TargetPos;
			OverlappingUnit->CurrentGridPos = OriginalPos;

			Unit->SnapToGrid();
			OverlappingUnit->SnapToGrid();
		}
		else
		{
			// 目标位置有敌方单位 (理论上准备阶段不应该发生，除非是在对方半场)
			// 拒绝移动，回弹
			Unit->SnapToGrid();
		}
	}
	else
	{
		// 移动到空位
		// 检查是否在己方半场 (可选)
		// 简单起见，允许在整个棋盘移动，或者根据 TeamID 限制 Y 轴范围
		// Player 0: Y [0, 3], Player 1: Y [4, 7]
		
		Unit->CurrentGridPos = TargetPos;
		Unit->SnapToGrid();
	}

	// 移动后重置朝向 (确保面向敌人)
	FRotator TargetRotation = FRotator::ZeroRotator;
	if (Unit->TeamID == 0)
	{
		TargetRotation = FRotator(0.0f, 90.0f, 0.0f);
	}
	else
	{
		TargetRotation = FRotator(0.0f, -90.0f, 0.0f);
	}
	Unit->SetActorRotation(TargetRotation);
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

void AAutoChessPlayerController::AddMana(float Amount)
{
	if (!HasAuthority()) return;

	Mana = FMath::Clamp(Mana + Amount, 0.0f, MaxMana);
	
	// 广播法力更新
	OnManaUpdated.Broadcast(Mana, MaxMana);
	
	UE_LOG(LogTemp, Warning, TEXT("[PC %d] AddMana: %f, New Mana: %f"), TeamID, Amount, Mana);
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
	// FVector2D ViewportPosition = ScreenPosition;
	
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
	// FIX: 强制使用 GetCursorPosition()
	// 原因：蓝图 OnDrop 传入的通常是绝对坐标 (Absolute)，而 Deproject 需要视口坐标 (Viewport Space)
	// GetCursorPosition() 已经处理了 Viewport Scale 和 Mouse/Virtual Cursor 的差异，且返回的是 Viewport Pixels
	FVector2D ViewportPosition = GetCursorPosition();
	
	UE_LOG(LogTemp, Warning, TEXT("[TryPlayCardAtPosition] Input ScreenPos: %s, Used ViewportPos: %s"), 
		*ScreenPosition.ToString(), *ViewportPosition.ToString());

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
				
				// 允许对空地施放（AOE 技能），并传入格子坐标
				return PlayCard(Card, TargetUnit, FIntPoint(GridX, GridY));
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

bool AAutoChessPlayerController::PlayCard(UAutoChessCardBase* Card, AActor* Target, FIntPoint TargetGridPos)
{
	UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Called with Card: %s, Target: %s, GridPos: (%d, %d)"), 
		Card ? *Card->CardName.ToString() : TEXT("NULL"),
		Target ? *Target->GetName() : TEXT("NULL"),
		TargetGridPos.X, TargetGridPos.Y);

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

	if (HasAuthority())
	{
		// --- Server Logic ---

		// 如果提供了 GridPos，重新计算 HighlightedTiles (确保 AOE 技能有正确的目标范围)
		if (TargetGridPos.X != -1 && TargetGridPos.Y != -1)
		{
			AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
			if (GS && GS->GameGrid)
			{
				TArray<FIntPoint> HighlightPoints;
				int32 Radius = Card->AOERadius;
				
				// 简单的 AOE 范围计算 (正方形)
				for (int32 x = TargetGridPos.X - Radius; x <= TargetGridPos.X + Radius; x++)
				{
					for (int32 y = TargetGridPos.Y - Radius; y <= TargetGridPos.Y + Radius; y++)
					{
						if (GS->GameGrid->IsValidGridPosition(x, y))
						{
							HighlightPoints.Add(FIntPoint(x, y));
						}
					}
				}
				
				// 更新卡牌的高亮列表 (供 GAS 使用)
				Card->HighlightedTiles = HighlightPoints;
				UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Server recalculated HighlightedTiles: %d tiles"), HighlightPoints.Num());
			}
		}

		// 移除严格的目标验证逻辑，允许 AOE 法术对空地施放
		// 具体的伤害判定逻辑交由 GAS (Gameplay Ability) 处理
		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Skipping target validation to allow AOE casting."));

		// 2. 检查费用
		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Checking mana: Current=%f, Required=%d"), Mana, Card->Cost);
		if (Mana >= Card->Cost)
		{
			// 设置 LastTargetGridPos，供 OnPlayed 中的展示逻辑使用
			Card->LastTargetGridPos = TargetGridPos;

			// **先触发效果**（GA可以读到完整的法力值）
			UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Calling Card->OnPlayed()..."));
			Card->OnPlayed(this, Target);

			// **然后扣费**（但如果勾选了"消耗所有法力"，由GA自行处理）
			if (!Card->bConsumeAllMana)
			{
				// 普通卡牌：自动扣除Cost
				Mana -= Card->Cost;
				OnManaUpdated.Broadcast(Mana, MaxMana);
				UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Auto deducted Cost: %d, Remaining Mana: %f"), Card->Cost, Mana);
			}
			else
			{
				// "消耗所有法力"卡牌：由GA自行处理法力消耗
				// 这里不扣费，让GA根据消耗的法力值决定效果强度
				UE_LOG(LogTemp, Warning, TEXT("[PlayCard] bConsumeAllMana=true, GA will handle mana consumption"));
			}

			// 移除手牌
			HandCards.Remove(Card);
			OnHandUpdated.Broadcast(HandCards);
			
			// 成功打出后清除高亮 (Server 也需要清除吗？主要是 Client 需要)
			// Server 可以通知 Client 清除，或者 Client 自己清除
			// 这里我们让 Client 在 RPC 返回后清除，或者通过 Rep 通知
			
			UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Card played successfully!"));
			return true;
		}

		UE_LOG(LogTemp, Warning, TEXT("[PlayCard] Not enough mana!"));
		return false;
	}
	else
	{
		// --- Client Request ---
		Server_PlayCard(Card, Target, TargetGridPos.X, TargetGridPos.Y);
		
		// 客户端预测：暂时清除高亮
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
		return true; // 假定成功
	}
}

void AAutoChessPlayerController::Server_PlayCard_Implementation(UAutoChessCardBase* Card, AActor* Target, int32 GridX, int32 GridY)
{
	UE_LOG(LogTemp, Warning, TEXT("[Server_PlayCard] PC %d received request. Card: %s, Target: %s, GridPos: (%d, %d)"), 
		TeamID, 
		Card ? *Card->CardName.ToString() : TEXT("NULL"),
		Target ? *Target->GetName() : TEXT("NULL"),
		GridX, GridY);
		
	PlayCard(Card, Target, FIntPoint(GridX, GridY));
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

// --- 联机功能实现 ---

void AAutoChessPlayerController::HostGame()
{
	UE_LOG(LogTemp, Warning, TEXT("[HostGame] Creating game as Listen Server..."));
	
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("[HostGame] Failed: World is NULL!"));
		return;
	}

	// 获取当前关卡名称
	FString CurrentLevel = World->GetMapName();
	CurrentLevel.RemoveFromStart(World->StreamingLevelsPrefix); // 移除前缀（如果有）
	
	// 作为 Listen Server 重新加载当前关卡
	// ?listen 参数告诉引擎这是一个 Listen Server
	FString TravelURL = FString::Printf(TEXT("%s?listen"), *CurrentLevel);
	
	UE_LOG(LogTemp, Warning, TEXT("[HostGame] Traveling to: %s"), *TravelURL);
	World->ServerTravel(TravelURL);
}

void AAutoChessPlayerController::JoinGame(const FString& Address)
{
	if (Address.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("[JoinGame] Failed: IP Address is empty! Usage: JoinGame <IP>"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[JoinGame] Connecting to: %s"), *Address);
	
	// 客户端连接到指定地址
	ClientTravel(Address, TRAVEL_Absolute);
}

// --- 客户端展示 RPC 实现 ---

void AAutoChessPlayerController::Client_ShowCardDisplay_Implementation(const FCardDisplayData& CardData, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster, int32 AOERadius)
{
	UE_LOG(LogTemp, Error, TEXT("[Client_ShowCardDisplay_Implementation] CALLED! CardName=%s, Caster=%s, IsLocalController=%d"), 
		*CardData.CardName.ToString(), 
		Caster ? *Caster->GetName() : TEXT("NULL"),
		IsLocalController());

	// 1. 广播 UI 事件（使用传入的 Caster，而不是 this）
	OnCardDisplayed.Broadcast(CardData, Caster, Target, TargetGridPos);

	// 2. 高亮逻辑已移至 GameMode::BroadcastCardDisplay 统一处理 (Server Multicast)
	// 这里只需要处理 UI
}

void AAutoChessPlayerController::Client_HideCardDisplay_Implementation()
{
	// 清除高亮
	if (HighlightActor)
	{
		HighlightActor->ClearHighlights();
	}
}

void AAutoChessPlayerController::Server_BuyUnit_Implementation(FName UnitRowName)
{
	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS || !GS->GameGrid) return;

	// 1. 检查数据表
	if (!UnitDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("[Server_BuyUnit] UnitDataTable is not set in PlayerController!"));
		return;
	}

	// 2. 查找行数据
	FAutoChessUnitRow* UnitRow = UnitDataTable->FindRow<FAutoChessUnitRow>(UnitRowName, TEXT("Server_BuyUnit"));
	if (!UnitRow)
	{
		UE_LOG(LogTemp, Error, TEXT("[Server_BuyUnit] Unit Row '%s' not found in DataTable!"), *UnitRowName.ToString());
		return;
	}

	// 3. 获取蓝图类
	if (!UnitRow->UnitClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[Server_BuyUnit] UnitClass is null in Row '%s'!"), *UnitRowName.ToString());
		return;
	}

	// 4. 检查金币
	int32 Cost = UnitRow->Cost;
	int32 CurrentGold = (TeamID == 0) ? GS->Player1Gold : GS->Player2Gold;
	
	UE_LOG(LogTemp, Warning, TEXT("[Server_BuyUnit] Checking Gold: Cost=%d, CurrentGold=%d, TeamID=%d"), Cost, CurrentGold, TeamID);

	if (CurrentGold < Cost)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Server_BuyUnit] Not enough gold! Cost=%d, Current=%d"), Cost, CurrentGold);
		return;
	}

	// 5. 寻找空闲备战区格子
	FIntPoint GridPos;
	if (!GS->FindEmptyBenchSlot(TeamID, GridPos))
	{
		UE_LOG(LogTemp, Warning, TEXT("[Server_BuyUnit] No empty bench slot for Team %d"), TeamID);
		return;
	}

	// 6. 生成单位 (使用 GameMode 的统一接口)
	if (AAutoChessGameModeBase* GM = GetWorld()->GetAuthGameMode<AAutoChessGameModeBase>())
	{
		if (GM->SpawnUnit(UnitRowName, TeamID, GridPos))
		{
			// 扣除金币
			if (TeamID == 0)
			{
				GS->Player1Gold -= Cost;
				GS->OnRep_Player1Gold(); // 手动通知
			}
			else
			{
				GS->Player2Gold -= Cost;
				GS->OnRep_Player2Gold(); // 手动通知
			}
			
			UE_LOG(LogTemp, Warning, TEXT("[Server_BuyUnit] Purchase Successful. Deducted %d. New Balance: %d"), 
				Cost, (TeamID == 0) ? GS->Player1Gold : GS->Player2Gold);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[Server_BuyUnit] Failed to get GameMode!"));
	}
}

void AAutoChessPlayerController::Server_SetPlayerReady_Implementation(bool bReady)
{
	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS) return;

	// 更新准备状态
	if (TeamID == 0)
	{
		GS->bPlayer1Ready = bReady;
		UE_LOG(LogTemp, Log, TEXT("[Server_SetPlayerReady] Player 1 is %s"), bReady ? TEXT("Ready") : TEXT("Not Ready"));
	}
	else if (TeamID == 1)
	{
		GS->bPlayer2Ready = bReady;
		UE_LOG(LogTemp, Log, TEXT("[Server_SetPlayerReady] Player 2 is %s"), bReady ? TEXT("Ready") : TEXT("Not Ready"));
	}

	// 检查是否都准备好了
	if (GS->bPlayer1Ready && GS->bPlayer2Ready)
	{
		// 只有在准备阶段才触发
		if (GS->CurrentPhaseIndex == 0) // 0 = Preparation
		{
			if (AAutoChessGameModeBase* GM = GetWorld()->GetAuthGameMode<AAutoChessGameModeBase>())
			{
				UE_LOG(LogTemp, Log, TEXT("[Server_SetPlayerReady] Both players ready! Starting battle..."));
				GM->StartBattle();
			}
		}
	}
}

void AAutoChessPlayerController::Server_RequestRematch_Implementation(bool bRematch)
{
	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS) return;

	// 更新再来一局请求状态
	if (TeamID == 0)
	{
		GS->bPlayer1Rematch = bRematch;
		UE_LOG(LogTemp, Log, TEXT("[Server_RequestRematch] Player 1 requests rematch: %d"), bRematch);
	}
	else if (TeamID == 1)
	{
		GS->bPlayer2Rematch = bRematch;
		UE_LOG(LogTemp, Log, TEXT("[Server_RequestRematch] Player 2 requests rematch: %d"), bRematch);
	}

	// 检查是否都请求了再来一局
	if (GS->bPlayer1Rematch && GS->bPlayer2Rematch)
	{
		if (AAutoChessGameModeBase* GM = GetWorld()->GetAuthGameMode<AAutoChessGameModeBase>())
		{
			UE_LOG(LogTemp, Log, TEXT("[Server_RequestRematch] Both players requested rematch! Restarting game..."));
			GM->RestartGame();
		}
	}
}

void AAutoChessPlayerController::Client_ReturnToMainMenu()
{
	// 假设主菜单关卡名为 "MainMenu"
	// 如果是客户端，这会断开连接并加载主菜单
	// 如果是 Listen Server，这会关闭服务器并加载主菜单（所有客户端断开连接）
	UGameplayStatics::OpenLevel(this, FName("MainMenu"));
	UE_LOG(LogTemp, Log, TEXT("[PlayerController] Returning to Main Menu..."));
}

void AAutoChessPlayerController::ResetState()
{
	// 重置法力
	Mana = 0.0f;
	OnRep_Mana(); // 手动更新客户端

	// 清空手牌
	HandCards.Empty();
	OnRep_HandCards(); // 手动更新客户端
	
	// 重置抽牌计时器
	DrawCardTimer = 0.0f;

	UE_LOG(LogTemp, Log, TEXT("[PlayerController] State Reset (Mana=0, HandCards=0)"));
}

	// 实现 Client_MatchEnded
	void AAutoChessPlayerController::Client_MatchEnded_Implementation(int32 WinnerTeamID)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PC %d Client] Client_MatchEnded: Winner %d"), TeamID, WinnerTeamID);
		
		if (AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>())
		{
			// 强制触发本地事件，确保 UI 响应
			GS->OnMatchWinnerChanged.Broadcast(WinnerTeamID);
		}
		
		// 触发蓝图事件 (直接给 PC 蓝图)
		BP_OnMatchEnded(WinnerTeamID);
	}
