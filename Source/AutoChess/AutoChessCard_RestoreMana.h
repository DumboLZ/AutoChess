#pragma once

#include "CoreMinimal.h"
#include "AutoChessCardBase.h"
#include "GA_RestoreMana.h"
#include "AutoChessCard_RestoreMana.generated.h"

/**
 * 恢复 3 点费用的法术牌
 */
UCLASS()
class AUTOCHESS_API UAutoChessCard_RestoreMana : public UAutoChessCardBase
{
	GENERATED_BODY()

public:
	UAutoChessCard_RestoreMana()
	{
		CardName = FText::FromString(TEXT("法力补给"));
		CardDescription = FText::FromString(TEXT("立即恢复 3 点费用。"));
		Cost = 0; // 这张牌本身可能不消耗费用，或者消耗 1 恢复 3
		CardAbilityClass = UGA_RestoreMana::StaticClass();
		TargetType = EAutoChessCardTargetType::Self;
		bSkipDisplay = true; // 这种即时效果通常不需要展示动画
	}
};
