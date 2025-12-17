#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AutoChessGameModeBase.generated.h"

// 游戏阶段枚举
UENUM(BlueprintType)
enum class EAutoChessPhase : uint8
{
	Preparation UMETA(DisplayName = "Preparation Phase"), // 准备阶段
	Battle      UMETA(DisplayName = "Battle Phase"),      // 战斗阶段
	Settlement  UMETA(DisplayName = "Settlement Phase")   // 结算阶段
};

/**
 * 自动走棋游戏模式基类
 * 管理游戏流程、回合、阶段切换
 */
UCLASS()
class AUTOCHESS_API AAutoChessGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAutoChessGameModeBase();

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	// 当前游戏阶段
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|GameFlow")
	EAutoChessPhase CurrentPhase;

	// 当前回合数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|GameFlow")
	int32 CurrentRound;

	// 阶段计时器 (秒)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|GameFlow")
	float PhaseTimer;

	// 准备阶段持续时间
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	float PreparationDuration = 30.0f;

	// 战斗阶段最大持续时间
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	float MaxBattleDuration = 60.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	float SettlementDuration = 5.0f;

	// 每回合奖励金币
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	int32 GoldRewardPerRound = 5;

	// 初始金币 (由房主在创建房间时设置，默认为 0)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Config", meta = (ExposeOnSpawn = "true"))
	int32 InitialGold = 0;

	// 单位数据表 (用于复活/生成单位)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	class UDataTable* UnitDataTable;

	// 生成单位 (服务器端)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	class AAutoChessUnitBase* SpawnUnit(FName UnitRowName, int32 TeamID, FIntPoint GridPos);

	// 开始战斗
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void StartBattle();

	// 结束回合
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void EndRound(int32 WinnerTeamID);

	// 重新开始游戏 (再来一局)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void RestartGame();

	// 重置棋盘以开始新回合 (复活单位)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void ResetBoardForNewRound();

	// 阶段改变时调用 (蓝图可重写)
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|GameFlow")
	void OnPhaseChanged(EAutoChessPhase NewPhase);

	// 广播卡牌展示到所有客户端
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Cards")
	void BroadcastCardDisplay(class UAutoChessCardBase* Card, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

	// 是否正在等待玩家加入
	bool bWaitingForPlayers;

	// 需要的玩家数量
	int32 RequiredPlayerCount;

	// 当前已连接的玩家数量 (用于分配 TeamID)
	int32 ConnectedPlayerCount;

	// 检查是否所有玩家都已连接
	void CheckAllPlayersReady();

private:
	void UpdateTimer(float DeltaTime);
	void SwitchPhase(EAutoChessPhase NewPhase);
};
