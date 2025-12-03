#include "AutoChessCardBase.h"
#include "AutoChessPlayerController.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"

void UAutoChessCardBase::OnPlayed_Implementation(APlayerController* Controller, AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Card: %s, Target: %s"), 
		*CardName.ToString(), 
		Target ? *Target->GetName() : TEXT("NULL"));

	// 尝试激活 GAS 技能
	AAutoChessPlayerController* AutoChessController = Cast<AAutoChessPlayerController>(Controller);
	if (!AutoChessController)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] Controller is not AutoChessPlayerController!"));
		return;
	}

	if (!CardAbilityClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] CardAbilityClass is NULL!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] CardAbilityClass: %s"), *CardAbilityClass->GetName());

	// 获取玩家的 ASC
	UAbilitySystemComponent* ASC = AutoChessController->GetAbilitySystemComponent();
	if (!ASC)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] AbilitySystemComponent is NULL!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Got ASC, preparing to activate ability..."));

	// 构建事件数据，把目标传进去
	FGameplayEventData EventData;
	EventData.Instigator = Controller;
	EventData.Target = Target;
	EventData.OptionalObject = this; // 传递当前卡牌实例，这样蓝图可以拿到最新的 HighlightedTiles
	
	// 定义一个通用的 Tag，例如 "Card.Played"
	FGameplayTag EventTag = TriggerTag;
	if (!EventTag.IsValid())
	{
		EventTag = FGameplayTag::RequestGameplayTag(FName("Card.Played"));
	}
	EventData.EventTag = EventTag;

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Event Tag: %s, HighlightedTiles Count: %d"), 
		*EventTag.ToString(), HighlightedTiles.Num());

	// 检查是否已经拥有该技能
	FGameplayAbilitySpec* ExistingSpec = ASC->FindAbilitySpecFromClass(CardAbilityClass);
	
	if (!ExistingSpec)
	{
		// 如果没有，才给予
		FGameplayAbilitySpec Spec(CardAbilityClass, 1, -1, this);
		ASC->GiveAbility(Spec);
		UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability given to Player."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Player already has this ability. Skipping GiveAbility."));
	}

	// 尝试激活 (通过 Class 激活，如果有多个只会激活一个，但现在我们保证了只有一个)
	// 注意：如果技能是"被动"或"通过事件触发"，TryActivate 可能不适用，或者需要配合 HandleGameplayEvent
	// bool bActivated = ASC->TryActivateAbilityByClass(CardAbilityClass, true);
	// UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] TryActivateAbilityByClass result: %s"), bActivated ? TEXT("true") : TEXT("false"));
	
	// 发送事件 (如果技能是靠事件触发的)
	// 注意：如果技能同时响应 Activate 和 Event，可能会触发两次。建议蓝图里只用一种方式。
	// 改为纯事件驱动：只发送事件，让 Ability 通过 Trigger Tag 自动激活
	ASC->HandleGameplayEvent(EventTag, &EventData);
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] HandleGameplayEvent called with Tag: %s"), *EventTag.ToString());
}

// 纯数据类，暂无逻辑实现
