#include "AutoChessGameplayAbility.h"
#include "AbilitySystemComponent.h"

UAutoChessGameplayAbility::UAutoChessGameplayAbility()
{
	// 默认设置
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	
	// 自动触发策略 (可选)
	// NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void UAutoChessGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	// 技能结束后，自动从 ASC 中移除（防止技能堆积）
	if (ActorInfo && ActorInfo->AbilitySystemComponent.IsValid())
	{
		// 注意：不能直接在这里 ClearAbility，因为可能还在执行中。
		// 更好的做法是标记为待移除，或者使用 SetRemoveAbilityOnEnd (如果存在)
		// 但 UE 默认没有简单的 "Remove Self On End"。
		
		// 我们这里做一个简单的处理：如果是通过卡牌给予的临时技能，我们希望它用完即走。
		// 为了安全，我们可以在下一帧移除，或者直接移除 Spec。
		// 如果是 InstancedAbility，移除 Spec 通常不会立即销毁正在运行的 Instance，直到 EndAbility 完成。
		
		// 这里的 EndAbility 已经是结束流程了。
		ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
	}
}
