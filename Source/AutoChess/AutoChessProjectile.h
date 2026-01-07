#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "AutoChessProjectile.generated.h"

class UCapsuleComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class AAutoChessUnitBase;

UCLASS()
class AUTOCHESS_API AAutoChessProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessProjectile();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// 初始化投射物
	void InitProjectile(AAutoChessUnitBase* InTarget, float InDamage, AAutoChessUnitBase* InInstigatorUnit, bool bInIsCrit = false);

	// 触发命中逻辑
	void TriggerHit();

protected:
	// 碰撞组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* CapsuleComp;

	// 网格体组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	// 投射物运动组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* MovementComp;

	// 目标
	UPROPERTY(ReplicatedUsing = OnRep_TargetUnit)
	AAutoChessUnitBase* TargetUnit;

	UFUNCTION()
	void OnRep_TargetUnit();

	// 施法者
	UPROPERTY(Replicated)
	AAutoChessUnitBase* InstigatorUnit;

	// 伤害值
	float Damage;

	// 是否暴击
	bool bIsCrit;

	// 碰撞处理
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	// 投射物类型标签 (用于被动技能加成判定)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Projectile")
	FGameplayTag ProjectileType;
};
