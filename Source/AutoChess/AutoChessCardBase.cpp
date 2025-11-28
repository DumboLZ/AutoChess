#include "AutoChessCardBase.h"
#include "AutoChessPlayerController.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"

void UAutoChessCardBase::OnPlayed_Implementation(APlayerController* Controller, AActor* Target)
{
	// 尝试激活 GAS 技能
	AAutoChessPlayerController* AutoChessController = Cast<AAutoChessPlayerController>(Controller);
	if (CardAbilityClass && AutoChessController)
	{
		// 获取玩家的 ASC
		if (UAbilitySystemComponent* ASC = AutoChessController->GetAbilitySystemComponent())
		{
			// 构建事件数据，把目标传进去
			FGameplayEventData EventData;
			EventData.Instigator = Controller;
			EventData.Target = Target;
			
			// 这里的 TriggerTag 需要你在 Ability 蓝图中设置 "Triggers" -> "Gameplay Event"
			// 或者我们直接用 TryActivateAbilityByClass
			
			// 简单起见，直接给 Ability 并激活
			FGameplayAbilitySpec Spec(CardAbilityClass, 1, -1, this);
			FGameplayAbilitySpecHandle Handle = ASC->GiveAbility(Spec);
			
			// 激活 Ability (注意：Ability 内部需要处理 Target)
			// 为了把 Target 传给 Ability，通常有两种做法：
			// 1. 使用 GameplayEvent 触发 (推荐)
			// 2. 设置 AvatarActor 的 Focus (不推荐)
			
			// 这里我们使用 "Give -> TryActivate" 流程，
			// 但是为了传递 Target，我们需要 Ability 能够从 "CurrentActorInfo" 或者 "EventData" 中读取。
			// 由于 TryActivateAbility 不直接接受 EventData，
			// 我们通常会使用 SendGameplayEventToActor，但这需要 Ability 已经处于 Active 状态或者由 Event 触发。
			
			// **简化方案**：
			// 我们假设 Ability 是 "Instance Per Execution" 或者我们手动调用一个带 Payload 的激活方式。
			// 但 UE5 默认没有直接带 Payload 的 TryActivate。
			
			// **折中方案**：
			// 我们先 GiveAbility。
			// 然后调用 SendGameplayEvent。
			// 在 Ability 蓝图中，使用 "Event ActivateAbilityFromEvent" 节点。
			
			// 定义一个通用的 Tag，例如 "Card.Played"
			FGameplayTag EventTag = FGameplayTag::RequestGameplayTag(FName("Card.Played"));
			EventData.EventTag = EventTag;

			// 必须先 Give 才能 Activate
			// 注意：如果 Ability 是一次性的，记得在 Ability 结束时 Remove
			ASC->TryActivateAbilityByClass(CardAbilityClass, true);
			
			// 发送事件 (Ability 需要监听这个 Tag 才能获取 Payload)
			// 这是一个比较高级的用法。
			// 如果你觉得复杂，可以先用简单的 TryActivate，然后在 Ability 里 GetHitResultUnderCursor (不推荐，因为 Target 可能是传进来的)
			
			// **最简单的方案 (适合初学者)**:
			// 我们把 Target 存到一个变量里？不行。
			
			// **推荐方案**: 使用 SendGameplayEvent
			// 前提：Ability 的 "Triggers" 里添加了 "Card.Played"
			ASC->HandleGameplayEvent(EventTag, &EventData);
		}
	}
}

// 纯数据类，暂无逻辑实现
