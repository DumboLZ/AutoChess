#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AutoChessUnitData.generated.h"

class UGameplayAbility;
class UParticleSystem;
class UNiagaraSystem;
class AAutoChessProjectile;

/**
 * 棋子数据配置资产
 * 包含棋子的所有基础属性、模型、技能等配置
 */
UCLASS(BlueprintType)
class AUTOCHESS_API UAutoChessUnitData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// --- 基础信息 ---
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Info")
	FText UnitName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Info")
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Info")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Info")
	TSubclassOf<UAnimInstance> AnimBlueprint;

	// --- 战斗属性 ---

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	float AttackDamage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	float AttackSpeed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	int32 AttackRangeGrid = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	float MoveSpeed = 300.0f;

	// --- 技能与蓝量 ---

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mana")
	float MaxMana = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mana")
	float InitialMana = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mana")
	float ManaRegenOnAttack = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mana")
	float ManaRegenOnHit = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill")
	TSubclassOf<UGameplayAbility> AbilityClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill")
	TSubclassOf<UGameplayAbility> PassiveAbilityClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill")
	UParticleSystem* SkillVFX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skill")
	UNiagaraSystem* SkillNiagaraVFX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TSubclassOf<AAutoChessProjectile> ProjectileClass;
};
