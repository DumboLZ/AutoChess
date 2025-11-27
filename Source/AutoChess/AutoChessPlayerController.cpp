#include "AutoChessPlayerController.h"
#include "AutoChessCardBase.h"
#include "AutoChessGrid.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h" // For GEngine

AAutoChessPlayerController::AAutoChessPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AAutoChessPlayerController::BeginPlay()
{
	Super::BeginPlay();
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
		HandleClick();
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


