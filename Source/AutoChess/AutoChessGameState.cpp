#include "AutoChessGameState.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGrid.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessHighlightActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"

AAutoChessGameState::AAutoChessGameState()
{
	Player1Health = 100;
	Player2Health = 100;
	Player1Gold = 0;
	Player2Gold = 0;
	Team0Revivals = 10;
	Team1Revivals = 10;
	CurrentPhaseIndex = 255; // 关键：初始化为无效值，确保第一次同步 0 时触发 OnRep
}

void AAutoChessGameState::BeginPlay()
{
	Super::BeginPlay();
	
	// 延迟 0.2 秒后触发初始阶段事件，确保客户端已连接且 UI 已绑定
	FTimerHandle InitialPhaseTimer;
	GetWorld()->GetTimerManager().SetTimer(InitialPhaseTimer, [this]()
	{
		// 触发当前阶段事件（无论是否有变化）
		OnRep_CurrentPhaseIndex();
		UE_LOG(LogTemp, Warning, TEXT("[GameState::BeginPlay] Initial phase event triggered. Phase=%d, Authority=%d"), 
			CurrentPhaseIndex, HasAuthority());
	}, 0.2f, false);
}

void AAutoChessGameState::OnRep_Player1Health()
{
	OnHealthUpdated.Broadcast(Player1Health, 0);
}

void AAutoChessGameState::OnRep_Player2Health()
{
	OnHealthUpdated.Broadcast(Player2Health, 1);
}

void AAutoChessGameState::OnRep_CurrentPhaseIndex()
{
	UE_LOG(LogTemp, Error, TEXT("[GameState::OnRep_CurrentPhaseIndex] Called! PhaseIndex=%d, HasAuthority=%d"), 
		CurrentPhaseIndex, HasAuthority());
	
	// 广播通用阶段变化事件
	OnPhaseChanged.Broadcast(CurrentPhaseIndex);
	
	// 0 = 准备阶段, 1 = 战斗阶段（根据您的 GameMode 定义）
	if (CurrentPhaseIndex == 0)
	{
		OnPreparationPhaseStarted.Broadcast(CurrentPhaseIndex);
		UE_LOG(LogTemp, Warning, TEXT("[GameState] Preparation Phase Started (Authority=%d)"), HasAuthority());
	}
	else if (CurrentPhaseIndex == 1)
	{
		OnCombatPhaseStarted.Broadcast(CurrentPhaseIndex);
		UE_LOG(LogTemp, Warning, TEXT("[GameState] Combat Phase Started (Authority=%d)"), HasAuthority());
	}
}

void AAutoChessGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAutoChessGameState, bPlayer1Ready);
	DOREPLIFETIME(AAutoChessGameState, bPlayer2Ready);
	DOREPLIFETIME(AAutoChessGameState, bPlayer1Rematch);
	DOREPLIFETIME(AAutoChessGameState, bPlayer2Rematch);
	DOREPLIFETIME(AAutoChessGameState, WinnerTeamID);
	
	DOREPLIFETIME(AAutoChessGameState, Player1Health);
	DOREPLIFETIME(AAutoChessGameState, Player2Health);
	DOREPLIFETIME(AAutoChessGameState, Player1Gold);
	DOREPLIFETIME(AAutoChessGameState, Player2Gold);
	DOREPLIFETIME(AAutoChessGameState, InitialGold);
	
	DOREPLIFETIME(AAutoChessGameState, CurrentPhaseIndex);
	DOREPLIFETIME(AAutoChessGameState, PhaseTimer);
	
	DOREPLIFETIME(AAutoChessGameState, Player1Wins);
	DOREPLIFETIME(AAutoChessGameState, Player2Wins);
	DOREPLIFETIME(AAutoChessGameState, MatchWinnerTeamID);
	DOREPLIFETIME(AAutoChessGameState, GoldPerRound);
	
	DOREPLIFETIME(AAutoChessGameState, GameGrid);
	DOREPLIFETIME(AAutoChessGameState, AllUnits);
	DOREPLIFETIME(AAutoChessGameState, Team0Revivals);
	DOREPLIFETIME(AAutoChessGameState, Team1Revivals);
}

void AAutoChessGameState::OnRep_WinnerTeamID()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState] Winner Changed: %d (Authority=%d)"), WinnerTeamID, HasAuthority());
	OnWinnerChanged.Broadcast(WinnerTeamID);
}

void AAutoChessGameState::OnRep_InitialGold()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState] InitialGold Updated: %d (Authority=%d)"), InitialGold, HasAuthority());
}

void AAutoChessGameState::OnRep_Player1Wins()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState] Player1Wins Updated: %d (Authority=%d)"), Player1Wins, HasAuthority());
}

void AAutoChessGameState::OnRep_Player2Wins()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState] Player2Wins Updated: %d (Authority=%d)"), Player2Wins, HasAuthority());
}

void AAutoChessGameState::OnRep_Player1Gold()
{
	OnGoldUpdated.Broadcast(Player1Gold, 0);
	UE_LOG(LogTemp, Log, TEXT("[GameState] Player1Gold Updated: %d"), Player1Gold);
}

void AAutoChessGameState::OnRep_Player2Gold()
{
	OnGoldUpdated.Broadcast(Player2Gold, 1);
	UE_LOG(LogTemp, Log, TEXT("[GameState] Player2Gold Updated: %d"), Player2Gold);
}

void AAutoChessGameState::OnRep_MatchWinnerTeamID()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState] MatchWinnerTeamID Updated: %d (Authority=%d)"), MatchWinnerTeamID, HasAuthority());
	OnMatchWinnerChanged.Broadcast(MatchWinnerTeamID);
}

void AAutoChessGameState::OnRep_Team0Revivals()
{
	OnRevivalUpdated.Broadcast(Team0Revivals, 0);
}

void AAutoChessGameState::OnRep_Team1Revivals()
{
	OnRevivalUpdated.Broadcast(Team1Revivals, 1);
}

void AAutoChessGameState::RegisterUnit(AAutoChessUnitBase* Unit)
{
	if (Unit && !AllUnits.Contains(Unit))
	{
		AllUnits.Add(Unit);
	}
}

void AAutoChessGameState::UnregisterUnit(AAutoChessUnitBase* Unit)
{
	if (Unit)
	{
		AllUnits.Remove(Unit);
		
		// 检查胜利条件
		CheckWinCondition();
	}
}

void AAutoChessGameState::CheckWinCondition()
{
	// 只有在战斗阶段才检查
	AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode());
	if (!GM || GM->CurrentPhase != EAutoChessPhase::Battle) return;

	int32 Team0Count = 0;
	int32 Team1Count = 0;

	for (AAutoChessUnitBase* Unit : AllUnits)
	{
		if (IsValid(Unit) && !Unit->bIsDead)
		{
			if (Unit->TeamID == 0) Team0Count++;
			else if (Unit->TeamID == 1) Team1Count++;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("[GameState] CheckWinCondition - Team0: %d, Team1: %d"), Team0Count, Team1Count);

	if (Team0Count == 0 && Team1Count == 0)
	{
		// 平局
		GM->EndRound(-1); 
	}
	else if (Team0Count == 0)
	{
		// Team 1 获胜
		GM->EndRound(1);
	}
	else if (Team1Count == 0)
	{
		// Team 0 获胜
		GM->EndRound(0);
	}
}

TArray<AAutoChessUnitBase*> AAutoChessGameState::GetUnitsByTeam(int32 TeamID)
{
	TArray<AAutoChessUnitBase*> TeamUnits;
	for (AAutoChessUnitBase* Unit : AllUnits)
	{
		if (Unit && Unit->TeamID == TeamID)
		{
			TeamUnits.Add(Unit);
		}
	}
	return TeamUnits;
}

bool AAutoChessGameState::IsGridOccupied(int32 GridX, int32 GridY)
{
	return GetUnitAtGrid(GridX, GridY) != nullptr;
}

AAutoChessUnitBase* AAutoChessGameState::GetUnitAtGrid(int32 GridX, int32 GridY)
{
	// 遍历所有单位检查坐标
	// 注意：这需要 UnitBase 已经更新了它的 GridPos
	for (AAutoChessUnitBase* Unit : AllUnits)
	{
		if (IsValid(Unit))
		{
			// Check current position
			if (Unit->CurrentGridPos.X == GridX && Unit->CurrentGridPos.Y == GridY)
			{
				return Unit;
			}
			// Check target position if moving (prevent multiple units moving to same tile)
			if (Unit->bIsMoving && Unit->TargetGridPos.X == GridX && Unit->TargetGridPos.Y == GridY)
			{
				return Unit;
			}
		}
	}
	return nullptr;
}

void AAutoChessGameState::Multicast_ShowSpellHighlight_Implementation(const TArray<FIntPoint>& GridPositions, int32 TeamID)
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_ShowSpellHighlight] CALLED! GridPositions=%d, TeamID=%d, IsServer=%d"), 
		GridPositions.Num(), TeamID, HasAuthority());
	
	if (!GameGrid) 
	{
		// 尝试获取 Grid (客户端可能还没同步到)
		TArray<AActor*> FoundGrids;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAutoChessGrid::StaticClass(), FoundGrids);
		if (FoundGrids.Num() > 0)
		{
			GameGrid = Cast<AAutoChessGrid>(FoundGrids[0]);
		}
		
		if (!GameGrid)
		{
			UE_LOG(LogTemp, Error, TEXT("[GameState::Multicast_ShowSpellHighlight] GameGrid is NULL!"));
			return;
		}
	}

	// 根据 TeamID 选择对应的 HighlightActor
	AAutoChessHighlightActor*& TargetHighlightActor = (TeamID == 0) ? SpellHighlightActor_Team0 : SpellHighlightActor_Team1;

	// 创建队伍专属的高亮 Actor（如果还没有）
	if (!TargetHighlightActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_ShowSpellHighlight] Creating SpellHighlightActor for Team %d..."), TeamID);
		FActorSpawnParameters SpawnParams;
		TargetHighlightActor = GetWorld()->SpawnActor<AAutoChessHighlightActor>(AAutoChessHighlightActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		
		if (TargetHighlightActor)
		{
			UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_ShowSpellHighlight] SpellHighlightActor for Team %d created successfully!"), TeamID);
			// 初始化视觉（使用 Grid 的mesh）
			TargetHighlightActor->InitVisuals(GameGrid->TileMesh, nullptr);
			
			// 关键修复：全局高亮必须所有人可见
			if (TargetHighlightActor->HighlightISM)
			{
				TargetHighlightActor->HighlightISM->bOnlyOwnerSee = false;
				TargetHighlightActor->HighlightISM->MarkRenderStateDirty(); // 强制刷新渲染状态
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[GameState::Multicast_ShowSpellHighlight] FAILED to create SpellHighlightActor for Team %d!"), TeamID);
		}
	}

	if (!TargetHighlightActor) return;

	// 选择对应队伍的材质
	UMaterialInterface* SelectedMaterial = (TeamID == 0) ? GameGrid->MaterialSpellHighlight_Team0 : GameGrid->MaterialSpellHighlight_Team1;
	
	if (SelectedMaterial && TargetHighlightActor->HighlightISM)
	{
		TargetHighlightActor->HighlightISM->SetMaterial(0, SelectedMaterial);
		UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_ShowSpellHighlight] Applied Team %d material"), TeamID);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[GameState::Multicast_ShowSpellHighlight] Material is NULL for Team %d! Please configure MaterialSpellHighlight_Team%d in Grid BP"), 
			TeamID, TeamID);
	}

	// 更新高亮位置
	TargetHighlightActor->UpdateHighlights(GameGrid, GridPositions);
	
	UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_ShowSpellHighlight] Team %d highlight updated! NumInstances=%d"), 
		TeamID, TargetHighlightActor->HighlightISM ? TargetHighlightActor->HighlightISM->GetInstanceCount() : -1);
}

void AAutoChessGameState::Multicast_HideSpellHighlight_Implementation(int32 TeamID)
{
	// 根据 TeamID 选择对应的 HighlightActor
	AAutoChessHighlightActor* TargetHighlightActor = (TeamID == 0) ? SpellHighlightActor_Team0 : SpellHighlightActor_Team1;
	
	if (TargetHighlightActor && TargetHighlightActor->HighlightISM)
	{
		TargetHighlightActor->HighlightISM->ClearInstances();
		UE_LOG(LogTemp, Warning, TEXT("[GameState::Multicast_HideSpellHighlight] Cleared Team %d spell highlight"), TeamID);
	}
}

bool AAutoChessGameState::FindEmptyBenchSlot(int32 TeamID, FIntPoint& OutGridPos)
{
	if (!GameGrid) return false;

	int32 GridWidth = GameGrid->GridWidth;
	int32 GridHeight = GameGrid->GridHeight;
	int32 HalfHeight = GridHeight / 2;

	int32 YMin, YMax;
	if (TeamID == 0)
	{
		// Team0 在下半边 (Y = 0 to HalfHeight-1)
		YMin = 0;
		YMax = HalfHeight - 1;
	}
	else // TeamID == 1
	{
		// Team1 在上半边 (Y = HalfHeight to GridHeight-1)
		YMin = HalfHeight;
		YMax = GridHeight - 1;
	}

	// 遍历己方半场寻找空位
	for (int32 y = YMin; y <= YMax; y++)
	{
		for (int32 x = 0; x < GridWidth; x++)
		{
			if (GetUnitAtGrid(x, y) == nullptr)
			{
				OutGridPos = FIntPoint(x, y);
				return true;
			}
		}
	}

	return false;
}

bool AAutoChessGameState::TryReviveUnit(AAutoChessUnitBase* Unit)
{
	if (!Unit) return false;

	if (Unit->TeamID == 0)
	{
		if (Team0Revivals > 0)
		{
			Team0Revivals--;
			if (HasAuthority()) OnRep_Team0Revivals();
			return true;
		}
	}
	else if (Unit->TeamID == 1)
	{
		if (Team1Revivals > 0)
		{
			Team1Revivals--;
			if (HasAuthority()) OnRep_Team1Revivals();
			return true;
		}
	}

	return false;
}

void AAutoChessGameState::ResetRevivals()
{
	Team0Revivals = 10;
	Team1Revivals = 10;
	if (HasAuthority())
	{
		OnRep_Team0Revivals();
		OnRep_Team1Revivals();
	}
}
