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
#include "AutoChessCameraPawn.h"
#include "Engine/GameViewportClient.h"
#include "GameMapsSettings.h"
#include "AutoChessUnitData.h"
#include "AutoChessUnitData.h"
#include "AutoChessAttributeSet.h"
#include "Components/CapsuleComponent.h"

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
	ConnectedPlayerCount = 0;

	// 使用 AutoChessCameraPawn 作为默认 Pawn
	DefaultPawnClass = AAutoChessCameraPawn::StaticClass();
}

void AAutoChessGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UE_LOG(LogTemp, Warning, TEXT("[GameMode] InitGame Options: %s"), *Options);

	// 解析初始金币参数
	if (UGameplayStatics::HasOption(Options, TEXT("InitialGold")))
	{
		InitialGold = UGameplayStatics::GetIntOption(Options, TEXT("InitialGold"), 0);
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Parsed InitialGold from Options: %d"), InitialGold);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] No InitialGold option found, using default: %d"), InitialGold);
	}
}

void AAutoChessGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 初始化 GameState
	if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
	{
		// 同步初始金币设置
		GS->InitialGold = InitialGold;
		GS->Player1Gold = InitialGold;
		GS->Player2Gold = InitialGold;
		
		// 手动触发 OnRep (服务器端)
		GS->OnRep_InitialGold();
		
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Initialized GameState. InitialGold=%d"), InitialGold);
	}

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
		// 使用手动计数器分配 TeamID，避免 GetNumPlayers() 的潜在问题
		int32 TeamID = ConnectedPlayerCount;
		ConnectedPlayerCount++;
		
		UE_LOG(LogTemp, Warning, TEXT("[GameMode::PostLogin] NewPlayer: %s, Assigned TeamID: %d (Total Connected: %d)"), 
			*NewPlayer->GetName(), TeamID, ConnectedPlayerCount);
		
		// 如果 Pawn 已经是 CameraPawn，设置视角
		if (AAutoChessCameraPawn* CameraPawn = Cast<AAutoChessCameraPawn>(NewPlayer->GetPawn()))
		{
			CameraPawn->SetupCameraForPlayer(TeamID);
		}
		
		// 设置 Controller 的 TeamID
		if (AAutoChessPlayerController* AutoChessPC = Cast<AAutoChessPlayerController>(NewPlayer))
		{
			AutoChessPC->TeamID = TeamID;
			UE_LOG(LogTemp, Warning, TEXT("[GameMode::PostLogin] Set TeamID %d for PC %s"), 
				TeamID, *AutoChessPC->GetName());
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

	// 使用手动计数器 ConnectedPlayerCount，比 GetNumPlayers() 更可靠
	// int32 NumPlayers = GetNumPlayers(); 
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] CheckAllPlayersReady: Connected=%d, Required=%d"), ConnectedPlayerCount, RequiredPlayerCount);

	if (ConnectedPlayerCount >= RequiredPlayerCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] All players ready! Starting game..."));
		bWaitingForPlayers = false;
		
		// 强制重新分配 TeamID，确保顺序正确 (Host=0, Client=1)
		int32 AssignedTeamID = 0;
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
			{
				PC->TeamID = AssignedTeamID;
				
				// 如果 Pawn 已经是 CameraPawn，设置视角
				if (AAutoChessCameraPawn* CameraPawn = Cast<AAutoChessCameraPawn>(PC->GetPawn()))
				{
					CameraPawn->SetupCameraForPlayer(AssignedTeamID);
				}
				
				UE_LOG(LogTemp, Warning, TEXT("[GameMode] Finalized TeamID %d for PC %s"), AssignedTeamID, *PC->GetName());
				AssignedTeamID++;
			}
		}
		
		// 开始游戏：切换到准备阶段
		SwitchPhase(EAutoChessPhase::Preparation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Waiting for more players... (%d/%d)"), ConnectedPlayerCount, RequiredPlayerCount);
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
	if (bWaitingForPlayers) return;

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
				// 检查是否赢得整场比赛
				bool bGameOver = false;
				if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
				{
					// 使用 MatchWinnerTeamID 判断整场胜负
					if (GS->MatchWinnerTeamID != -1)
					{
						bGameOver = true;
					}
				}

				if (!bGameOver)
				{
					// 结算结束，进入下一回合准备
					if (AAutoChessGameState* GS = GetGameState<AAutoChessGameState>())
					{
						// 1. 发放金币奖励
						GS->Player1Gold += GoldRewardPerRound;
						GS->Player2Gold += GoldRewardPerRound;
						
						// 手动触发 OnRep (服务器端)
						GS->OnRep_Player1Gold();
						GS->OnRep_Player2Gold();
						
						// 2. 重置棋盘
						ResetBoardForNewRound();
						
						// 3. 增加回合数
						CurrentRound++;
						GS->CurrentRound = CurrentRound;
						
						// 4. 重置 Round Winner (准备下一局)
						GS->WinnerTeamID = -1;
					}

					SwitchPhase(EAutoChessPhase::Preparation);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("[GameMode] Game Over! Match Winner is Team %d"), 
						GetGameState<AAutoChessGameState>()->MatchWinnerTeamID);
					// 可以在这里触发 Game Over 逻辑
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
			// WinnerTeamID 的重置交给 SwitchPhase 处理，避免提前触发 UI
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
		GS->Player1Gold = GS->InitialGold;
		GS->Player2Gold = GS->InitialGold;
		
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

		// 5. 重置胜场数据
		GS->Player1Wins = 0;
		GS->Player2Wins = 0;
		GS->MatchWinnerTeamID = -1;
		GS->WinnerTeamID = -1;
	}

	// 5. 切换回准备阶段
	SwitchPhase(EAutoChessPhase::Preparation);
}

void AAutoChessGameModeBase::EndRound(int32 WinnerTeamID)
{
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] EndRound! Winner: %d"), WinnerTeamID);
	
	AAutoChessGameState* GS = GetGameState<AAutoChessGameState>();
	if (!GS) return;

	// 1. 更新胜场
	if (WinnerTeamID == 0)
	{
		GS->Player1Wins++;
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Player 1 Wins: %d"), GS->Player1Wins);
	}
	else if (WinnerTeamID == 1)
	{
		GS->Player2Wins++;
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Player 2 Wins: %d"), GS->Player2Wins);
	}
	
	// 2. 检查是否赢得整场比赛 (Best of 5)
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Checking Match Win Condition: P1Wins=%d, P2Wins=%d, MaxWins=%d"), 
		GS->Player1Wins, GS->Player2Wins, GS->MaxWinsToWinMatch);

	if (GS->Player1Wins >= GS->MaxWinsToWinMatch)
	{
		GS->MatchWinnerTeamID = 0;
		GS->WinnerTeamID = 0; // 本局也是赢家
		
		// 通知所有客户端比赛结束
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
			{
				PC->Client_MatchEnded(0);
			}
		}
		
		SwitchPhase(EAutoChessPhase::Settlement);
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] MATCH OVER! Player 1 Wins the Match!"));
		return;
	}
	else if (GS->Player2Wins >= GS->MaxWinsToWinMatch)
	{
		GS->MatchWinnerTeamID = 1;
		GS->WinnerTeamID = 1;
		
		// 通知所有客户端比赛结束
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
			{
				PC->Client_MatchEnded(1);
			}
		}
		
		SwitchPhase(EAutoChessPhase::Settlement);
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] MATCH OVER! Player 2 Wins the Match!"));
		return;
	}

	// 3. 比赛未结束，准备下一回合
	// 设置本回合胜者 (用于 UI 显示)
	GS->WinnerTeamID = WinnerTeamID;
	
	// 切换到结算阶段 (展示胜负)
	SwitchPhase(EAutoChessPhase::Settlement);
}

void AAutoChessGameModeBase::ResetBoardForNewRound()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Resetting Board for New Round (Destroy & Respawn)..."));
	
	AAutoChessGameState* GS = GetGameState<AAutoChessGameState>();
	if (!GS) return;

	// 0. 重置所有玩家的资源 (法力、手牌)
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(It->Get()))
		{
			PC->ResetState();
		}
	}

	// 1. 收集所有单位的复活数据
	struct FUnitRespawnData
	{
		FName RowName;
		int32 TeamID;
		FIntPoint StartGridPos;
	};
	TArray<FUnitRespawnData> RespawnList;

	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Collecting units for respawn. Current Unit Count: %d"), GS->AllUnits.Num());

	for (AAutoChessUnitBase* Unit : GS->AllUnits)
	{
		if (IsValid(Unit))
		{
			FUnitRespawnData Data;
			Data.RowName = Unit->UnitDataHandle.RowName;
			Data.TeamID = Unit->TeamID;
			Data.StartGridPos = Unit->StartGridPos;
			RespawnList.Add(Data);
			
			UE_LOG(LogTemp, Warning, TEXT("[GameMode] Collected Unit: %s, RowName: %s, Team: %d, StartPos: (%d, %d)"), 
				*Unit->GetName(), *Data.RowName.ToString(), Data.TeamID, Data.StartGridPos.X, Data.StartGridPos.Y);
		}
	}

	// 2. 销毁旧单位
	// 注意：UnregisterUnit 会修改 AllUnits，所以我们先复制一份或者直接遍历销毁
	TArray<AAutoChessUnitBase*> UnitsToDestroy = GS->AllUnits;
	for (AAutoChessUnitBase* Unit : UnitsToDestroy)
	{
		if (IsValid(Unit))
		{
			Unit->Destroy();
		}
	}
	GS->AllUnits.Empty(); // 确保清空

	// 3. 生成新单位
	UE_LOG(LogTemp, Warning, TEXT("[GameMode] Spawning %d new units..."), RespawnList.Num());
	for (const FUnitRespawnData& Data : RespawnList)
	{
		AAutoChessUnitBase* NewUnit = SpawnUnit(Data.RowName, Data.TeamID, Data.StartGridPos);
		if (!NewUnit)
		{
			UE_LOG(LogTemp, Error, TEXT("[GameMode] Failed to spawn unit! RowName: %s"), *Data.RowName.ToString());
		}
	}
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



AAutoChessUnitBase* AAutoChessGameModeBase::SpawnUnit(FName UnitRowName, int32 TeamID, FIntPoint GridPos)
{
	if (!UnitDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("[GameMode] UnitDataTable is not set!"));
		return nullptr;
	}

	AAutoChessGameState* GS = GetGameState<AAutoChessGameState>();
	if (!GS || !GS->GameGrid) return nullptr;

	// 1. 查找行数据
	FAutoChessUnitRow* UnitRow = UnitDataTable->FindRow<FAutoChessUnitRow>(UnitRowName, TEXT("SpawnUnit"));
	if (!UnitRow || !UnitRow->UnitClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[GameMode] Unit Row '%s' not found or invalid!"), *UnitRowName.ToString());
		return nullptr;
	}

	// 2. 计算生成位置
	FVector SpawnLoc = GS->GameGrid->GridToWorld(GridPos.X, GridPos.Y);
	
	// 修正：Character 的 Pivot 在胶囊体中心，所以需要加上 HalfHeight 才能让脚底贴地
	if (ACharacter* DefaultChar = Cast<ACharacter>(UnitRow->UnitClass->GetDefaultObject()))
	{
		float HalfHeight = DefaultChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		SpawnLoc.Z += HalfHeight;
		UE_LOG(LogTemp, Log, TEXT("[GameMode] Adjusted Spawn Z by +%f (HalfHeight)"), HalfHeight);
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// 3. 设置朝向
	FRotator SpawnRot = (TeamID == 0) ? FRotator(0.0f, 90.0f, 0.0f) : FRotator(0.0f, -90.0f, 0.0f);

	// 4. 生成单位
	if (AAutoChessUnitBase* NewUnit = GetWorld()->SpawnActor<AAutoChessUnitBase>(UnitRow->UnitClass, SpawnLoc, SpawnRot, SpawnParams))
	{
		// 设置属性
		NewUnit->TeamID = TeamID;
		NewUnit->CurrentGridPos = GridPos;
		NewUnit->StartGridPos = GridPos; // 确保设置 StartGridPos
		NewUnit->UnitDataHandle.DataTable = UnitDataTable;
		NewUnit->UnitDataHandle.RowName = UnitRowName;
		
		// 初始化数据
		NewUnit->InitFromUnitData();

		// 初始化 GAS
		if (NewUnit->AbilitySystemComponent && NewUnit->AttributeSet)
		{
			NewUnit->AbilitySystemComponent->InitStats(UAutoChessAttributeSet::StaticClass(), nullptr);
			
			// 触发血条更新
			if (NewUnit->HealthBarWidgetComp)
			{
				FTimerHandle WidgetInitTimer;
				GetWorld()->GetTimerManager().SetTimerForNextTick([NewUnit]()
				{
					if (NewUnit && NewUnit->AttributeSet)
					{
						NewUnit->OnHealthChanged(FOnAttributeChangeData());
					}
				});
			}
		}
		
		// 注册到 GameState
		GS->RegisterUnit(NewUnit);
		
		UE_LOG(LogTemp, Warning, TEXT("[GameMode] Spawned Unit '%s' at (%d, %d) for Team %d"), 
			*UnitRowName.ToString(), GridPos.X, GridPos.Y, TeamID);
			
		return NewUnit;
	}
	
	return nullptr;
}
