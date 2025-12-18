#include "AutoChessProjectile.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AutoChessUnitBase.h"
#include "Net/UnrealNetwork.h"

AAutoChessProjectile::AAutoChessProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	// 创建碰撞组件 (使用胶囊体以忽略高度差)
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->InitCapsuleSize(15.0f, 200.0f); // 高度设大一点，确保能打中
	CapsuleComp->SetCollisionProfileName(TEXT("OverlapAllDynamic")); // 允许重叠
	CapsuleComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RootComponent = CapsuleComp;

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
	
	// 强制在水平面上移动 (忽略 Z 轴)
	MovementComp->bConstrainToPlane = true;
	MovementComp->SetPlaneConstraintNormal(FVector(0.0f, 0.0f, 1.0f));
}

void AAutoChessProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定重叠事件
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AAutoChessProjectile::OnOverlapBegin);

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
		return;
	}

	// 检查距离 (忽略 Z 轴)
	// 防止近距离穿模或飞过头
	FVector MyLoc = GetActorLocation();
	FVector TargetLoc = TargetUnit->GetActorLocation();
	float DistSq = FVector::DistSquared2D(MyLoc, TargetLoc);

	// 如果距离小于一定阈值 (例如 50^2 = 2500)，直接判定命中
	if (DistSq < 2500.0f)
	{
		TriggerHit();
	}
}

void AAutoChessProjectile::InitProjectile(AAutoChessUnitBase* InTarget, float InDamage, AAutoChessUnitBase* InInstigatorUnit, bool bInIsCrit)
{
	TargetUnit = InTarget;
	Damage = InDamage;
	InstigatorUnit = InInstigatorUnit;
	bIsCrit = bInIsCrit;

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
		TriggerHit();
	}
}

void AAutoChessProjectile::TriggerHit()
{
	// 防止重复触发
	if (!IsValid(this)) return;

	// 造成伤害
	if (TargetUnit)
	{
		TargetUnit->ReceiveDamage(Damage, InstigatorUnit, bIsCrit);
	}

	// 播放特效等（可以在蓝图中扩展 OnDeath）
	
	// 销毁投射物
	Destroy();
}

void AAutoChessProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAutoChessProjectile, TargetUnit);
	DOREPLIFETIME(AAutoChessProjectile, InstigatorUnit);
}

void AAutoChessProjectile::OnRep_TargetUnit()
{
	if (MovementComp && TargetUnit)
	{
		MovementComp->HomingTargetComponent = TargetUnit->GetRootComponent();
	}
}
