#include "GA_RestoreMana.h"
#include "AutoChessPlayerController.h"
#include "AbilitySystemComponent.h"

UGA_RestoreMana::UGA_RestoreMana()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGA_RestoreMana::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 获取施法者 (PlayerController)
	if (ActorInfo && ActorInfo->PlayerController.IsValid())
	{
		if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(ActorInfo->PlayerController.Get()))
		{
			// 恢复 3 点法力 (费用)
			PC->AddMana(3.0f);
			
			UE_LOG(LogTemp, Warning, TEXT("[GA_RestoreMana] Restored 3 mana for player."));
		}
	}

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
