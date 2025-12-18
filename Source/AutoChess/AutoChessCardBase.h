#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AutoChessCardBase.generated.h"

class AAutoChessUnitBase;
class AAutoChessPlayerController;

UENUM(BlueprintType)
enum class EAutoChessCardTargetType : uint8
{
	None		UMETA(DisplayName = "None"),
	Enemy		UMETA(DisplayName = "Enemy Unit"),
	Ally		UMETA(DisplayName = "Ally Unit"),
	Self		UMETA(DisplayName = "Self (Player)"),
	AnyUnit		UMETA(DisplayName = "Any Unit")
};

/**
 * 自动走棋卡牌数据类
 * 定义卡牌属性：花费、对应的棋子类、图标等
 */
UCLASS(Blueprintable, BlueprintType)
class AUTOCHESS_API UAutoChessCardBase : public UObject
{
	GENERATED_BODY()
	
public:
	UAutoChessCardBase();
	// 卡牌名称
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	FText CardName;

	// 卡牌描述
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	FText CardDescription;

	// 是否消耗所有法力值 (用于可变强度技能)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	bool bConsumeAllMana = false;

	// 金币消耗 (如果勾选"消耗所有法力"，此项将被忽略)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info", meta=(EditCondition="!bConsumeAllMana"))
	int32 Cost;

	// 对应的棋子类 (生成时使用)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	TSubclassOf<AAutoChessUnitBase> UnitClass;

	// 卡牌图标 (UI显示)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	UTexture2D* Icon;

	// 稀有度 (1-5)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	int32 Rarity;

	// 关联的 Gameplay Ability (打出时激活)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	TSubclassOf<class UGameplayAbility> CardAbilityClass;

	// 目标类型限制
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	EAutoChessCardTargetType TargetType = EAutoChessCardTargetType::Enemy;

	// 作用范围半径 (0: 单体, 1: 3x3, 2: 5x5)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	int32 AOERadius;

	// 临时存储：被高亮的格子列表 (即将生效的范围)
	UPROPERTY(BlueprintReadOnly, Category = "Card Info")
	TArray<FIntPoint> HighlightedTiles;

	// 临时存储：最后一次施放的目标格子坐标 (用于 AOE 显示)
	UPROPERTY(BlueprintReadOnly, Category = "Card Info")
	FIntPoint LastTargetGridPos;

	// 触发标签 (用于区分不同卡牌的技能事件)
	// 默认为 "Card.Played"，建议为每张卡设置唯一的 Tag，例如 "Card.Played.Fireball"
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	FGameplayTag TriggerTag;

	// --- 卡牌展示设置 ---

	// 卡牌展示时长（秒）
	// 在激活技能前，展示给双方玩家的时间
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Display")
	float DisplayDuration = 2.0f;

	// 是否跳过展示（用于快速施法或被动效果）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Display")
	bool bSkipDisplay = false;

	// --- 卡牌效果 ---

	// 当卡牌被打出时调用 (蓝图实现具体效果)
	// Controller: 谁打出的
	// Target: 目标 (可能是单位、地块或空)
	// 当卡牌被打出时调用 (蓝图实现具体效果)
	// Controller: 谁打出的
	// Target: 目标 (可能是单位、地块或空)
	UFUNCTION(BlueprintNativeEvent, Category = "Card Effect")
	void OnPlayed(APlayerController* Controller, AActor* Target);
	virtual void OnPlayed_Implementation(APlayerController* Controller, AActor* Target);

	// 支持网络复制
	virtual bool IsSupportedForNetworking() const override { return true; }
};
