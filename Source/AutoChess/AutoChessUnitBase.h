#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AutoChessAttributeSet.h"
#include "AutoChessUnitBase.generated.h"

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

	// 队伍ID (0: 玩家1, 1: 玩家2)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 TeamID;

	// 最大生命值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float MaxHealth;

	// 当前生命值
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float Health;

	// 攻击力
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float AttackDamage;

	// 攻击范围 (格子数)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	int32 AttackRangeGrid;

	// 攻击速度 (次/秒)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float AttackSpeed;

	// 最大法力值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float MaxMana;

	// 当前法力值
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Stats")
	float Mana;

	// 当前攻击目标
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Combat")
	AAutoChessUnitBase* CurrentTarget;

	// --- 格子移动相关 ---

	// 当前格子坐标
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint CurrentGridPos;

	// 目标格子坐标 (移动中)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FIntPoint TargetGridPos;

	// 是否正在移动
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	bool bIsMoving;

	// 移动速度 (Unreal Units / sec)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Grid")
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

	// 使用技能 (蓝图实现具体逻辑)
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|Combat")
	void UseSkill();

	// 死亡处理
	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess|Combat")
	void OnDeath();

	// 更新格子坐标 (瞬间)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void SnapToGrid();

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
