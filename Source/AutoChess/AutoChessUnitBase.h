#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AutoChessAttributeSet.h"
#include "AutoChessAttributeSet.h"
#include "AutoChessUnitData.h"
#include "NiagaraSystem.h" // Forward declaration not enough for UPROPERTY sometimes, but let's try class first
#include "AutoChessUnitBase.generated.h"

class UNiagaraSystem; // Forward declaration

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

	// 队伍ID (0: 玩家1, 1: 玩家2)
	UPROPERTY(ReplicatedUsing = OnRep_TeamID, EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 TeamID;

	UFUNCTION()
	void OnRep_TeamID();

	// --- 数据配置 ---
	
	// 棋子数据配置 (DataAsset)
	// 如果设置了此项，将优先使用其中的数据初始化棋子
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AutoChess|Data")
	class UAutoChessUnitData* UnitData;

	// 从 DataAsset 初始化属性
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Data")
	void InitFromUnitData();

	// 最大生命值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float MaxHealth;

	// 当前生命值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float Health;

	// 攻击力
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float AttackDamage;

	// 攻击范围 (格子数)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 AttackRangeGrid;

	// 攻击速度 (次/秒)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float AttackSpeed;

	// 最大法力值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float MaxMana;

	// 当前法力值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float Mana;

	// 初始法力值
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float InitialMana;

	// 攻击回蓝
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float ManaRegenOnAttack;

	// 受击回蓝
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Stats")
	float ManaRegenOnHit;

	// 技能 Ability 类
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	TSubclassOf<class UGameplayAbility> UnitAbilityClass;

	// 被动技能 Ability 类
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	TSubclassOf<class UGameplayAbility> PassiveAbilityClass;

	// 技能特效 (可配置)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	class UParticleSystem* SkillVFX;

	// 技能特效 (Niagara 版本，可选)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Skill")
	class UNiagaraSystem* SkillNiagaraVFX;

	// 投射物类 (如果为空则为近战)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	TSubclassOf<class AAutoChessProjectile> ProjectileClass;

	// 当前攻击目标
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Combat")
	AAutoChessUnitBase* CurrentTarget;

	// --- 格子移动相关 ---

	// 当前格子坐标
	UPROPERTY(ReplicatedUsing = OnRep_CurrentGridPos, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint CurrentGridPos;

	UFUNCTION()
	void OnRep_CurrentGridPos();

	// 目标格子坐标 (移动中)
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint TargetGridPos;

	// 是否正在移动
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	bool bIsMoving;

	// 移动速度 (Unreal Units / sec)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	float MoveSpeed;

	// 检查是否可以战斗 (基于游戏阶段)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	bool CheckCanFight();

	// 尝试攻击目标
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	void AttackTarget(AAutoChessUnitBase* Target);

	// 受到伤害
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Combat")
	void ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker);

	// 使用技能 (C++ 实现基础逻辑，蓝图可扩展)
	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess|Combat")
	void UseSkill();

	// 死亡处理
	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess|Combat")
	void OnDeath();

	// 更新格子坐标 (瞬间)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void SnapToGrid();

	// 护盾流失速度 (每秒)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Attributes")
	float ShieldDecayRate = 0.0f;





protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// 攻击计时器
	float AttackTimer;

	// 寻找最近的敌人
	AAutoChessUnitBase* FindNearestEnemy();

	// 当前路径
	TArray<FIntPoint> CurrentPath;
	
	// 执行移动逻辑
	void ProcessGridMovement(float DeltaTime);
};
