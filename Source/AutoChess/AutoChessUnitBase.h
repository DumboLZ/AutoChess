#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "AutoChessUnitBase.generated.h"

class UNiagaraSystem;

/**
 * 自动走棋单位基类
 * 包含战斗属性、攻击逻辑、技能接口
 */
UCLASS()
class AUTOCHESS_API AAutoChessUnitBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AAutoChessUnitBase();

	// --- GAS 组件 ---
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	class UAutoChessAttributeSet* AttributeSet;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// --- UI 组件 ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|UI")
	class UWidgetComponent* HealthBarWidgetComp;

	// 血条 Widget 类（在蓝图中设置）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	TSubclassOf<class UUserWidget> HealthBarWidgetClass;

	// --- 属性变化委托 ---
	virtual void OnHealthChanged(const FOnAttributeChangeData& Data);
	virtual void OnMaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void OnManaChanged(const FOnAttributeChangeData& Data);
	virtual void OnMaxManaChanged(const FOnAttributeChangeData& Data);
	virtual void OnShieldChanged(const FOnAttributeChangeData& Data);

	// 队伍ID (0: 玩家1, 1: 玩家2)
	UPROPERTY(ReplicatedUsing = OnRep_TeamID, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 TeamID;

	UFUNCTION()
	void OnRep_TeamID();

	// 手动更新队伍颜色 (用于服务器端或初始化)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|UI")
	void UpdateTeamColor();

	// --- 数据配置 ---
	
	// 棋子数据配置 (DataAsset)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AutoChess|Data")
	class UAutoChessUnitData* UnitData;

	// 棋子数据配置 (DataTable Row)
	UPROPERTY(ReplicatedUsing = OnRep_UnitDataHandle, EditAnywhere, BlueprintReadOnly, Category = "AutoChess|Data")
	FDataTableRowHandle UnitDataHandle;

	UFUNCTION()
	void OnRep_UnitDataHandle();

	// 从数据初始化属性
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Data")
	void InitFromUnitData();

	// 基础属性
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	FText UnitName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	FText Description;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float MaxHealth;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float Health;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float AttackDamage;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 AttackRangeGrid;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float AttackSpeed;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float MaxMana;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float Mana;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float InitialMana;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float ManaRegenOnAttack;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float ManaRegenOnHit;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float CritRate;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float CritDamage;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	int32 SellPrice;

	// 技能
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	TSubclassOf<class UGameplayAbility> UnitAbilityClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	TSubclassOf<class UGameplayAbility> PassiveAbilityClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	class UParticleSystem* SkillVFX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	class UNiagaraSystem* SkillNiagaraVFX;

	// 投射物
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	TSubclassOf<class AAutoChessProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Combat")
	FName ProjectileSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Combat")
	FVector ProjectileSpawnOffset = FVector(50.0f, 0.0f, 50.0f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Skill")
	TSubclassOf<class AAutoChessSkillProjectile> SkillProjectileClass;

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Skill")
	void SpawnSkillProjectile(FVector TargetLocation);

	// 状态与位置
	UPROPERTY(Replicated)
	FIntPoint StartGridPos;

	UFUNCTION(BlueprintCallable, Category = "AutoChess|State")
	void ResetUnit();

	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess|State")
	void OnDeath();

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void SnapToGrid();

	UFUNCTION(BlueprintCallable, Category = "AutoChess|UI")
	void RefreshUI();

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Combat")
	AAutoChessUnitBase* CurrentTarget;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentGridPos, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint CurrentGridPos;

	UFUNCTION()
	void OnRep_CurrentGridPos();

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint TargetGridPos;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	bool bIsMoving;

	// 动画
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Animation")
	class UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Animation")
	class UAnimMontage* SkillMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Animation")
	class UAnimMontage* DeathMontage;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|State")
	bool bIsDead;

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayAttackAnimation();

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlaySkillAnimation();

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayDeathAnimation();

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	float MoveSpeed;

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Animation")
	FVector GetUnitVelocity() const;

	// 战斗逻辑
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	bool CheckCanFight();

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	void AttackTarget(AAutoChessUnitBase* Target);

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	void ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker, bool bIsCrit = false, bool bIsProjectile = false);

	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess|Combat")
	void UseSkill();

	// 为所有友方单位施加 GE (用于光环/全局被动)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Ability")
	void ApplyGEToAllAllies(TSubclassOf<UGameplayEffect> GEClass);

	// 发射投射物攻击目标 (技能用)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	void SpawnProjectileAtTarget(AAutoChessUnitBase* Target, TSubclassOf<class AAutoChessProjectile> InProjectileClass, float Damage, bool bIsCrit = false);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	float AttackTimer;

	AAutoChessUnitBase* FindNearestEnemy();

	TArray<FIntPoint> CurrentPath;
	
	void ProcessGridMovement(float DeltaTime);

	// 监听回调
	virtual void OnImmuneTagChanged(const FGameplayTag Tag, int32 NewCount);
	virtual void OnActiveGEAdded(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
	virtual void OnGEStackChanged(FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount);
	virtual void OnActiveGERemoved(const FActiveGameplayEffect& RemovedEffect);
};
