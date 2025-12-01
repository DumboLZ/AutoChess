#include "AutoChessAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "AutoChessUnitBase.h"

UAutoChessAttributeSet::UAutoChessAttributeSet()
{
}

void UAutoChessAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, AttackDamage, COND_None, REPNOTIFY_Always);
}

void UAutoChessAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	UE_LOG(LogTemp, Warning, TEXT("[AttributeSet::PostGameplayEffectExecute] Owner: %s"), 
		*GetOwningActor()->GetName());

	// 检查哪个属性被修改了
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		float OldHealth = Health.GetCurrentValue();
		UE_LOG(LogTemp, Warning, TEXT("[AttributeSet] Health changed! Old: %.1f, New: %.1f, Magnitude: %.1f"), 
			OldHealth, GetHealth(), Data.EvaluatedData.Magnitude);

		// Clamp Health
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
		
		UE_LOG(LogTemp, Warning, TEXT("[AttributeSet] Health after clamp: %.1f"), GetHealth());

		// 死亡检测
		if (GetHealth() <= 0.0f)
		{
			if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(GetOwningActor()))
			{
				Unit->OnDeath();
			}
		}
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		UE_LOG(LogTemp, Warning, TEXT("[AttributeSet] Mana changed! New: %.1f"), GetMana());
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	}
}

void UAutoChessAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, Health, OldHealth);
}

void UAutoChessAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, MaxHealth, OldMaxHealth);
}

void UAutoChessAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, Mana, OldMana);
}

void UAutoChessAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, MaxMana, OldMaxMana);
}

void UAutoChessAttributeSet::OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, AttackDamage, OldAttackDamage);
}
