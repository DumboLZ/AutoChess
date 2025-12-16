#include "AutoChessSkillProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGrid.h"
#include "Kismet/GameplayStatics.h"

AAutoChessSkillProjectile::AAutoChessSkillProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	// 碰撞组件
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->InitSphereRadius(20.0f);
	SphereComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	RootComponent = SphereComp;

	// 网格体 (可选)
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Niagara 特效 (可选)
	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComp"));
	NiagaraComp->SetupAttachment(RootComponent);

	// 运动组件
	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComp"));
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->MaxSpeed = 2000.0f;
	MovementComp->ProjectileGravityScale = 0.0f;
	MovementComp->bRotationFollowsVelocity = true;
}

#include "GameplayEffectTypes.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"

// ... (constructor remains same)

void AAutoChessSkillProjectile::BeginPlay()
{
	Super::BeginPlay();

	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &AAutoChessSkillProjectile::OnOverlapBegin);

	SetActorScale3D(FVector(InitialScale));
	SetLifeSpan(MaxLifeTime); // 使用配置的寿命
}

void AAutoChessSkillProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LifeTime += DeltaTime;

	// 1. 速度变化 (线性插值或曲线)
	if (MovementComp)
	{
		float CurrentSpeed = MovementComp->Velocity.Size();
		float NewSpeed = CurrentSpeed;

		// 简单线性插值：每秒减少一定速度，直到 FinalSpeed
		// 为了更平滑，可以使用 LifeTime 和预设的 Duration，这里简单处理为每秒趋向 FinalSpeed
		float InterpSpeed = 2.0f; // 插值速度
		NewSpeed = FMath::FInterpTo(CurrentSpeed, FinalSpeed, DeltaTime, InterpSpeed);
		
		MovementComp->Velocity = MovementComp->Velocity.GetSafeNormal() * NewSpeed;
	}

	// 2. 大小变化
	FVector CurrentScale = GetActorScale3D();
	if (CurrentScale.X < FinalScale)
	{
		float NewScaleVal = CurrentScale.X + ScaleGrowthRate * DeltaTime;
		NewScaleVal = FMath::Min(NewScaleVal, FinalScale);
		SetActorScale3D(FVector(NewScaleVal));
	}
}

void AAutoChessSkillProjectile::InitSkillProjectile(AAutoChessUnitBase* InInstigator, FVector InDirection)
{
	InstigatorUnit = InInstigator;
	
	if (MovementComp)
	{
		MovementComp->Velocity = InDirection.GetSafeNormal() * InitialSpeed;
	}

	// 忽略施法者碰撞
	if (InstigatorUnit)
	{
		SphereComp->IgnoreActorWhenMoving(InstigatorUnit, true);
		
		// 创建 GE Spec Handle (快照伤害)
		if (DamageEffectClass && InstigatorUnit->GetAbilitySystemComponent())
		{
			FGameplayEffectContextHandle ContextHandle = InstigatorUnit->GetAbilitySystemComponent()->MakeEffectContext();
			ContextHandle.AddSourceObject(this);
			DamageEffectSpecHandle = InstigatorUnit->GetAbilitySystemComponent()->MakeOutgoingSpec(DamageEffectClass, 1.0f, ContextHandle);
		}
	}
}

void AAutoChessSkillProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!InstigatorUnit || !OtherActor || OtherActor == InstigatorUnit) return;

	AAutoChessUnitBase* HitUnit = Cast<AAutoChessUnitBase>(OtherActor);
	if (HitUnit)
	{
		// 检查是否是敌人
		if (HitUnit->TeamID != InstigatorUnit->TeamID)
		{
			// 触发 AOE 伤害
			ApplyAOEDamage(HitUnit);

			// 播放击中特效 (在击中位置)
			if (HitVFX)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitVFX, GetActorLocation());
			}
		}
	}
}

void AAutoChessSkillProjectile::ApplyAOEDamage(AActor* CenterActor)
{
	AAutoChessUnitBase* CenterUnit = Cast<AAutoChessUnitBase>(CenterActor);
	if (!CenterUnit) return;

	AAutoChessGameState* GS = GetWorld()->GetGameState<AAutoChessGameState>();
	if (!GS || !GS->GameGrid) return;

	// 获取中心格子的坐标
	FIntPoint CenterGridPos = CenterUnit->CurrentGridPos;

	// 遍历 3x3 范围
	for (int32 x = CenterGridPos.X - AOERadiusGrid; x <= CenterGridPos.X + AOERadiusGrid; x++)
	{
		for (int32 y = CenterGridPos.Y - AOERadiusGrid; y <= CenterGridPos.Y + AOERadiusGrid; y++)
		{
			// 获取该格子上的单位
			if (AAutoChessUnitBase* TargetUnit = GS->GetUnitAtGrid(x, y))
			{
				// 必须是敌人
				if (TargetUnit->TeamID != InstigatorUnit->TeamID)
				{
					// 造成伤害 (优先使用 GE)
					if (DamageEffectSpecHandle.IsValid() && TargetUnit->GetAbilitySystemComponent())
					{
						TargetUnit->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf(*DamageEffectSpecHandle.Data.Get());
					}
					else
					{
						// 回退到直接伤害 (如果没配置 GE)
						// TargetUnit->ReceiveDamage(Damage, InstigatorUnit); // Damage 属性已移除，这里可以留空或加回
					}
				}
			}
		}
	}
}
