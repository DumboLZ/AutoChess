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
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, Shield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAutoChessAttributeSet, AttackSpeed, COND_None, REPNOTIFY_Always);
}

void UAutoChessAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	UE_LOG(LogTemp, Warning, TEXT("[AttributeSet::PostGameplayEffectExecute] Owner: %s"), 
		*GetOwningActor()->GetName());

	// 检查哪个属性被修改了
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		float NewHealth = GetHealth();
		float Magnitude = Data.EvaluatedData.Magnitude;
		float OldHealth = NewHealth - Magnitude; // 反推旧血量

		// 检查是否为"真实伤害" (无视护盾)
		bool bIsTrueDamage = false;
		bool bIsNonLethal = false; // 非致命伤害（至少保留1点生命）
		if (Data.EffectSpec.Def)
		{
			FGameplayTag TrueDamageTag = FGameplayTag::RequestGameplayTag(FName("Damage.Type.True"), false);
			FGameplayTag NonLethalTag = FGameplayTag::RequestGameplayTag(FName("Damage.Type.NonLethal"), false);
			
			if (TrueDamageTag.IsValid())
			{
				// 检查 GE 的 AssetTags
				bIsTrueDamage = Data.EffectSpec.Def->InheritableGameplayEffectTags.CombinedTags.HasTag(TrueDamageTag);
			}
			
			if (NonLethalTag.IsValid())
			{
				bIsNonLethal = Data.EffectSpec.Def->InheritableGameplayEffectTags.CombinedTags.HasTag(NonLethalTag);
			}
		}

		// 如果是受到伤害 (Magnitude < 0) 且有护盾 且不是真实伤害或非致命伤害
		if (Magnitude < 0.0f && GetShield() > 0.0f && !bIsTrueDamage && !bIsNonLethal)
		{
			float Damage = -Magnitude;
			float CurrentShield = GetShield();

			if (CurrentShield >= Damage)
			{
				// 护盾完全抵挡伤害
				SetShield(CurrentShield - Damage);
				SetHealth(OldHealth); // 恢复满血 (因为伤害全被护盾吃了)
				UE_LOG(LogTemp, Warning, TEXT("[Shield] Absorbed all damage: %.1f. Health restored to: %.1f. Remaining Shield: %.1f"), 
					Damage, OldHealth, GetShield());
			}
			else
			{
				// 护盾抵挡部分伤害
				float RemainingDamage = Damage - CurrentShield;
				SetShield(0.0f);
				SetHealth(OldHealth - RemainingDamage); // 扣除剩余伤害
				UE_LOG(LogTemp, Warning, TEXT("[Shield] Absorbed %.1f damage. Remaining Damage: %.1f. New Health: %.1f"), 
					CurrentShield, RemainingDamage, GetHealth());
			}
		}

		// Clamp Health (非致命伤害至少保留1点生命)
		float MinHealth = bIsNonLethal ? 1.0f : 0.0f;
		SetHealth(FMath::Clamp(GetHealth(), MinHealth, GetMaxHealth()));
		
		// 死亡检测 (非致命伤害不会触发死亡)
		if (GetHealth() <= 0.0f && !bIsNonLethal)
		{
			if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(GetOwningActor()))
			{
				Unit->OnDeath();
			}
		}
	}
	else if (Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		// 如果护盾增加，更新流失速度
		if (Data.EvaluatedData.Magnitude > 0.0f)
		{
			if (AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(GetOwningActor()))
			{
				// 3秒内流失完当前所有护盾
				Unit->ShieldDecayRate = GetShield() / 3.0f;
				UE_LOG(LogTemp, Warning, TEXT("[Shield] Shield increased to %.1f. Decay Rate set to %.1f/s"), GetShield(), Unit->ShieldDecayRate);
			}
		}
		SetShield(FMath::Max(GetShield(), 0.0f));
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

void UAutoChessAttributeSet::OnRep_Shield(const FGameplayAttributeData& OldShield)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, Shield, OldShield);
}

void UAutoChessAttributeSet::OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAutoChessAttributeSet, AttackSpeed, OldAttackSpeed);
}
