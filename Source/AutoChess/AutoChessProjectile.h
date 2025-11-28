#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoChessProjectile.generated.h"

class USphereComponent;
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
	void InitProjectile(AAutoChessUnitBase* InTarget, float InDamage, AAutoChessUnitBase* InInstigatorUnit);

protected:
	// 碰撞组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SphereComp;

	// 网格体组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	// 投射物运动组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* MovementComp;

	// 目标
	UPROPERTY()
	AAutoChessUnitBase* TargetUnit;

	// 施法者
	UPROPERTY()
	AAutoChessUnitBase* InstigatorUnit;

	// 伤害值
	float Damage;

	// 碰撞处理
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
