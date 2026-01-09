#include "AutoChessProjectile.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AutoChessUnitBase.h"
#include "AutoChessUnitBase.h"
#include "AutoChessCardBase.h"
#include "AutoChessPlayerController.h"
#include "Kismet/GameplayStatics.h"
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

void AAutoChessProjectile::InitProjectile(AAutoChessUnitBase* InTarget, float InDamage, AAutoChessUnitBase* InInstigatorUnit, bool bInIsCrit, int32 InTeamID, const TArray<FProjectileEffectInfo>& InEffectsOnHitEnemy, const TArray<FProjectileEffectInfo>& InEffectsOnHitFriendly)
{
	TargetUnit = InTarget;
	Damage = InDamage;
	InstigatorUnit = InInstigatorUnit;
	bIsCrit = bInIsCrit;
	TeamID = InTeamID;

	// 如果传入了 GE，则覆盖默认值
	if (InEffectsOnHitEnemy.Num() > 0)
	{
		EffectsOnHitEnemy = InEffectsOnHitEnemy;
	}
	if (InEffectsOnHitFriendly.Num() > 0)
	{
		EffectsOnHitFriendly = InEffectsOnHitFriendly;
	}

	// 如果传入了 InstigatorUnit 且 TeamID 为 -1，尝试自动获取
	if (TeamID == -1 && InstigatorUnit)
	{
		TeamID = InstigatorUnit->TeamID;
	}

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
		// 命中友方施加 GE
		if (HasAuthority() && EffectsOnHitFriendly.Num() > 0 && TargetUnit->TeamID == TeamID && TargetUnit->GetAbilitySystemComponent())
		{
			UAbilitySystemComponent* TargetASC = TargetUnit->GetAbilitySystemComponent();
			
			for (const FProjectileEffectInfo& EffectInfo : EffectsOnHitFriendly)
			{
				if (!EffectInfo.EffectClass) continue;

				FGameplayEffectContextHandle Context = TargetASC->MakeEffectContext();
				Context.AddInstigator(InstigatorUnit, this);
				
				FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(EffectInfo.EffectClass, 1.0f, Context);
				if (SpecHandle.IsValid())
				{
					// 循环应用 StackCount 次
					int32 Count = FMath::Max(1, FMath::RoundToInt(EffectInfo.StackCount));
					for (int32 i = 0; i < Count; i++)
					{
						TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
					}
					UE_LOG(LogTemp, Log, TEXT("[Projectile] Applied Friendly Effect %s (x%d) to %s"), *EffectInfo.EffectClass->GetName(), Count, *TargetUnit->GetName());
				}
			}
		}

		// 检查是否触发“命中友方生成卡牌”逻辑
		if (bGenerateCardOnHitFriendly && TargetUnit->TeamID == TeamID)
		{
			if (HasAuthority() && CardPool.Num() > 0)
			{
				// 计算总权重
				float TotalWeight = 0.0f;
				for (const auto& Entry : CardPool)
				{
					TotalWeight += Entry.Weight;
				}

				// 随机选择
				float RandomValue = FMath::FRandRange(0.0f, TotalWeight);
				float CurrentWeight = 0.0f;
				TSubclassOf<UAutoChessCardBase> CardClass = nullptr;

				for (const auto& Entry : CardPool)
				{
					CurrentWeight += Entry.Weight;
					if (RandomValue <= CurrentWeight)
					{
						CardClass = Entry.CardClass;
						break;
					}
				}

				if (CardClass)
				{
					// 查找所属玩家控制器
					AAutoChessPlayerController* TargetPC = nullptr;
					
					// 遍历所有玩家控制器寻找匹配的 TeamID
					// 注意：这里假设 TeamID 对应 PlayerController 的 TeamID
					for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
					{
						AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(Iterator->Get());
						if (PC && PC->TeamID == TeamID)
						{
							TargetPC = PC;
							break;
						}
					}

					if (TargetPC)
					{
						// 创建卡牌实例并添加到手牌
						UAutoChessCardBase* NewCard = NewObject<UAutoChessCardBase>(TargetPC, CardClass);
						if (NewCard)
						{
							TargetPC->HandCards.Add(NewCard);
							UE_LOG(LogTemp, Log, TEXT("[Projectile] Generated Card %s for Player %d"), *NewCard->GetName(), TeamID);
							
							// 手动触发 OnRep 以更新服务器端 UI (如果是 Host)
							TargetPC->OnRep_HandCards();
						}
					}
				}
			}
			
			// 命中友方生成卡牌后，不造成伤害，直接销毁
			Destroy();
			return;
		}


		// 命中敌方施加 GE
		if (HasAuthority() && EffectsOnHitEnemy.Num() > 0 && TargetUnit->TeamID != TeamID && TargetUnit->GetAbilitySystemComponent())
		{
			UAbilitySystemComponent* TargetASC = TargetUnit->GetAbilitySystemComponent();
			
			for (const FProjectileEffectInfo& EffectInfo : EffectsOnHitEnemy)
			{
				if (!EffectInfo.EffectClass) continue;

				FGameplayEffectContextHandle Context = TargetASC->MakeEffectContext();
				Context.AddInstigator(InstigatorUnit, this);
				
				FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(EffectInfo.EffectClass, 1.0f, Context);
				if (SpecHandle.IsValid())
				{
					// 循环应用 StackCount 次
					int32 Count = FMath::Max(1, FMath::RoundToInt(EffectInfo.StackCount));
					for (int32 i = 0; i < Count; i++)
					{
						TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
					}
					UE_LOG(LogTemp, Log, TEXT("[Projectile] Applied Enemy Effect %s (x%d) to %s"), *EffectInfo.EffectClass->GetName(), Count, *TargetUnit->GetName());
				}
			}
		}

		UE_LOG(LogTemp, Log, TEXT("[Projectile] %s hitting %s. Damage=%.1f"), *GetName(), *TargetUnit->GetName(), Damage);
		TargetUnit->ReceiveDamage(Damage, InstigatorUnit, bIsCrit, true);
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
	DOREPLIFETIME(AAutoChessProjectile, TeamID);
}

void AAutoChessProjectile::OnRep_TargetUnit()
{
	if (MovementComp && TargetUnit)
	{
		MovementComp->HomingTargetComponent = TargetUnit->GetRootComponent();
	}
}
