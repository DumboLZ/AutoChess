#include "AutoChessUnitBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGrid.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "AutoChessUnitWidget.h"
#include "AutoChessProjectile.h"

AAutoChessUnitBase::AAutoChessUnitBase()
{
	PrimaryActorTick.bCanEverTick = true;

	TeamID = 0;
	MaxHealth = 100.0f;
	Health = 100.0f;
	AttackDamage = 10.0f;
	AttackRangeGrid = 1; // 攻击距离改为格子数
	AttackSpeed = 1.0f;
	MaxMana = 100.0f;
	Mana = 0.0f;
	
	MoveSpeed = 300.0f;
	bIsMoving = false;
	CurrentGridPos = FIntPoint(0, 0);

	// 确保 AI 控制器自动接管
	AutoPossessAI = EAutoPossessAI::Disabled;

	// 禁用单位间碰撞，防止移动时互相卡住
	// 禁用单位间碰撞，防止移动时互相卡住
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	// 初始化 GAS 组件
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UAutoChessAttributeSet>(TEXT("AttributeSet"));
}

UAbilitySystemComponent* AAutoChessUnitBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAutoChessUnitBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("[UnitBase::BeginPlay] %s initializing GAS..."), *GetName());

	// 初始化 GAS 属性
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		
		if (AttributeSet)
		{
			// **关键修复**：必须把 AttributeSet 注册到 ASC！
			AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet);
			UE_LOG(LogTemp, Warning, TEXT("[UnitBase::BeginPlay] AttributeSet registered to ASC"));

			AttributeSet->InitHealth(MaxHealth);
			AttributeSet->InitMaxHealth(MaxHealth);
			AttributeSet->InitMana(Mana);
			AttributeSet->InitMaxMana(MaxMana);
			AttributeSet->InitAttackDamage(AttackDamage);

			UE_LOG(LogTemp, Warning, TEXT("[UnitBase::BeginPlay] Attributes initialized - Health: %.1f, MaxHealth: %.1f"), 
				AttributeSet->GetHealth(), AttributeSet->GetMaxHealth());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[UnitBase::BeginPlay] AttributeSet is NULL!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[UnitBase::BeginPlay] AbilitySystemComponent is NULL!"));
	}

	// 注册到 GameState
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->RegisterUnit(this);
	}

	// 初始化位置对齐
	// 第一次生成时，需要根据世界坐标计算 Grid 坐标
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			int32 X, Y;
			if (Grid->WorldToGrid(GetActorLocation(), X, Y))
			{
				CurrentGridPos = FIntPoint(X, Y);
			}
		}
	}
	SnapToGrid();
}

void AAutoChessUnitBase::SnapToGrid()
{
	// 优化：从 GameState 获取 Grid，避免每帧遍历 Actor
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			// 直接使用 CurrentGridPos 计算世界坐标，而不是反过来
			// 这样我们可以先修改 CurrentGridPos，再调用 SnapToGrid 来移动单位
			FVector NewLoc = Grid->GridToWorld(CurrentGridPos.X, CurrentGridPos.Y);
			
			// 保持当前的 Z 高度 (或者根据 Grid 高度调整)
			NewLoc.Z = GetActorLocation().Z; 
			SetActorLocation(NewLoc);
		}
	}
}

bool AAutoChessUnitBase::CheckCanFight()
{
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		return GM->CurrentPhase == EAutoChessPhase::Battle;
	}
	return false;
}

void AAutoChessUnitBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 只有在战斗阶段才进行逻辑
	if (!CheckCanFight())
	{
		bIsMoving = false;
		CurrentPath.Empty();
		CurrentTarget = nullptr;
		return;
	}

	// 移动逻辑优先
	if (bIsMoving)
	{
		ProcessGridMovement(DeltaTime);
		return; // 移动中不攻击
	}

	// 简单的自动攻击逻辑 (仅在有目标时)
	if (IsValid(CurrentTarget))
	{
		// 1. 检查是否已经在攻击范围内 (基于当前位置)
		int32 DistX = FMath::Abs(CurrentGridPos.X - CurrentTarget->CurrentGridPos.X);
		int32 DistY = FMath::Abs(CurrentGridPos.Y - CurrentTarget->CurrentGridPos.Y);
		int32 GridDist = DistX + DistY;

		if (GridDist <= AttackRangeGrid)
		{
			// 停止移动
			bIsMoving = false;
			CurrentPath.Empty();

			// 攻击冷却
			if (AttackTimer <= 0.0f)
			{
				// 面向目标
				FVector Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
				SetActorRotation(Direction.Rotation());

				AttackTarget(CurrentTarget);
				AttackTimer = 1.0f / AttackSpeed;
			}
		}
		else
		{
			// 2. 预测逻辑：如果目标正在移动，且目标即将到达的位置在我的攻击范围内，则原地等待
			bool bShouldWait = false;
			if (CurrentTarget->bIsMoving)
			{
				int32 TargetDistX = FMath::Abs(CurrentGridPos.X - CurrentTarget->TargetGridPos.X);
				int32 TargetDistY = FMath::Abs(CurrentGridPos.Y - CurrentTarget->TargetGridPos.Y);
				int32 TargetGridDist = TargetDistX + TargetDistY;

				if (TargetGridDist <= AttackRangeGrid)
				{
					bShouldWait = true;
				}
			}

			if (bShouldWait)
			{
				// 停止移动，面向目标，等待目标走过来
				bIsMoving = false;
				CurrentPath.Empty();
				
				FVector Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
				SetActorRotation(Direction.Rotation());
			}
			else
			{
				// 3. 寻路并开始移动
				if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
				{
					if (AAutoChessGrid* Grid = GS->GameGrid)
					{
						// 尝试寻路到目标
						if (Grid->FindPath(CurrentGridPos, CurrentTarget->CurrentGridPos, CurrentPath))
						{
							if (CurrentPath.Num() > 0)
							{
								TargetGridPos = CurrentPath[0]; // 取第一步
								bIsMoving = true;
								CurrentPath.RemoveAt(0);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		// 寻找新目标
		CurrentTarget = FindNearestEnemy();
	}

	if (AttackTimer > 0.0f)
	{
		AttackTimer -= DeltaTime;
	}
}

void AAutoChessUnitBase::ProcessGridMovement(float DeltaTime)
{
	// 优化：从 GameState 获取 Grid
	AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());
	if (!GS || !GS->GameGrid) return;
	
	AAutoChessGrid* Grid = GS->GameGrid;

	FVector TargetWorldPos = Grid->GridToWorld(TargetGridPos.X, TargetGridPos.Y);
	TargetWorldPos.Z = GetActorLocation().Z; // 保持高度

	FVector CurrentLoc = GetActorLocation();
	FVector Direction = (TargetWorldPos - CurrentLoc).GetSafeNormal();
	float Distance = FVector::Dist(CurrentLoc, TargetWorldPos);

	// 面向移动方向
	SetActorRotation(Direction.Rotation());

	// 移动一步
	float MoveStep = MoveSpeed * DeltaTime;

	if (Distance <= MoveStep)
	{
		// 到达目标
		SetActorLocation(TargetWorldPos);
		CurrentGridPos = TargetGridPos;
		bIsMoving = false; // 停止移动，下一帧重新决策
	}
	else
	{
		SetActorLocation(CurrentLoc + Direction * MoveStep);
	}
}

void AAutoChessUnitBase::AttackTarget(AAutoChessUnitBase* Target)
{
	if (Target)
	{
		if (ProjectileClass)
		{
			// 远程攻击：生成投射物
			FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 50.0f; // 稍微靠前一点
			FRotator SpawnRotation = (Target->GetActorLocation() - SpawnLocation).Rotation();

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = this;

			AAutoChessProjectile* Projectile = GetWorld()->SpawnActor<AAutoChessProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
			if (Projectile)
			{
				Projectile->InitProjectile(Target, AttackDamage, this);
			}
		}
		else
		{
			// 近战攻击：直接造成伤害
			Target->ReceiveDamage(AttackDamage, this);
		}

		// 增加法力值
		Mana = FMath::Clamp(Mana + 10.0f, 0.0f, MaxMana);
		if (Mana >= MaxMana)
		{
			UseSkill();
			Mana = 0.0f;
		}
	}
}

void AAutoChessUnitBase::ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker)
{
	// 改用 GAS 系统应用伤害
	if (AbilitySystemComponent && AttributeSet)
	{
		// 创建即时 Gameplay Effect 来应用伤害
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(Attacker);

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(
			UGameplayEffect::StaticClass(), 1.0f, EffectContext);

		if (SpecHandle.IsValid())
		{
			// 设置即时伤害修改器
			FGameplayModifierInfo ModifierInfo;
			ModifierInfo.Attribute = UAutoChessAttributeSet::GetHealthAttribute();
			ModifierInfo.ModifierOp = EGameplayModOp::Additive;
			
			// 创建一个临时的 Gameplay Effect 来应用伤害
			// 注意：这里我们需要用负值来减血
			SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), -DamageAmount);
			
			// 简化版：直接修改 AttributeSet 的 Health
			// 注意：直接调用 SetHealth 不会触发 PostGameplayEffectExecute，所以需要手动检查死亡
			float OldHealth = AttributeSet->GetHealth();
			float NewHealth = OldHealth - DamageAmount;
			AttributeSet->SetHealth(FMath::Max(0.0f, NewHealth));
			
			UE_LOG(LogTemp, Warning, TEXT("[UnitBase::ReceiveDamage] %s received %.1f damage from %s. Health: %.1f -> %.1f"), 
				*GetName(), DamageAmount, Attacker ? *Attacker->GetName() : TEXT("Unknown"), 
				OldHealth, AttributeSet->GetHealth());
			
			// 手动检查死亡（因为 PostGameplayEffectExecute 不会被触发）
			if (AttributeSet->GetHealth() <= 0.0f)
			{
				UE_LOG(LogTemp, Warning, TEXT("[UnitBase::ReceiveDamage] %s health reached 0, triggering OnDeath"), *GetName());
				OnDeath();
			}
		}
	}
	else
	{
		// 回退到旧方式（不应该发生）
		Health -= DamageAmount;
		UE_LOG(LogTemp, Error, TEXT("[UnitBase::ReceiveDamage] ASC or AttributeSet is NULL! Falling back to old Health system."));
		
		if (Health <= 0.0f)
		{
			OnDeath();
		}
	}
}

void AAutoChessUnitBase::OnDeath_Implementation()
{
	// 从 GameState 注销
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->UnregisterUnit(this);
	}
	Destroy();
}

AAutoChessUnitBase* AAutoChessUnitBase::FindNearestEnemy()
{
	AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());
	if (!GS) return nullptr;

	TArray<AAutoChessUnitBase*> Enemies = GS->GetUnitsByTeam(1 - TeamID); // 假设只有 0 和 1 两个队伍
	
	AAutoChessUnitBase* NearestEnemy = nullptr;
	float MinDistance = FLT_MAX;

	for (AAutoChessUnitBase* Enemy : Enemies)
	{
		if (IsValid(Enemy))
		{
			// 使用格子距离
			int32 DistX = FMath::Abs(CurrentGridPos.X - Enemy->CurrentGridPos.X);
			int32 DistY = FMath::Abs(CurrentGridPos.Y - Enemy->CurrentGridPos.Y);
			float Dist = DistX + DistY;

			if (Dist < MinDistance)
			{
				MinDistance = Dist;
				NearestEnemy = Enemy;
			}
		}
	}
	return NearestEnemy;
}
