#include "AutoChessCardBase.h"
#include "AutoChessPlayerController.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"

UAutoChessCardBase::UAutoChessCardBase()
{
	CardName = FText::FromString(TEXT("新卡牌"));
	Cost = 0;
	Rarity = 1;
	TargetType = EAutoChessCardTargetType::None;
	AOERadius = 0;
	DisplayDuration = 1.0f;
	bSkipDisplay = false;
}

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

	// 重新获取 Spec (因为 GiveAbility 可能刚添加)
	// 重新获取 Spec (因为 GiveAbility 可能刚添加)
	FGameplayAbilitySpec* SpecToActivate = ASC->FindAbilitySpecFromClass(CardAbilityClass);
	if (SpecToActivate)
	{
		// 广播卡牌展示事件到所有客户端
		if (AutoChessController)
		{
			// 通过 GameMode 广播到所有玩家
			if (AAutoChessGameModeBase* GameMode = Cast<AAutoChessGameModeBase>(AutoChessController->GetWorld()->GetAuthGameMode()))
			{
				GameMode->BroadcastCardDisplay(this, Target, LastTargetGridPos, Controller);
			}
		}

		// 定义激活逻辑 Lambda
		auto ActivateAbilityLambda = [this, ASC, SpecToActivate, EventTag, EventData, AutoChessController]() mutable
		{
			// 安全检查：延迟执行时对象可能已失效
			if (!ASC || !IsValid(ASC))
			{
				UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] ASC is invalid at delayed activation!"));
				return;
			}
			
			if (!SpecToActivate)
			{
				UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] SpecToActivate is invalid at delayed activation!"));
				return;
			}
			
			// 注意：最后一个参数必须是引用 (*ASC)
			int32 Count = ASC->TriggerAbilityFromGameplayEvent(SpecToActivate->Handle, ASC->AbilityActorInfo.Get(), EventTag, &EventData, *ASC);
			UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability Activated! Result Count: %d"), Count);
			
			// 清除全局高亮
			if (AutoChessController && IsValid(AutoChessController))
			{
				if (UWorld* World = AutoChessController->GetWorld())
				{
					if (AAutoChessGameState* GS = World->GetGameState<AAutoChessGameState>())
					{
						// 获取施法者的 TeamID
						int32 TeamID = 0;
						if (AAutoChessPlayerController* CasterPC = Cast<AAutoChessPlayerController>(AutoChessController))
						{
							TeamID = CasterPC->TeamID;
						}
						
						// 使用多播清除对应队伍的高亮
						GS->Multicast_HideSpellHighlight(TeamID);
					}
				}
			}
		};

		if (bSkipDisplay || DisplayDuration <= 0.0f)
		{
			// 立即激活
			ActivateAbilityLambda();
		}
		else
		{
			// 延迟激活
			FTimerHandle TimerHandle;
			Controller->GetWorldTimerManager().SetTimer(TimerHandle, ActivateAbilityLambda, DisplayDuration, false);
			UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability activation delayed by %.2f seconds."), DisplayDuration);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] Failed to find Ability Spec after GiveAbility!"));
	}
}

// 纯数据类，暂无逻辑实现
