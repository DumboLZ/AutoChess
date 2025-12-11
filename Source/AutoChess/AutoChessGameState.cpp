#include "AutoChessGameState.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGrid.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessHighlightActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Net/UnrealNetwork.h"

AAutoChessGameState::AAutoChessGameState()
{
	Player1Health = 100;
	Player2Health = 100;
	Player1Gold = 0;
	Player2Gold = 0;
}

void AAutoChessGameState::OnRep_Player1Health()
{
	OnHealthUpdated.Broadcast(Player1Health, 0);
}

void AAutoChessGameState::OnRep_Player2Health()
{
	OnHealthUpdated.Broadcast(Player2Health, 1);
}

void AAutoChessGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAutoChessGameState, Player1Health);
	DOREPLIFETIME(AAutoChessGameState, Player2Health);
	DOREPLIFETIME(AAutoChessGameState, Player1Gold);
	DOREPLIFETIME(AAutoChessGameState, Player2Gold);
	DOREPLIFETIME(AAutoChessGameState, CurrentPhaseIndex);
	DOREPLIFETIME(AAutoChessGameState, CurrentRound);
	DOREPLIFETIME(AAutoChessGameState, PhaseTimer);
	DOREPLIFETIME(AAutoChessGameState, GameGrid);
	DOREPLIFETIME(AAutoChessGameState, AllUnits);
	DOREPLIFETIME(AAutoChessGameState, SpellHighlightActor);
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

void AAutoChessGameState::ShowSpellHighlight(const TArray<FIntPoint>& GridPositions, int32 TeamID)
{
	UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] CALLED! GridPositions=%d, TeamID=%d, HasAuthority=%d"), 
		GridPositions.Num(), TeamID, HasAuthority());
	
	if (!GameGrid) 
	{
		UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] GameGrid is NULL!"));
		return;
	}

	// 创建全局高亮 Actor（如果还没有）
	if (!SpellHighlightActor)
	{
		UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] Creating new SpellHighlightActor..."));
		FActorSpawnParameters SpawnParams;
		SpellHighlightActor = GetWorld()->SpawnActor<AAutoChessHighlightActor>(AAutoChessHighlightActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		
		if (SpellHighlightActor)
		{
			UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] SpellHighlightActor created successfully!"));
			// 初始化视觉（使用 Grid 的mesh）
			SpellHighlightActor->InitVisuals(GameGrid->TileMesh, nullptr);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] FAILED to create SpellHighlightActor!"));
		}
	}

	if (!SpellHighlightActor) return;

	// 创建动态材质实例，根据 TeamID 设置颜色
	UMaterialInstanceDynamic* DynamicMat = UMaterialInstanceDynamic::Create(GameGrid->MaterialHighlight, this);
	if (DynamicMat)
	{
		// 设置颜色：TeamID 0 = 蓝色，TeamID 1 = 绿色
		FLinearColor HighlightColor = (TeamID == 0) ? FLinearColor::Blue : FLinearColor::Green;
		DynamicMat->SetVectorParameterValue(FName("Color"), HighlightColor);
		UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] Set material color to %s"), 
			TeamID == 0 ? TEXT("BLUE") : TEXT("GREEN"));
		
		// 应用材质到高亮 Actor
		if (SpellHighlightActor->HighlightISM)
		{
			SpellHighlightActor->HighlightISM->SetMaterial(0, DynamicMat);
			UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] Material applied to HighlightISM"));
		}
	}

	// 更新高亮位置
	SpellHighlightActor->UpdateHighlights(GameGrid, GridPositions);
	
	UE_LOG(LogTemp, Error, TEXT("[GameState::ShowSpellHighlight] Highlight updated! NumInstances=%d"), 
		SpellHighlightActor->HighlightISM ? SpellHighlightActor->HighlightISM->GetInstanceCount() : -1);
}

void AAutoChessGameState::HideSpellHighlight()
{
	if (SpellHighlightActor && SpellHighlightActor->HighlightISM)
	{
		SpellHighlightActor->HighlightISM->ClearInstances();
		UE_LOG(LogTemp, Warning, TEXT("[GameState::HideSpellHighlight] Cleared spell highlight"));
	}
}
