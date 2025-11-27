#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoChessCardBase.generated.h"

class AAutoChessUnitBase;

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
};
