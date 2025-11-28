#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
	// 卡牌名称
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	FText CardName;

	// 卡牌描述
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
	FText CardDescription;

	// 金币消耗
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card Info")
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

	// --- 卡牌效果 ---

	// 当卡牌被打出时调用 (蓝图实现具体效果)
	// Controller: 谁打出的
	// Target: 目标 (可能是单位、地块或空)
	UFUNCTION(BlueprintNativeEvent, Category = "Card Effect")
	void OnPlayed(APlayerController* Controller, AActor* Target);
	virtual void OnPlayed_Implementation(APlayerController* Controller, AActor* Target);
};
