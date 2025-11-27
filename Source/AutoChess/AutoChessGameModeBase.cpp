#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SpectatorPawn.h"
#include "AutoChessCameraPawn.h"
#include "Engine/GameViewportClient.h"
#include "GameMapsSettings.h"

AAutoChessGameModeBase::AAutoChessGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	CurrentPhase = EAutoChessPhase::Preparation;
	CurrentRound = 1;
	PhaseTimer = 0.0f;
	PreparationDuration = 30.0f;
	MaxBattleDuration = 60.0f;

	// 使用 SpectatorPawn，避免 DefaultPawn 消耗鼠标点击进行移动
	DefaultPawnClass = ASpectatorPawn::StaticClass();
}

void AAutoChessGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 创建玩家2
	UGameplayStatics::CreatePlayer(this, 1, true);

	// 设置分屏模式 (垂直分屏)
	if (UGameViewportClient* Viewport = GetWorld()->GetGameViewport())
	{
		Viewport->SetForceDisableSplitscreen(false);
	}
	
	// 修改全局分屏设置
	if (UGameMapsSettings* Settings = GetMutableDefault<UGameMapsSettings>())
	{
		Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Vertical;
	}

	// 为两个玩家生成并分配相机 Pawn
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PC = Iterator->Get();
		if (PC)
		{
			int32 PlayerIndex = UGameplayStatics::GetPlayerControllerID(PC);
			
			// 生成 CameraPawn
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AAutoChessCameraPawn* CameraPawn = GetWorld()->SpawnActor<AAutoChessCameraPawn>(AAutoChessCameraPawn::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
			
			if (CameraPawn)
			{
				CameraPawn->SetupCameraForPlayer(PlayerIndex);
				PC->Possess(CameraPawn);
			}
		}
	}

	SwitchPhase(EAutoChessPhase::Preparation);
}

void AAutoChessGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateTimer(DeltaTime);
}

void AAutoChessGameModeBase::UpdateTimer(float DeltaTime)
{
	if (PhaseTimer > 0.0f)
	{
		PhaseTimer -= DeltaTime;
		if (PhaseTimer <= 0.0f)
		{
			// 倒计时结束，自动切换阶段逻辑
			if (CurrentPhase == EAutoChessPhase::Preparation)
			{
				StartBattle();
			}
			else if (CurrentPhase == EAutoChessPhase::Battle)
			{
				EndTurn();
			}
		}
	}
}

void AAutoChessGameModeBase::SwitchPhase(EAutoChessPhase NewPhase)
{
	CurrentPhase = NewPhase;
	
	// 设置计时器
	switch (NewPhase)
	{
	case EAutoChessPhase::Preparation:
		PhaseTimer = PreparationDuration;
		break;
	case EAutoChessPhase::Battle:
		PhaseTimer = MaxBattleDuration;
		break;
	case EAutoChessPhase::Settlement:
		PhaseTimer = 5.0f; // 简单的结算展示时间
		break;
	}

	// 通知蓝图
	OnPhaseChanged(NewPhase);
	
	UE_LOG(LogTemp, Log, TEXT("Phase Switched to: %d, Round: %d"), (int32)NewPhase, CurrentRound);
}

void AAutoChessGameModeBase::StartBattle()
{
	if (CurrentPhase == EAutoChessPhase::Preparation)
	{
		SwitchPhase(EAutoChessPhase::Battle);
		// TODO: 触发所有棋子的战斗AI
	}
}

void AAutoChessGameModeBase::EndTurn()
{
	if (CurrentPhase == EAutoChessPhase::Battle)
	{
		SwitchPhase(EAutoChessPhase::Settlement);
		
		// 延迟后进入下一回合准备
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
		{
			CurrentRound++;
			SwitchPhase(EAutoChessPhase::Preparation);
		}, 5.0f, false);
	}
}
