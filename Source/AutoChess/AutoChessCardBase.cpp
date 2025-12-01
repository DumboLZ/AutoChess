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
	
	// 定义一个通用的 Tag，例如 "Card.Played"
	FGameplayTag EventTag = FGameplayTag::RequestGameplayTag(FName("Card.Played"));
	EventData.EventTag = EventTag;

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Event Tag: %s, HighlightedTiles Count: %d"), 
		*EventTag.ToString(), HighlightedTiles.Num());

	// 给予 Ability
	FGameplayAbilitySpec Spec(CardAbilityClass, 1, -1, this);
	FGameplayAbilitySpecHandle Handle = ASC->GiveAbility(Spec);
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability given, Handle valid: %s"), Handle.IsValid() ? TEXT("true") : TEXT("false"));

	// 尝试激活
	bool bActivated = ASC->TryActivateAbilityByClass(CardAbilityClass, true);
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] TryActivateAbilityByClass result: %s"), bActivated ? TEXT("true") : TEXT("false"));
	
	// 发送事件
	ASC->HandleGameplayEvent(EventTag, &EventData);
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] HandleGameplayEvent called"));
}

// 纯数据类，暂无逻辑实现
