#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffectTypes.h" // FIX: 必须包含此头文件以使用 FGameplayEffectSpecHandle
#include "AutoChessSkillProjectile.generated.h"

class UCapsuleComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class UNiagaraComponent;
class AAutoChessUnitBase;

/**
 * 技能投射物基类
 * 支持：直线飞行、穿透、AOE伤害、速度变化、大小变化
 */
UCLASS()
class AUTOCHESS_API AAutoChessSkillProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessSkillProjectile();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// 初始化技能投射物
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Skill")
	void InitSkillProjectile(AAutoChessUnitBase* InInstigator, FVector InDirection);

protected:
	// --- 组件 ---
	
	// 碰撞组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* CapsuleComp;

	// 网格体组件 (可选)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	// Niagara 特效组件 (可选)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UNiagaraComponent* NiagaraComp;

	// 投射物运动组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* MovementComp;

	// --- 配置属性 ---

	// 最大生存时间 (秒)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Lifetime")
	float MaxLifeTime = 10.0f;

	// 初始速度
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Movement")
	float InitialSpeed = 1000.0f;

	// 最终速度 (如果 < 0 则保持不变)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Movement")
	float FinalSpeed = 200.0f;

	// 速度变化曲线 (0-1)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Movement")
	UCurveFloat* SpeedCurve;

	// 初始缩放
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Visual")
	float InitialScale = 1.0f;

	// 最终缩放
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Visual")
	float FinalScale = 3.0f;

	// 缩放变化速率
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Visual")
	float ScaleGrowthRate = 0.5f;

	// AOE 半径 (格子数)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Combat")
	int32 AOERadiusGrid = 1;

	// 伤害 GameplayEffect 类 (替代直接伤害)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Combat")
	TSubclassOf<class UGameplayEffect> DamageEffectClass;

	// 击中特效
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Visual")
	UParticleSystem* HitVFX;

	// --- 运行时状态 ---

	UPROPERTY()
	AAutoChessUnitBase* InstigatorUnit;

	// GAS 效果句柄 (用于传递伤害快照)
	struct FGameplayEffectSpecHandle DamageEffectSpecHandle;

	float LifeTime = 0.0f;

	// 已处理过的 Actor (防止同一单位的多个组件重复触发)
	UPROPERTY()
	TSet<AActor*> ProcessedActors;

	// 处理重叠
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 造成 AOE 伤害
	void ApplyAOEDamage(AActor* CenterActor);
};
