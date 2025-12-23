#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AutoChessCardTypes.h"
#include "AutoChessCardData.generated.h"

class UAutoChessCardBase;

/**
 * 卡牌数据行结构
 */
USTRUCT(BlueprintType)
struct FAutoChessCardRow : public FTableRowBase
{
	GENERATED_BODY()

	// 卡牌名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	FText CardName;

	// 卡牌描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	FText CardDescription;

	// 是否消耗所有法力值
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	bool bConsumeAllMana = false;

	// 基础费用 (打出卡牌消耗的法力/能量)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int32 Cost = 1;

	// 购买价格 (商店购买消耗的金币)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int32 BuyPrice = 1;

	// 卖出价格 (卖出卡牌获得的金币)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int32 SellPrice = 1;

	// 对应的棋子数据行 (用于召唤类卡牌，提供编辑器下拉框)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	FDataTableRowHandle UnitRow;

	// 卡牌图标
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	UTexture2D* Icon = nullptr;

	// 稀有度 (1-5)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int32 Rarity = 1;

	// 关联的 Gameplay Ability
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	TSubclassOf<class UGameplayAbility> CardAbilityClass;

	// 目标类型限制
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	EAutoChessCardTargetType TargetType = EAutoChessCardTargetType::Enemy;

	// 作用范围半径
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int32 AOERadius = 0;

	// 触发标签
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	FGameplayTag TriggerTag;

	// 展示时长
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	float DisplayDuration = 2.0f;

	// 是否跳过展示
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	bool bSkipDisplay = false;
};
