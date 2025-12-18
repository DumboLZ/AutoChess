#pragma once

#include "CoreMinimal.h"
#include "AutoChessGameplayAbility.h"
#include "GA_RestoreMana.generated.h"

/**
 * 恢复法力值的技能
 */
UCLASS()
class AUTOCHESS_API UGA_RestoreMana : public UAutoChessGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_RestoreMana();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};
