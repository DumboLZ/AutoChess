#include "AutoChessAttributeSet.h"
#include "Net/UnrealNetwork.h"

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
