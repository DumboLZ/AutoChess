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
	// 定义血量更新委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthUpdate, int32, NewHealth, int32, PlayerIndex);

	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnHealthUpdate OnHealthUpdated;

	AAutoChessGameState();

	// 玩家1 血量
	UPROPERTY(ReplicatedUsing = OnRep_Player1Health, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player1Health;

	UFUNCTION()
	void OnRep_Player1Health();

	// 玩家2 血量
	UPROPERTY(ReplicatedUsing = OnRep_Player2Health, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player2Health;

	UFUNCTION()
	void OnRep_Player2Health();

	// 玩家1 金币
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player1Gold;

	// 玩家2 金币
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player2Gold;

	// --- 游戏流程数据 (从 GameMode 同步) ---

	// 当前游戏阶段 (需要包含 AutoChessGameModeBase.h 或移动 Enum 定义)
	// 为了避免头文件循环依赖，这里我们暂时用 uint8 存储，或者在 cpp 中转换
	// 但为了蓝图方便，最好还是用 Enum。我们先尝试前向声明或假设已包含。
	// 更好的做法是将 Enum 移到单独的 Types 头文件。
	// 这里我们先用 int32 替代，或者在 cpp 中包含头文件。
	// 实际上，GameMode 依赖 GameState，GameState 依赖 GameMode 的 Enum...
	// 让我们把 Enum 移动到 GameState 或者一个新的 Types 文件。
	// 暂时先用 uint8 存储阶段索引，蓝图再转换，或者我们把 Enum 搬过来？
	// 不，最简单的是：在 AutoChessGameState.h 中包含 AutoChessGameModeBase.h 可能会导致循环。
	// 让我们先只复制基本类型。
	
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	uint8 CurrentPhaseIndex; 

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	int32 CurrentRound;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	float PhaseTimer;

	// 棋盘引用 (全局唯一)
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
	AAutoChessGrid* GameGrid;

	// 场上所有单位
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
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

	// 检查网格是否被占用
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool IsGridOccupied(int32 GridX, int32 GridY);

	// 检查胜利条件
	void CheckWinCondition();

	// 获取占据格子的单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	AAutoChessUnitBase* GetUnitAtGrid(int32 GridX, int32 GridY);

	// --- 全局法术高亮系统 ---
	
	// 法术高亮 Actor - 队伍 0
	UPROPERTY()
	class AAutoChessHighlightActor* SpellHighlightActor_Team0;

	// 法术高亮 Actor - 队伍 1
	UPROPERTY()
	class AAutoChessHighlightActor* SpellHighlightActor_Team1;

	// 显示法术高亮 (多播)
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "AutoChess|Spell")
	void Multicast_ShowSpellHighlight(const TArray<FIntPoint>& GridPositions, int32 TeamID);

	// 隐藏法术高亮 (多播)
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "AutoChess|Spell")
	void Multicast_HideSpellHighlight(int32 TeamID);


protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
