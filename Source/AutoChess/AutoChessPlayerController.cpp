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

AAutoChessPlayerController::AAutoChessPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AAutoChessPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// 设置输入模式为 GameAndUI，确保鼠标既能点击 UI 也能点击世界
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);

	// 初始化法力值
	Mana = 0.0f;
	DrawCardTimer = 0.0f;

	// 创建主 HUD (分屏独立 UI)
	if (IsLocalController() && MainHUDClass)
	{
		MainHUDWidget = CreateWidget<UUserWidget>(this, MainHUDClass);
		if (MainHUDWidget)
		{
			// 关键：使用 AddToPlayerScreen 而不是 AddToViewport
			// 这样 UI 只会显示在当前玩家的分屏区域内
			MainHUDWidget->AddToPlayerScreen();
		}
	}
}

void AAutoChessPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

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

	// 处理鼠标点击
	if (WasInputKeyJustPressed(EKeys::LeftMouseButton))
	{
		// 优先尝试拖拽
		HandleDragStart();
		if (!bIsDragging)
		{
			HandleClick();
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
		HandleDragging();
	}

	// 更新血条 UI
	UpdateHealthBars();

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

void AAutoChessPlayerController::HandleClick()
{
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
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
			// 实际逻辑应该更复杂，比如先选中再点出售按钮
			// 这里为了测试，先注释掉直接出售，改为选中
			// SellUnit(ClickedUnit);
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
				NewUnit->TeamID = 0; // 默认玩家1
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

void AAutoChessPlayerController::HandleDragStart()
{
	// 只有在准备阶段允许拖拽
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase != EAutoChessPhase::Preparation) return;
	}

	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(Hit.GetActor()))
		{
			// 只能拖拽自己的单位
			// if (Unit->TeamID != 0) return; 

			DraggedUnit = Unit;
			bIsDragging = true;
			
			DragOffset = FVector::ZeroVector;

			// 暂时禁用碰撞，防止拖拽时扫到其他东西
			DraggedUnit->SetActorEnableCollision(false);
		}
	}
}

void AAutoChessPlayerController::HandleDragging()
{
	if (!bIsDragging || !DraggedUnit) return;

	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		// 射线检测到了地面或棋盘
		FVector NewLocation = Hit.Location;
		
		// 保持单位原有的 Z 高度
		NewLocation.Z = DraggedUnit->GetActorLocation().Z;
		
		DraggedUnit->SetActorLocation(NewLocation);
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
			// 更新数据
			Widget->UpdateHealth(Unit->Health, Unit->MaxHealth);
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
			// 可以在这里播放抽牌音效或UI动画
		}
	}
}

bool AAutoChessPlayerController::PlayCard(UAutoChessCardBase* Card, AActor* Target)
{
	if (!Card || !HandCards.Contains(Card)) return false;

	// 检查费用
	if (Mana >= Card->Cost)
	{
		// 扣费
		Mana -= Card->Cost;

		// 触发效果
		Card->OnPlayed(this, Target);

		// 移除手牌
		HandCards.Remove(Card);
		
		return true;
	}

	return false;
}


