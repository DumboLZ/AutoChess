#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "AutoChessGameState.generated.h"

class AAutoChessUnitBase;
class AAutoChessGrid;

/**
 * 自动走棋游戏状态
 * 存储全局数据：玩家血量、金币、在场单位
 */
UCLASS()
class AUTOCHESS_API AAutoChessGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AAutoChessGameState();

	// 玩家1 血量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player1Health;

	// 玩家2 血量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player2Health;

	// 玩家1 金币
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player1Gold;

	// 玩家2 金币
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player2Gold;

	// 棋盘引用 (全局唯一)
	UPROPERTY(BlueprintReadOnly, Category = "AutoChess|Board")
	AAutoChessGrid* GameGrid;

	// 场上所有单位
	UPROPERTY(BlueprintReadOnly, Category = "AutoChess|Board")
	TArray<AAutoChessUnitBase*> AllUnits;

	// 注册单位到场上
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	void RegisterUnit(AAutoChessUnitBase* Unit);

	// 从场上移除单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	void UnregisterUnit(AAutoChessUnitBase* Unit);

	// 获取指定队伍的所有单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	TArray<AAutoChessUnitBase*> GetUnitsByTeam(int32 TeamID);

	// 检查格子是否被占据
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	bool IsGridOccupied(int32 GridX, int32 GridY);

	// 获取占据格子的单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	AAutoChessUnitBase* GetUnitAtGrid(int32 GridX, int32 GridY);
};
