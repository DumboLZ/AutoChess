#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"

AAutoChessGameModeBase::AAutoChessGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	CurrentPhase = EAutoChessPhase::Preparation;
	CurrentRound = 1;
	PhaseTimer = 0.0f;
	PreparationDuration = 30.0f;
	MaxBattleDuration = 60.0f;
}

void AAutoChessGameModeBase::BeginPlay()
{
	Super::BeginPlay();
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
