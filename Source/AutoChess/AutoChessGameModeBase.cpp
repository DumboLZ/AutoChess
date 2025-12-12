#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "AutoChessPlayerController.h"
#include "AutoChessCardBase.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGrid.h"
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

	// 初始化等待玩家逻辑
	bWaitingForPlayers = true;
	RequiredPlayerCount = 2; // 需要 2 个玩家

	// 使用 AutoChessCameraPawn 作为默认 Pawn
	DefaultPawnClass = AAutoChessCameraPawn::StaticClass();
}

void AAutoChessGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 移除本地分屏创建逻辑，现在完全依赖网络连接
	// UGameplayStatics::CreatePlayer(this, 1, true);

	// 不立即开始游戏，等待玩家加入
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Waiting for %d players to join..."), RequiredPlayerCount);
}

void AAutoChessGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (NewPlayer)
	{
		// 获取当前玩家数量来决定 TeamID
		int32 NumPlayers = GetNumPlayers();
		int32 TeamID = NumPlayers - 1; // 0-based
		
		// 如果 Pawn 已经是 CameraPawn，设置视角
		if (AAutoChessCameraPawn* CameraPawn = Cast<AAutoChessCameraPawn>(NewPlayer->GetPawn()))
		{
			CameraPawn->SetupCameraForPlayer(TeamID);
		}
		
		// 设置 Controller 的 TeamID
		if (AAutoChessPlayerController* AutoChessPC = Cast<AAutoChessPlayerController>(NewPlayer))
		{
			AutoChessPC->TeamID = TeamID;
			UE_LOG(LogTemp, Warning, TEXT("[GameMode::PostLogin] Player %d connected. Total players: %d/%d"),
				TeamID, NumPlayers, RequiredPlayerCount);
		}

		// 检查是否所有玩家都已连接
		CheckAllPlayersReady();
	}
}

void AAutoChessGameModeBase::CheckAllPlayersReady()
{
	if (!bWaitingForPlayers)
	{
		return; // 已经开始游戏，不再检查
	}

	int32 NumPlayers = GetNumPlayers();
	if (NumPlayers >= RequiredPlayerCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] All players ready! Starting game..."));
		bWaitingForPlayers = false;
		
		// 开始游戏：切换到准备阶段
		SwitchPhase(EAutoChessPhase::Preparation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Waiting for more players... (%d/%d)"), NumPlayers, RequiredPlayerCount);
	}
}

void AAutoChessGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 每5秒打印一次所有PlayerController
	static float DebugTimer = 0.0f;
	DebugTimer += DeltaTime;
	if (DebugTimer >= 5.0f)
	{
		DebugTimer = 0.0f;
		UE_LOG(LogTemp, Error, TEXT("=== Server PlayerControllers ==="));
		int32 Count = 0;
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get());
			if (PC)
			{
				Count++;
				UE_LOG(LogTemp, Error, TEXT("  - %s: TeamID=%d, IsLocalController=%d"), 
					*PC->GetName(), PC->TeamID, PC->IsLocalController() ? 1 : 0);
			}
		}
		UE_LOG(LogTemp, Error, TEXT("=== Total: %d PlayerControllers ==="), Count);
	}
	
	// 测试：在战斗阶段，服务器直接给所有PC增加Mana
	if (CurrentPhase == EAutoChessPhase::Battle)
	{
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get());
			if (PC)
			{
				PC->RegenerateMana(DeltaTime);
				PC->ProcessAutoDraw(DeltaTime);
			}
		}
	}
	
	UpdateTimer(DeltaTime);
}

void AAutoChessGameModeBase::UpdateTimer(float DeltaTime)
{
	if (PhaseTimer > 0.0f)
	{
		PhaseTimer -= DeltaTime;

		// 同步到 GameState
		if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
		{
			GS->PhaseTimer = PhaseTimer;
		}

		if (PhaseTimer <= 0.0f)
		{
			// 倒计时结束，自动切换阶段逻辑
			if (CurrentPhase == EAutoChessPhase::Preparation)
			{
				StartBattle();
			}
			else if (CurrentPhase == EAutoChessPhase::Battle)
			{
				// 战斗超时，进入结算
				EndRound(-1); // -1 表示平局或超时
			}
			else if (CurrentPhase == EAutoChessPhase::Settlement)
			{
				// 如果有获胜者（非平局），则游戏结束，不再进入下一回合
				// 这里我们需要检查 GameState 的 WinnerTeamID，或者记录在 GameMode 中
				// 暂时简单处理：如果有明确的 WinnerTeamID != -1，则停止循环
				
				bool bGameOver = false;
				if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
				{
					if (GS->WinnerTeamID != -1)
					{
						bGameOver = true;
					}
				}

				if (!bGameOver)
				{
					// 只有平局才继续下一回合（或者您可以根据需求修改逻辑）
					// 结算结束，进入下一回合准备
					CurrentRound++;
					SwitchPhase(EAutoChessPhase::Preparation);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("[GameMode] Game Over! Winner is Team %d"), 
						GetGameState<AAutoChessGameState>()->WinnerTeamID);
					// 可以在这里触发 Game Over 逻辑，例如返回主菜单
				}
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

	// 同步到 GameState
	if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
	{
		GS->CurrentPhaseIndex = (uint8)CurrentPhase;
		GS->CurrentRound = CurrentRound;
		GS->PhaseTimer = PhaseTimer;
		
		// 手动触发阶段变化事件（服务器端不会自动触发 OnRep）
		GS->OnRep_CurrentPhaseIndex();

		// 如果进入准备阶段，重置玩家准备状态和获胜者
		if (NewPhase == EAutoChessPhase::Preparation)
		{
			GS->bPlayer1Ready = false;
			GS->bPlayer2Ready = false;
			GS->WinnerTeamID = -1; // 重置获胜者
		}
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
	}
}

void AAutoChessGameModeBase::EndRound(int32 WinnerTeamID)
{
	if (CurrentPhase == EAutoChessPhase::Settlement) return;

	// 使用 SwitchPhase 统一处理
	SwitchPhase(EAutoChessPhase::Settlement);

	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Round Ended! Winner Team: %d"), WinnerTeamID);

	// 更新 GameState 中的获胜者
	if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
	{
		GS->WinnerTeamID = WinnerTeamID;
		// 手动触发 OnRep (服务器端)
		GS->OnRep_WinnerTeamID();
	}
}

void AAutoChessGameModeBase::RestartGame()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Restarting Game..."));

	if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
	{
		// 1. 清除所有单位
		TArray<AAutoChessUnitBase*> UnitsToDestroy = GS->AllUnits;
		for (AAutoChessUnitBase* Unit : UnitsToDestroy)
		{
			if (IsValid(Unit))
			{
				Unit->Destroy();
			}
		}
		GS->AllUnits.Empty();

		// 2. 重置游戏数据
		CurrentRound = 1;
		GS->CurrentRound = 1;
		
		GS->Player1Health = 100;
		GS->Player2Health = 100;
		GS->Player1Gold = 0;
		GS->Player2Gold = 0;
		
		// 3. 重置玩家状态 (手牌、法力)
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
			{
				PC->ResetState();
			}
		}

		// 4. 重置状态标志
		GS->bPlayer1Ready = false;
		GS->bPlayer2Ready = false;
		GS->bPlayer1Rematch = false;
		GS->bPlayer2Rematch = false;
		// WinnerTeamID 的重置交给 SwitchPhase 处理，避免提前触发 UI

		// 4. 手动触发属性更新 (服务器端)
		GS->OnRep_Player1Health();
		GS->OnRep_Player2Health();
	}

	// 5. 切换回准备阶段
	SwitchPhase(EAutoChessPhase::Preparation);
}

void AAutoChessGameModeBase::BroadcastCardDisplay(UAutoChessCardBase* Card, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster)
{
	if (!Card) return;

	UE_LOG(LogTemp, Warning, TEXT("[GameMode::BroadcastCardDisplay] Broadcasting card display to all players"));

	// 创建卡牌数据结构（可以通过 RPC 传输）
	FCardDisplayData CardData(Card);
	int32 AOERadius = Card->AOERadius;

	// --- 1. 处理全局高亮 (服务器端多播) ---
	if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
	{
		if (GS->GameGrid)
		{
			TArray<FIntPoint> HighlightPoints;
			int32 CenterX = TargetGridPos.X;
			int32 CenterY = TargetGridPos.Y;

			// 如果目标是单位，使用单位的格子坐标
			if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(Target))
			{
				CenterX = Unit->CurrentGridPos.X;
				CenterY = Unit->CurrentGridPos.Y;
			}

			// 计算范围
			for (int32 x = CenterX - AOERadius; x <= CenterX + AOERadius; x++)
			{
				for (int32 y = CenterY - AOERadius; y <= CenterY + AOERadius; y++)
				{
					if (GS->GameGrid->IsValidGridPosition(x, y))
					{
						HighlightPoints.Add(FIntPoint(x, y));
					}
				}
			}

			// 获取施法者队伍 ID
			int32 TeamID = 0;
			if (AAutoChessPlayerController* CasterPC = Cast<AAutoChessPlayerController>(Caster))
			{
				TeamID = CasterPC->TeamID;
			}

			// 调用多播显示高亮
			GS->Multicast_ShowSpellHighlight(HighlightPoints, TeamID);
		}
	}

	// --- 2. 广播 UI 展示 (客户端 RPC) ---
	// 遍历所有 PlayerController 并通知
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
		{
			UE_LOG(LogTemp, Warning, TEXT("[GameMode::BroadcastCardDisplay] Notifying PC: %s, IsLocalController: %d"), 
				*PC->GetName(), PC->IsLocalController());
			
			// 对于本地 PlayerController（监听服务器），直接调用实现函数
			// 对于远程客户端，调用 Client RPC
			if (PC->IsLocalController())
			{
				// 服务器本地，直接调用实现
				PC->Client_ShowCardDisplay_Implementation(CardData, Target, TargetGridPos, Caster, AOERadius);
			}
			else
			{
				// 远程客户端，调用 RPC
				PC->Client_ShowCardDisplay(CardData, Target, TargetGridPos, Caster, AOERadius);
			}
		}
	}
}

