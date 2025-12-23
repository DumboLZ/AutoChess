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

	// 定义阶段变化委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhaseChanged, int32, NewPhaseIndex);

	// 准备阶段开始事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnPhaseChanged OnPreparationPhaseStarted;

	// 战斗阶段开始事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnPhaseChanged OnCombatPhaseStarted;

	// 通用阶段变化事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnPhaseChanged OnPhaseChanged;

	// 定义获胜者变化委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWinnerChanged, int32, WinnerTeamID);

	// 定义金币更新委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoldUpdated, int32, NewGold, int32, PlayerIndex);

	// 获胜者变化事件 (单局)
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnWinnerChanged OnWinnerChanged;

	// 比赛获胜者变化事件 (整场)
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnWinnerChanged OnMatchWinnerChanged;

	// 金币更新事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnGoldUpdated OnGoldUpdated;

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
	UPROPERTY(ReplicatedUsing = OnRep_Player1Gold, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player1Gold;

	UFUNCTION()
	void OnRep_Player1Gold();

	// 玩家2 金币
	UPROPERTY(ReplicatedUsing = OnRep_Player2Gold, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|PlayerStats")
	int32 Player2Gold;

	UFUNCTION()
	void OnRep_Player2Gold();

	// 初始金币设置 (由房主设置，同步给所有客户端)
	UPROPERTY(ReplicatedUsing = OnRep_InitialGold, BlueprintReadOnly, Category = "AutoChess|Config")
	int32 InitialGold = 0;

	UFUNCTION()
	void OnRep_InitialGold();

	// 玩家1 准备状态
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	bool bPlayer1Ready;

	// 玩家2 准备状态
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	bool bPlayer2Ready;

	// 玩家1 再来一局请求
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	bool bPlayer1Rematch;

	// 玩家2 再来一局请求
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	bool bPlayer2Rematch;

	// 获胜队伍ID (-1: 平局/无, 0: 玩家1, 1: 玩家2)
	UPROPERTY(ReplicatedUsing = OnRep_WinnerTeamID, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	int32 WinnerTeamID = -1;

	UFUNCTION()
	void OnRep_WinnerTeamID();

	// --- 比赛胜负统计 (Best of 5) ---

	// 玩家1 胜场数
	UPROPERTY(ReplicatedUsing = OnRep_Player1Wins, BlueprintReadOnly, Category = "AutoChess|Match")
	int32 Player1Wins = 0;

	UFUNCTION()
	void OnRep_Player1Wins();

	// 玩家2 胜场数
	UPROPERTY(ReplicatedUsing = OnRep_Player2Wins, BlueprintReadOnly, Category = "AutoChess|Match")
	int32 Player2Wins = 0;

	UFUNCTION()
	void OnRep_Player2Wins();

	// 赢得比赛所需胜场数 (默认3)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Match")
	int32 MaxWinsToWinMatch = 3;

	// 比赛最终获胜者 (-1: 未决出, 0: 玩家1, 1: 玩家2)
	UPROPERTY(ReplicatedUsing = OnRep_MatchWinnerTeamID, BlueprintReadOnly, Category = "AutoChess|Match")
	int32 MatchWinnerTeamID = -1;

	UFUNCTION()
	void OnRep_MatchWinnerTeamID();

	// --- 经济配置 ---

	// 每回合奖励金币
	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Economy")
	int32 GoldPerRound = 5;

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
	
	UPROPERTY(ReplicatedUsing = OnRep_CurrentPhaseIndex, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	uint8 CurrentPhaseIndex;

	UFUNCTION()
	void OnRep_CurrentPhaseIndex(); 

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	int32 CurrentRound;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|GameFlow")
	float PhaseTimer;

	// 棋盘引用 (全局唯一)
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
	class AAutoChessGrid* GameGrid;

	// 场上所有单位
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
	TArray<class AAutoChessUnitBase*> AllUnits;

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

	// 查找空闲的备战区格子
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool FindEmptyBenchSlot(int32 TeamID, FIntPoint& OutGridPos);

	// 检查胜利条件
	void CheckWinCondition();

	// 获取占据格子的单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Board")
	AAutoChessUnitBase* GetUnitAtGrid(int32 GridX, int32 GridY);

	// 预留格子 (用于召唤法术展示期间占用)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void ReserveTile(FIntPoint GridPos, float Duration);

	// 检查格子是否被预留
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool IsTileReserved(FIntPoint GridPos);

	// 队伍0的英雄单位
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
	AAutoChessUnitBase* HeroUnit_Team0;

	// 队伍1的英雄单位
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "AutoChess|Board")
	AAutoChessUnitBase* HeroUnit_Team1;

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
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// 预留的格子列表 (Key: 坐标, Value: 过期时间)
	TMap<FIntPoint, float> ReservedTiles;
};
