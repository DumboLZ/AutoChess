#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AutoChessGameplayAbility.generated.h"

/**
 * 自动走棋技能基类
 */
UCLASS()
class AUTOCHESS_API UAutoChessGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UAutoChessGameplayAbility();

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
};
