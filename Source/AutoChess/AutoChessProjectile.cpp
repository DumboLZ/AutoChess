#include "AutoChessProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AutoChessUnitBase.h"

AAutoChessProjectile::AAutoChessProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	// 创建碰撞组件
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->InitSphereRadius(15.0f);
	SphereComp->SetCollisionProfileName(TEXT("OverlapAllDynamic")); // 允许重叠
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RootComponent = SphereComp;

	// 创建网格体
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 纯视觉，不参与碰撞

	// 创建运动组件
	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComp"));
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->MaxSpeed = 1000.0f;
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bIsHomingProjectile = true; // 开启追踪
	MovementComp->HomingAccelerationMagnitude = 5000.0f; // 追踪加速度
	MovementComp->ProjectileGravityScale = 0.0f; // 无重力
}

void AAutoChessProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定重叠事件
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &AAutoChessProjectile::OnOverlapBegin);

	// 设置寿命，防止无限飞行
	SetLifeSpan(5.0f);
}

void AAutoChessProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 如果目标死亡或无效，销毁自己
	if (!TargetUnit || !IsValid(TargetUnit))
	{
		Destroy();
	}
}

void AAutoChessProjectile::InitProjectile(AAutoChessUnitBase* InTarget, float InDamage, AAutoChessUnitBase* InInstigatorUnit)
{
	TargetUnit = InTarget;
	Damage = InDamage;
	InstigatorUnit = InInstigatorUnit;

	if (MovementComp && TargetUnit)
	{
		MovementComp->HomingTargetComponent = TargetUnit->GetRootComponent();
	}
}

void AAutoChessProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 只对目标造成伤害
	if (OtherActor && OtherActor == TargetUnit)
	{
		// 造成伤害
		if (TargetUnit)
		{
			TargetUnit->ReceiveDamage(Damage, InstigatorUnit);
		}

		// 播放特效等（可以在蓝图中扩展 OnDeath）
		
		// 销毁投射物
		Destroy();
	}
}
