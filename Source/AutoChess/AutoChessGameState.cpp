#include "AutoChessGameState.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGrid.h"
#include "AutoChessGameModeBase.h" // Add this include

AAutoChessGameState::AAutoChessGameState()
{
	Player1Health = 100;
	Player2Health = 100;
	Player1Gold = 0;
	Player2Gold = 0;
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
		if (IsValid(Unit))
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
