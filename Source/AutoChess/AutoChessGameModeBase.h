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
	float PreparationDuration;

	// 战斗阶段最大持续时间
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	float MaxBattleDuration;

	// 开始战斗
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void StartBattle();

	// 结束回合
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void EndTurn();

	// 阶段改变时调用 (蓝图可重写)
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|GameFlow")
	void OnPhaseChanged(EAutoChessPhase NewPhase);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void UpdateTimer(float DeltaTime);
	void SwitchPhase(EAutoChessPhase NewPhase);
};
