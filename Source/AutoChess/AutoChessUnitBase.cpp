#include "Kismet/GameplayStatics.h"
#include "AutoChessUnitBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGrid.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "AutoChessUnitWidget.h"
#include "AutoChessProjectile.h"
#include "AutoChessUnitData.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemComponent.h"
#include "AutoChessAttributeSet.h"
#include "Abilities/GameplayAbility.h"
#include "AutoChessPlayerController.h"

AAutoChessUnitBase::AAutoChessUnitBase()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true; // 启用网络复制

	TeamID = 0;
	MaxHealth = 100.0f;
	Health = 100.0f;
	AttackDamage = 10.0f;
	AttackRangeGrid = 1; // 攻击距离改为格子数
	AttackSpeed = 1.0f;
	MaxMana = 100.0f;
	Mana = 0.0f;
	InitialMana = 0.0f;
	ManaRegenOnAttack = 10.0f;
	ManaRegenOnHit = 5.0f;
	
	MoveSpeed = 300.0f;
	bIsMoving = false;
	CurrentGridPos = FIntPoint(0, 0);

	// 确保 AI 控制器自动接管
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	// 禁用单位间碰撞，防止移动时互相卡住
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	// 初始化 GAS 组件
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed); // Mixed 模式对 AI 更好

	AttributeSet = CreateDefaultSubobject<UAutoChessAttributeSet>(TEXT("AttributeSet"));

	// 初始化血条组件
	HealthBarWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidgetComp"));
	HealthBarWidgetComp->SetupAttachment(RootComponent);
	HealthBarWidgetComp->SetWidgetSpace(EWidgetSpace::Screen); // 屏幕空间，始终面向摄像机
	HealthBarWidgetComp->SetDrawAtDesiredSize(true);
	HealthBarWidgetComp->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f)); // 默认高度
}

void AAutoChessUnitBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAutoChessUnitBase, TeamID);
	DOREPLIFETIME(AAutoChessUnitBase, CurrentGridPos);
	DOREPLIFETIME(AAutoChessUnitBase, TargetGridPos);
	DOREPLIFETIME(AAutoChessUnitBase, StartGridPos);
	DOREPLIFETIME(AAutoChessUnitBase, bIsMoving);
	DOREPLIFETIME(AAutoChessUnitBase, bIsDead);
	DOREPLIFETIME(AAutoChessUnitBase, CurrentTarget);

	// Stats Replication
	DOREPLIFETIME(AAutoChessUnitBase, MaxHealth);
	DOREPLIFETIME(AAutoChessUnitBase, Health);
	DOREPLIFETIME(AAutoChessUnitBase, AttackDamage);
	DOREPLIFETIME(AAutoChessUnitBase, AttackRangeGrid);
	DOREPLIFETIME(AAutoChessUnitBase, AttackSpeed);
	DOREPLIFETIME(AAutoChessUnitBase, MaxMana);
	DOREPLIFETIME(AAutoChessUnitBase, Mana);
	DOREPLIFETIME(AAutoChessUnitBase, InitialMana);
	DOREPLIFETIME(AAutoChessUnitBase, ManaRegenOnAttack);
	DOREPLIFETIME(AAutoChessUnitBase, ManaRegenOnHit);
	DOREPLIFETIME(AAutoChessUnitBase, MoveSpeed);
	DOREPLIFETIME(AAutoChessUnitBase, CritRate);
	DOREPLIFETIME(AAutoChessUnitBase, CritDamage);
	DOREPLIFETIME(AAutoChessUnitBase, SellPrice);
	DOREPLIFETIME(AAutoChessUnitBase, ProjectileClass);
	DOREPLIFETIME(AAutoChessUnitBase, UnitDataHandle);
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
		
		if (!AttributeSet)
		{
			AttributeSet = NewObject<UAutoChessAttributeSet>(this, TEXT("AttributeSet"));
		}

		if (AttributeSet)
		{
			// 注册 AttributeSet
			AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet);

			// 绑定属性变化委托
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UAutoChessAttributeSet::GetHealthAttribute()).AddUObject(this, &AAutoChessUnitBase::OnHealthChanged);
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UAutoChessAttributeSet::GetMaxHealthAttribute()).AddUObject(this, &AAutoChessUnitBase::OnMaxHealthChanged);
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UAutoChessAttributeSet::GetManaAttribute()).AddUObject(this, &AAutoChessUnitBase::OnManaChanged);
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UAutoChessAttributeSet::GetMaxManaAttribute()).AddUObject(this, &AAutoChessUnitBase::OnMaxManaChanged);
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UAutoChessAttributeSet::GetShieldAttribute()).AddUObject(this, &AAutoChessUnitBase::OnShieldChanged);

			// 尝试从 DataAsset 初始化
			InitFromUnitData();

			// 注册标签变化回调 (用于 UI 显示 Buff)
			FGameplayTag ImmuneTag = FGameplayTag::RequestGameplayTag(FName("Effect.Immune.NextProjectile"), false);
			AbilitySystemComponent->RegisterGameplayTagEvent(ImmuneTag, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AAutoChessUnitBase::OnImmuneTagChanged);

			// 注册 GE 监听回调 (用于 UI 显示层数)
			AbilitySystemComponent->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &AAutoChessUnitBase::OnActiveGEAdded);
			AbilitySystemComponent->OnAnyGameplayEffectRemovedDelegate().AddUObject(this, &AAutoChessUnitBase::OnActiveGERemoved);

			// 无论是否从 DataAsset 初始化，都确保 AttributeSet 被正确赋值 (作为回退)
			AttributeSet->InitHealth(MaxHealth);
			AttributeSet->InitMaxHealth(MaxHealth);
			AttributeSet->InitMana(InitialMana);
			AttributeSet->InitMaxMana(MaxMana);
			AttributeSet->InitAttackDamage(AttackDamage);
			AttributeSet->InitAttackSpeed(AttackSpeed);
			AttributeSet->InitCritRate(CritRate);
			AttributeSet->InitCritDamage(CritDamage);

			// 授予初始 Gameplay Tags
			if (UnitData && UnitData->InitialTags.Num() > 0)
			{
				AbilitySystemComponent->AddLooseGameplayTags(UnitData->InitialTags);
			}
			
			// 初始更新 UI (仅当已初始化时)
			if (!UnitDataHandle.IsNull())
			{
				RefreshUI();
			}
		}
	}

	// 初始化血条 Widget
	if (HealthBarWidgetComp)
	{
		UUserWidget* WidgetObj = HealthBarWidgetComp->GetUserWidgetObject();
		if (WidgetObj)
		{
			if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(WidgetObj))
			{
				UnitWidget->SetTeamColor(TeamID);
				
				// 如果已初始化，立即刷新一次显示
				if (!UnitDataHandle.IsNull())
				{
					RefreshUI();
				}
				else
				{
					// 尚未初始化，先隐藏血条
					HealthBarWidgetComp->SetVisibility(false);
				}
			}
		}
	}

	// 注册到 GameState
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->RegisterUnit(this);
	}

	// 初始化位置对齐
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			int32 X, Y;
			if (Grid->WorldToGrid(GetActorLocation(), X, Y))
			{
				CurrentGridPos = FIntPoint(X, Y);
				// 记录初始位置 (用于回合重置)
				StartGridPos = CurrentGridPos;
			}
		}
	}
	SnapToGrid();
}

void AAutoChessUnitBase::ResetUnit()
{
	// 1. 重置位置
	CurrentGridPos = StartGridPos;
	TargetGridPos = StartGridPos;
	bIsMoving = false;
	SnapToGrid();
	
	// 2. 重置状态
	bIsDead = false;
	CurrentTarget = nullptr;
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	
	// 3. 重置属性 (满血满蓝)
	if (AttributeSet)
	{
		AttributeSet->SetHealth(AttributeSet->GetMaxHealth());
		AttributeSet->SetMana(InitialMana); // 重置为初始蓝量
		AttributeSet->SetShield(0.0f);
	}
	
	// 4. 清除临时 GameplayEffects (Buff/Debuff)
	if (AbilitySystemComponent)
	{
		TArray<FActiveGameplayEffectHandle> HandlesToRemove;
		
		// 使用迭代器遍历 ActiveGameplayEffects
		for (auto It = AbilitySystemComponent->GetActiveGameplayEffects().CreateConstIterator(); It; ++It)
		{
			const FActiveGameplayEffect& Effect = *It;
			
			// 检查是否为临时效果 (DurationPolicy != Infinite)
			if (Effect.Spec.Def && Effect.Spec.Def->DurationPolicy != EGameplayEffectDurationType::Infinite)
			{
				HandlesToRemove.Add(Effect.Handle);
			}
		}

		for (const FActiveGameplayEffectHandle& Handle : HandlesToRemove)
		{
			AbilitySystemComponent->RemoveActiveGameplayEffect(Handle);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("[UnitBase] ResetUnit: %s at (%d, %d)"), *GetName(), StartGridPos.X, StartGridPos.Y);
}

void AAutoChessUnitBase::OnDeath_Implementation()
{
	if (bIsDead) return;
	bIsDead = true;

	UE_LOG(LogTemp, Warning, TEXT("[UnitBase] OnDeath: %s"), *GetName());

	// 播放死亡动画
	Multicast_PlayDeathAnimation();

	// 隐藏并禁用碰撞 (不销毁，等待复活)
	// 延迟一会再隐藏，让死亡动画播完
	FTimerHandle DeathTimer;
	GetWorld()->GetTimerManager().SetTimer(DeathTimer, [this]()
	{
		if (this)
		{
			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
		}
	}, 2.0f, false);

	// 不要从 GameState 移除 (保留引用以便复活)
	// 只触发胜利条件检查
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->CheckWinCondition();
	}
}

void AAutoChessUnitBase::OnHealthChanged(const FOnAttributeChangeData& Data)
{
	if (UnitDataHandle.IsNull()) return;

	// 优先使用传入的 Data.NewValue（来自 OnRep），否则从 AttributeSet 读取
	float NewHealth = 0.0f;
	float NewMaxHealth = 0.0f;
	
	if (Data.NewValue != 0.0f || Data.OldValue != 0.0f) // Data 有效
	{
		NewHealth = Data.NewValue;
		if (AttributeSet)
		{
			NewMaxHealth = AttributeSet->GetMaxHealth();
		}
	}
	else if (AttributeSet) // 从 AttributeSet 读取
	{
		NewHealth = AttributeSet->GetHealth();
		NewMaxHealth = AttributeSet->GetMaxHealth();
	}
	
	// 同步旧的 float 变量
	Health = NewHealth;
	MaxHealth = NewMaxHealth;

	if (HealthBarWidgetComp && AttributeSet)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			UnitWidget->UpdateHealth(NewHealth, NewMaxHealth, AttributeSet->GetShield());
		}
	}
}

void AAutoChessUnitBase::OnMaxHealthChanged(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data);
}

void AAutoChessUnitBase::OnManaChanged(const FOnAttributeChangeData& Data)
{
	if (UnitDataHandle.IsNull()) return;

	// 优先使用传入的 Data.NewValue（来自 OnRep），否则从 AttributeSet 读取
	float NewMana = 0.0f;
	float NewMaxMana = 0.0f;
	
	if (Data.NewValue != 0.0f || Data.OldValue != 0.0f) // Data 有效
	{
		NewMana = Data.NewValue;
		if (AttributeSet)
		{
			NewMaxMana = AttributeSet->GetMaxMana();
		}
	}
	else if (AttributeSet) // 从 AttributeSet 读取
	{
		NewMana = AttributeSet->GetMana();
		NewMaxMana = AttributeSet->GetMaxMana();
	}
	
	// 同步旧的 float 变量
	Mana = NewMana;
	MaxMana = NewMaxMana;

	if (HealthBarWidgetComp && AttributeSet)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			UnitWidget->UpdateMana(NewMana, NewMaxMana);
		}
	}
}

void AAutoChessUnitBase::OnMaxManaChanged(const FOnAttributeChangeData& Data)
{
	// 不要直接传递 MaxMana 的 Data，而是触发一次 Mana 更新
	if (AttributeSet)
	{
		FOnAttributeChangeData ManaData;
		ManaData.NewValue = AttributeSet->GetMana();
		ManaData.OldValue = AttributeSet->GetMana(); // OldValue 也设为当前值，表示只是 MaxMana 变化
		OnManaChanged(ManaData);
	}
}

void AAutoChessUnitBase::OnShieldChanged(const FOnAttributeChangeData& Data)
{
	if (HealthBarWidgetComp && AttributeSet)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			UnitWidget->UpdateHealth(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth(), Data.NewValue);
		}
	}
}

void AAutoChessUnitBase::OnRep_CurrentGridPos()
{
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
			FVector NewLoc = Grid->GridToWorld(CurrentGridPos.X, CurrentGridPos.Y);
			
			// 保持当前的 Z 高度 (或者根据 Grid 高度调整)
			NewLoc.Z = GetActorLocation().Z; 
			SetActorLocation(NewLoc);
		}
	}
}

bool AAutoChessUnitBase::CheckCanFight()
{
	// 优先使用 GameState (Client & Server 均可用)
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		return GS->CurrentPhaseIndex == (uint8)EAutoChessPhase::Battle;
	}
	
	// 回退到 GameMode (仅 Server)
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		return GM->CurrentPhase == EAutoChessPhase::Battle;
	}
	return false;
}

void AAutoChessUnitBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// --- 客户端逻辑 (视觉表现) ---
	if (GetWorld()->IsNetMode(NM_Client))
	{
		// 客户端只负责移动插值
		if (bIsMoving)
		{
			ProcessGridMovement(DeltaTime);
		}
		return;
	}

	// --- 服务器逻辑 (AI & 战斗) ---
	if (bIsDead) return;

	// 优先更新冷却时间 (无论状态如何)
	if (AttackTimer > 0.0f)
	{
		AttackTimer -= DeltaTime;
	}

	// 只有在战斗阶段才进行逻辑
	if (!CheckCanFight())
	{
		bIsMoving = false;
		CurrentPath.Empty();
		CurrentTarget = nullptr;
		return;
	}

	// 眩晕状态检查
	bool bIsStunned = false;
	if (AbilitySystemComponent)
	{
		FGameplayTag StunTag = FGameplayTag::RequestGameplayTag(FName("State.CC.Stunned"), false);
		if (StunTag.IsValid())
		{
			bIsStunned = AbilitySystemComponent->HasMatchingGameplayTag(StunTag);
		}
	}

	// 移动逻辑优先（眩晕时允许完成当前移动）
	if (bIsMoving)
	{
		ProcessGridMovement(DeltaTime);
		// 如果眩晕，完成当前移动后停止
		if (bIsStunned && !bIsMoving)
		{
			CurrentPath.Empty();
			CurrentTarget = nullptr;
		}
		return; // 移动中不攻击
	}

	// 眩晕时不允许新的行动（寻敌、移动、攻击）
	if (bIsStunned)
	{
		CurrentPath.Empty();
		// 不清除 CurrentTarget，眩晕结束后可以继续攻击
		return;
	}

	// 如果正在播放非攻击蒙太奇（如技能、受击），则暂停 AI
	if (GetMesh() && GetMesh()->GetAnimInstance())
	{
		UAnimInstance* AnimInst = GetMesh()->GetAnimInstance();
		if (AnimInst->IsAnyMontagePlaying())
		{
			if (!AttackMontage || !AnimInst->Montage_IsPlaying(AttackMontage))
			{
				return;
			}
		}
	}

	// 简单的自动攻击逻辑 (仅在有目标时)
	if (IsValid(CurrentTarget) && !CurrentTarget->bIsDead)
	{
		// 获取 Grid 信息用于计算实际距离
		float AttackRadius = 100.0f; // 默认值
		if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
		{
			if (GS->GameGrid)
			{
				AttackRadius = AttackRangeGrid * GS->GameGrid->TileSize;
			}
		}

		// 1. 检查是否已经在攻击范围内
		float DistToTarget = FVector::Dist2D(GetActorLocation(), CurrentTarget->GetActorLocation());
		
		if (DistToTarget <= AttackRadius + 10.0f)
		{
			bIsMoving = false;
			CurrentPath.Empty();

			if (AttackTimer <= 0.0f)
			{
				FVector Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
				Direction.Z = 0.0f;
				SetActorRotation(Direction.Rotation());

				AttackTarget(CurrentTarget);
				
				float CurrentAttackSpeed = AttackSpeed;
				if (AttributeSet)
				{
					CurrentAttackSpeed = AttributeSet->GetAttackSpeed();
				}
				AttackTimer = 1.0f / FMath::Max(0.1f, CurrentAttackSpeed);
			}
		}
		else
		{
			// 2. 预测逻辑
			bool bShouldWait = false;
			if (CurrentTarget->bIsMoving)
			{
				if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
				{
					if (GS->GameGrid)
					{
						FVector TargetDestWorld = GS->GameGrid->GridToWorld(CurrentTarget->TargetGridPos.X, CurrentTarget->TargetGridPos.Y);
						float DistToDest = FVector::Dist2D(GetActorLocation(), TargetDestWorld);
						if (DistToDest <= AttackRadius + 10.0f)
						{
							bShouldWait = true;
						}
					}
				}
			}

			if (bShouldWait)
			{
				bIsMoving = false;
				CurrentPath.Empty();
				
				FVector Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
				Direction.Z = 0.0f;
				SetActorRotation(Direction.Rotation());
			}
			else
			{
				// 3. 寻路并开始移动
				if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
				{
					if (AAutoChessGrid* Grid = GS->GameGrid)
					{
						if (Grid->FindPath(CurrentGridPos, CurrentTarget->CurrentGridPos, CurrentPath))
						{
							if (CurrentPath.Num() > 0)
							{
								TargetGridPos = CurrentPath[0];
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
}

void AAutoChessUnitBase::ProcessGridMovement(float DeltaTime)
{
	AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());
	if (!GS || !GS->GameGrid) return;
	
	AAutoChessGrid* Grid = GS->GameGrid;

	FVector TargetWorldPos = Grid->GridToWorld(TargetGridPos.X, TargetGridPos.Y);
	TargetWorldPos.Z = GetActorLocation().Z;

	FVector CurrentLoc = GetActorLocation();
	FVector Direction = (TargetWorldPos - CurrentLoc).GetSafeNormal();
	float Distance = FVector::Dist(CurrentLoc, TargetWorldPos);

	SetActorRotation(Direction.Rotation());

	float MoveStep = MoveSpeed * DeltaTime;

	if (Distance <= MoveStep)
	{
		SetActorLocation(TargetWorldPos);
		CurrentGridPos = TargetGridPos;
		bIsMoving = false;
	}
	else
	{
		SetActorLocation(CurrentLoc + Direction * MoveStep);
	}
}

void AAutoChessUnitBase::AttackTarget(AAutoChessUnitBase* Target)
{
	if (Target && !Target->bIsDead)
	{
		float CurrentAttackDamage = AttackDamage;
		float CurrentCritRate = 0.0f;
		float CurrentCritDamage = 1.5f;

		if (AttributeSet)
		{
			CurrentAttackDamage = AttributeSet->GetAttackDamage();
			CurrentCritRate = AttributeSet->GetCritRate();
			CurrentCritDamage = AttributeSet->GetCritDamage();
		}

		// 暴击判定
		bool bIsCrit = FMath::FRand() < CurrentCritRate;
		if (bIsCrit)
		{
			CurrentAttackDamage *= CurrentCritDamage;
			UE_LOG(LogTemp, Warning, TEXT("[Combat] CRITICAL HIT! Damage: %f"), CurrentAttackDamage);
		}

		UE_LOG(LogTemp, Log, TEXT("[Combat] %s attacking %s. ProjectileClass: %s, Range: %d"), 
			*GetName(), *Target->GetName(), ProjectileClass ? *ProjectileClass->GetName() : TEXT("NULL"), AttackRangeGrid);

		if (ProjectileClass)
		{
			FVector SpawnLocation;
			if (!ProjectileSocketName.IsNone() && GetMesh() && GetMesh()->DoesSocketExist(ProjectileSocketName))
			{
				SpawnLocation = GetMesh()->GetSocketLocation(ProjectileSocketName);
			}
			else
			{
				SpawnLocation = GetActorLocation() + GetActorRotation().RotateVector(ProjectileSpawnOffset);
			}

			FVector TargetLocFlat = Target->GetActorLocation();
			TargetLocFlat.Z = SpawnLocation.Z;
			FRotator SpawnRotation = (TargetLocFlat - SpawnLocation).Rotation();

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = this;

			AAutoChessProjectile* Projectile = GetWorld()->SpawnActor<AAutoChessProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
			if (Projectile)
			{
				float FinalDamage = CurrentAttackDamage;
				
				// 检查投射物伤害加成标签
				if (AbilitySystemComponent && Projectile->ProjectileType.IsValid())
				{
					// 构造增伤标签：Buff.ProjectileDamage.类别 (例如 Buff.ProjectileDamage.Arrow)
					FString TagString = FString::Printf(TEXT("Buff.ProjectileDamage.%s"), *Projectile->ProjectileType.GetTagName().ToString());
					FGameplayTag DamageBuffTag = FGameplayTag::RequestGameplayTag(FName(*TagString), false);
					
					int32 StackCount = AbilitySystemComponent->GetTagCount(DamageBuffTag);
					if (StackCount > 0)
					{
						// 配置：每层增加 1 点固定伤害
						float BonusDamage = (float)StackCount;
						FinalDamage += BonusDamage;

						UE_LOG(LogTemp, Log, TEXT("[Combat] %s Projectile Damage Buffed! Type: %s, Stacks: %d, Bonus: +%.1f, Final Damage: %.1f"), 
							*GetName(), *Projectile->ProjectileType.ToString(), StackCount, BonusDamage, FinalDamage);
					}
				}

				Projectile->InitProjectile(Target, FinalDamage, this, bIsCrit);
			}
		}
		else
		{
			// 如果没有物理子弹但攻击距离 > 1，也视为投射物攻击（远程攻击）
			bool bIsRangedInstant = (AttackRangeGrid > 1);
			Target->ReceiveDamage(CurrentAttackDamage, this, bIsCrit, bIsRangedInstant);
		}

		Multicast_PlayAttackAnimation();

		if (AttributeSet)
		{
			// 检查是否禁止获取法力
			bool bCanGainMana = true;
			FGameplayTag NoManaTag = FGameplayTag::RequestGameplayTag(FName("State.NoManaGain"), false);
			if (NoManaTag.IsValid() && AbilitySystemComponent && AbilitySystemComponent->HasMatchingGameplayTag(NoManaTag))
			{
				bCanGainMana = false;
			}

			if (bCanGainMana)
			{
				float CurrentMana = AttributeSet->GetMana();
				float NewMana = FMath::Clamp(CurrentMana + ManaRegenOnAttack, 0.0f, AttributeSet->GetMaxMana());
				AttributeSet->SetMana(NewMana);
				
				if (NewMana >= AttributeSet->GetMaxMana())
				{
					UseSkill();
				}
			}
		}

		if (AbilitySystemComponent)
		{
			FGameplayEventData EventData;
			EventData.Instigator = this;
			EventData.Target = Target;
			
			FGameplayTag AttackTag = FGameplayTag::RequestGameplayTag(FName("AutoChess.Event.Attack"), false);
			if (AttackTag.IsValid())
			{
				AbilitySystemComponent->HandleGameplayEvent(AttackTag, &EventData);
			}
		}
	}
}

void AAutoChessUnitBase::ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker, bool bIsCrit, bool bIsProjectile)
{
	if (bIsDead) return;

	// 诊断日志
	UE_LOG(LogTemp, Log, TEXT("[Combat] %s ReceiveDamage: Amount=%.1f, Projectile=%s, Server=%s"), 
		*GetName(), DamageAmount, bIsProjectile ? TEXT("True") : TEXT("False"), HasAuthority() ? TEXT("True") : TEXT("False"));

	// 检查弹道免疫技能
	if (bIsProjectile && AbilitySystemComponent)
	{
		// 打印所有活跃的 GE 以供调试
		TArray<FActiveGameplayEffectHandle> ActiveEffects = AbilitySystemComponent->GetActiveEffects(FGameplayEffectQuery());
		FString GEList = "";
		for (const FActiveGameplayEffectHandle& Handle : ActiveEffects)
		{
			if (const FActiveGameplayEffect* ActiveGE = AbilitySystemComponent->GetActiveGameplayEffect(Handle))
			{
				GEList += ActiveGE->Spec.Def->GetName() + ", ";
			}
		}
		UE_LOG(LogTemp, Log, TEXT("[Combat] %s Active GEs: [%s]"), *GetName(), *GEList);

		// 打印所有持有的标签以供调试
		FGameplayTagContainer OwnedTags;
		AbilitySystemComponent->GetOwnedGameplayTags(OwnedTags);
		UE_LOG(LogTemp, Log, TEXT("[Combat] %s Owned Tags: %s"), *GetName(), *OwnedTags.ToString());

		FGameplayTag ImmuneTag = FGameplayTag::RequestGameplayTag(FName("Effect.Immune.NextProjectile"), false);
		bool bHasTag = AbilitySystemComponent->HasMatchingGameplayTag(ImmuneTag);
		
		UE_LOG(LogTemp, Log, TEXT("[Combat] %s Checking ImmuneTag: Valid=%s, HasTag=%s"), 
			*GetName(), ImmuneTag.IsValid() ? TEXT("True") : TEXT("False"), bHasTag ? TEXT("True") : TEXT("False"));

		if (ImmuneTag.IsValid() && bHasTag)
		{
			// 免疫伤害并移除标签
			// 关键：RemoveLooseGameplayTag 只能移除手动添加的标签。
			// 对于 GE 授予的标签，我们需要移除对应的 GE。
			FGameplayTagContainer TagContainer;
			TagContainer.AddTag(ImmuneTag);
			AbilitySystemComponent->RemoveActiveEffectsWithGrantedTags(TagContainer);
			AbilitySystemComponent->RemoveLooseGameplayTag(ImmuneTag);
			
			UE_LOG(LogTemp, Warning, TEXT("[Combat] %s SUCCESS! IMMUNED projectile damage from %s!"), 
				*GetName(), Attacker ? *Attacker->GetName() : TEXT("Unknown"));
			
			return;
		}
	}

	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Settlement) return;
	}

	if (AbilitySystemComponent && AttributeSet)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(Attacker);

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(
			UGameplayEffect::StaticClass(), 1.0f, EffectContext);

		if (SpecHandle.IsValid())
		{
			SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), -DamageAmount);
			
			float CurrentShield = AttributeSet->GetShield();
			float ActualDamageToHealth = DamageAmount;

			if (CurrentShield > 0.0f)
			{
				if (CurrentShield >= DamageAmount)
				{
					AttributeSet->SetShield(CurrentShield - DamageAmount);
					ActualDamageToHealth = 0.0f;
				}
				else
				{
					ActualDamageToHealth = DamageAmount - CurrentShield;
					AttributeSet->SetShield(0.0f);
				}
			}

			if (ActualDamageToHealth > 0.0f)
			{
				float OldHealth = AttributeSet->GetHealth();
				float NewHealth = OldHealth - ActualDamageToHealth;
				AttributeSet->SetHealth(FMath::Max(0.0f, NewHealth));
			}
			
			if (AttributeSet->GetHealth() <= 0.0f)
			{
				AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());
				if (GS && GS->TryReviveUnit(this))
				{
					// 复活：恢复满血，清空蓝量
					AttributeSet->SetHealth(AttributeSet->GetMaxHealth());
					AttributeSet->SetMana(0.0f);
					
					UE_LOG(LogTemp, Warning, TEXT("[Unit] %s Revived! Remaining Revivals: T0=%d, T1=%d"), 
						*GetName(), GS->Team0Revivals, GS->Team1Revivals);
				}
				else
				{
					OnDeath();
				}
			}
			else
			{
				bool bIsCastingSkill = false;
				if (SkillMontage && GetMesh() && GetMesh()->GetAnimInstance() && GetMesh()->GetAnimInstance()->Montage_IsPlaying(SkillMontage))
				{
					bIsCastingSkill = true;
				}

				if (!bIsCastingSkill)
				{
					// 检查是否禁止获取法力
					bool bCanGainMana = true;
					FGameplayTag NoManaTag = FGameplayTag::RequestGameplayTag(FName("State.NoManaGain"), false);
					if (NoManaTag.IsValid() && AbilitySystemComponent->HasMatchingGameplayTag(NoManaTag))
					{
						bCanGainMana = false;
					}

					if (bCanGainMana)
					{
						float CurrentMana = AttributeSet->GetMana();
						float NewMana = FMath::Clamp(CurrentMana + ManaRegenOnHit, 0.0f, AttributeSet->GetMaxMana());
						AttributeSet->SetMana(NewMana);

						if (NewMana >= AttributeSet->GetMaxMana())
						{
							UseSkill();
						}
					}
				}

				FGameplayEventData EventData;
				EventData.Instigator = Attacker;
				EventData.Target = this;
				EventData.EventMagnitude = ActualDamageToHealth;

				FGameplayTag HitTag = FGameplayTag::RequestGameplayTag(FName("AutoChess.Event.Hit"), false);
				if (HitTag.IsValid())
				{
					AbilitySystemComponent->HandleGameplayEvent(HitTag, &EventData);
				}
			}

			// 关键：手动刷新一次 UI，确保服务器端视觉反馈实时
			RefreshUI();
		}
	}
	else
	{
		Health -= DamageAmount;
		if (Health <= 0.0f)
		{
			OnDeath();
		}
	}
}

void AAutoChessUnitBase::Multicast_PlayDeathAnimation_Implementation()
{
	if (DeathMontage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		GetMesh()->GetAnimInstance()->Montage_Play(DeathMontage);
	}
}

AAutoChessUnitBase* AAutoChessUnitBase::FindNearestEnemy()
{
	AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());
	if (!GS) return nullptr;

	TArray<AAutoChessUnitBase*> Enemies = GS->GetUnitsByTeam(1 - TeamID);
	
	AAutoChessUnitBase* NearestEnemy = nullptr;
	float MinDistance = FLT_MAX;

	for (AAutoChessUnitBase* Enemy : Enemies)
	{
		if (IsValid(Enemy) && !Enemy->bIsDead)
		{
			float Dist = FVector::Dist2D(GetActorLocation(), Enemy->GetActorLocation());

			if (Dist < MinDistance)
			{
				MinDistance = Dist;
				NearestEnemy = Enemy;
			}
		}
	}
	return NearestEnemy;
}

void AAutoChessUnitBase::UseSkill_Implementation()
{
	if (AbilitySystemComponent)
	{
		FGameplayTag StunTag = FGameplayTag::RequestGameplayTag(FName("State.CC.Stunned"), false);
		if (StunTag.IsValid() && AbilitySystemComponent->HasMatchingGameplayTag(StunTag))
		{
			return;
		}
	}

	if (UnitAbilityClass && AbilitySystemComponent)
	{
		FGameplayAbilitySpecHandle SpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(UnitAbilityClass, 1, 0));
		
		if (SpecHandle.IsValid())
		{
			if (AbilitySystemComponent->TryActivateAbility(SpecHandle))
			{
				if (AttributeSet)
				{
					AttributeSet->SetMana(0.0f);
				}
				Multicast_PlaySkillAnimation();
				if (SkillVFX)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SkillVFX, GetActorLocation(), GetActorRotation(), true);
				}
			}
		}
	}
	else
	{
		if (AttributeSet)
		{
			AttributeSet->SetMana(0.0f);
		}
		Multicast_PlaySkillAnimation();
	}
}

void AAutoChessUnitBase::InitFromUnitData()
{
    if (!this) return;

    UE_LOG(LogTemp, Log, TEXT("[Init] %s InitFromUnitData called. Server=%s"), 
        *GetName(), HasAuthority() ? TEXT("True") : TEXT("False"));

    if (UnitDataHandle.IsNull())
    {
        UE_LOG(LogTemp, Warning, TEXT("[Init] %s UnitDataHandle is NULL!"), *GetName());
        return;
    }

    FAutoChessUnitRow* Row = UnitDataHandle.GetRow<FAutoChessUnitRow>(TEXT("InitFromUnitData"));
    if (Row)
    {
        UE_LOG(LogTemp, Log, TEXT("[Init] %s Found Row. InitialTags count: %d"), 
            *GetName(), Row->InitialTags.Num());
        UnitName = Row->UnitName;
        Description = Row->Description;
        MaxHealth = Row->MaxHealth;
        AttackDamage = Row->AttackDamage;
        AttackSpeed = Row->AttackSpeed;
        AttackRangeGrid = Row->AttackRangeGrid;
        MoveSpeed = Row->MoveSpeed;
        
        MaxMana = Row->MaxMana;
        InitialMana = Row->InitialMana;
        ManaRegenOnAttack = Row->ManaRegenOnAttack;
        ManaRegenOnHit = Row->ManaRegenOnHit;
        CritRate = Row->CritRate;
        CritDamage = Row->CritDamage;
        SellPrice = Row->SellPrice;

        UnitAbilityClass = Row->AbilityClass;
        PassiveAbilityClass = Row->PassiveAbilityClass;
        SkillVFX = Row->SkillVFX;
        SkillNiagaraVFX = Row->SkillNiagaraVFX;
        ProjectileClass = Row->ProjectileClass;
        UE_LOG(LogTemp, Log, TEXT("[Init] %s ProjectileClass set to: %s"), 
            *GetName(), ProjectileClass ? *ProjectileClass->GetName() : TEXT("NULL"));

        if (GetMesh())
        {
            if (Row->SkeletalMesh && GetMesh()->GetSkeletalMeshAsset() != Row->SkeletalMesh)
            {
                GetMesh()->SetSkeletalMesh(Row->SkeletalMesh);
            }

            if (Row->AnimBlueprint && GetMesh()->GetAnimClass() != Row->AnimBlueprint)
            {
                GetMesh()->SetAnimInstanceClass(Row->AnimBlueprint);
            }
        }

        if (AttributeSet)
        {
            AttributeSet->InitHealth(MaxHealth);
            AttributeSet->InitMaxHealth(MaxHealth);
            AttributeSet->InitMana(InitialMana);
            AttributeSet->InitMaxMana(MaxMana);
            AttributeSet->InitAttackDamage(AttackDamage);
            AttributeSet->InitAttackSpeed(AttackSpeed);
            AttributeSet->InitCritRate(CritRate);
            AttributeSet->InitCritDamage(CritDamage);
        }

        // 应用初始标签
        if (AbilitySystemComponent)
        {
            AbilitySystemComponent->AddLooseGameplayTags(Row->InitialTags);

            // 授予技能 (仅服务器)
            if (HasAuthority())
            {
                // 主动技能
                if (UnitAbilityClass)
                {
                    // 检查是否已经拥有该技能，避免重复授予
                    bool bHasAbility = false;
                    for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
                    {
                        if (Spec.Ability->GetClass() == UnitAbilityClass)
                        {
                            bHasAbility = true;
                            break;
                        }
                    }
                    if (!bHasAbility)
                    {
                        AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(UnitAbilityClass, 1, 0));
                    }
                }

                // 被动技能
                if (PassiveAbilityClass)
                {
                    bool bHasPassive = false;
                    for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
                    {
                        if (Spec.Ability->GetClass() == PassiveAbilityClass)
                        {
                            bHasPassive = true;
                            break;
                        }
                    }
                    if (!bHasPassive)
                    {
                        FGameplayAbilitySpecHandle PassiveSpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PassiveAbilityClass, 1, 1));
                        bool bActivated = AbilitySystemComponent->TryActivateAbility(PassiveSpecHandle);
                        UE_LOG(LogTemp, Log, TEXT("[GAS] %s Passive Ability Given in Init. Activated: %s"), 
                            *GetName(), bActivated ? TEXT("True") : TEXT("False"));
                    }
                }
            }
        }
        
        UpdateTeamColor();
        RefreshUI();
    }
}

void AAutoChessUnitBase::RefreshUI()
{
	if (UnitDataHandle.IsNull()) return;

	if (HealthBarWidgetComp)
	{
		HealthBarWidgetComp->SetVisibility(true);

		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			if (AttributeSet)
			{
				UnitWidget->UpdateHealth(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth(), AttributeSet->GetShield());
				UnitWidget->UpdateMana(AttributeSet->GetMana(), AttributeSet->GetMaxMana());
			}
		}
	}
}

void AAutoChessUnitBase::OnRep_TeamID()
{
	UpdateTeamColor();
}

void AAutoChessUnitBase::OnRep_UnitDataHandle()
{
	InitFromUnitData();
}

void AAutoChessUnitBase::UpdateTeamColor()
{
	if (HealthBarWidgetComp)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			int32 ColorIndex = 0; 
			if (UWorld* World = GetWorld())
			{
				if (APlayerController* PC = World->GetFirstPlayerController())
				{
					if (AAutoChessPlayerController* AutoChessPC = Cast<AAutoChessPlayerController>(PC))
					{
						if (AutoChessPC->TeamID == TeamID)
						{
							ColorIndex = 1;
						}
					}
				}
			}
			UnitWidget->SetTeamColor(ColorIndex);
		}
	}
}

void AAutoChessUnitBase::Multicast_PlayAttackAnimation_Implementation()
{
	if (AttackMontage)
	{
		PlayAnimMontage(AttackMontage);
	}
}

void AAutoChessUnitBase::Multicast_PlaySkillAnimation_Implementation()
{
	if (SkillMontage)
	{
		PlayAnimMontage(SkillMontage);
	}
}

FVector AAutoChessUnitBase::GetUnitVelocity() const
{
	if (bIsMoving)
	{
		return GetActorForwardVector() * MoveSpeed;
	}
	return FVector::ZeroVector;
}

#include "AutoChessSkillProjectile.h"

void AAutoChessUnitBase::SpawnSkillProjectile(FVector TargetLocation)
{
	if (!SkillProjectileClass)
	{
		return;
	}

	FVector SpawnLocation;
	if (!ProjectileSocketName.IsNone() && GetMesh() && GetMesh()->DoesSocketExist(ProjectileSocketName))
	{
		SpawnLocation = GetMesh()->GetSocketLocation(ProjectileSocketName);
	}
	else
	{
		SpawnLocation = GetActorLocation() + GetActorRotation().RotateVector(ProjectileSpawnOffset);
	}

	FVector TargetLocFlat = TargetLocation;
	TargetLocFlat.Z = SpawnLocation.Z;
	FVector Direction = (TargetLocFlat - SpawnLocation).GetSafeNormal();
	FRotator SpawnRotation = Direction.Rotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AAutoChessSkillProjectile* Projectile = GetWorld()->SpawnActor<AAutoChessSkillProjectile>(SkillProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
	if (Projectile)
	{
		Projectile->InitSkillProjectile(this, Direction);
	}
}

void AAutoChessUnitBase::OnImmuneTagChanged(const FGameplayTag Tag, int32 NewCount)
{
	if (HealthBarWidgetComp)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			UnitWidget->UpdateBuffState(Tag, NewCount > 0);
		}
	}
}

void AAutoChessUnitBase::OnActiveGEAdded(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	// 监听层数变化
	Target->OnGameplayEffectStackChangeDelegate(ActiveHandle)->AddUObject(this, &AAutoChessUnitBase::OnGEStackChanged);

	// 初始通知 UI
	FGameplayTagContainer AssetTags;
	SpecApplied.GetAllAssetTags(AssetTags);
	
	if (AssetTags.Num() > 0 && HealthBarWidgetComp)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			// 使用第一个 AssetTag 作为标识
			UnitWidget->UpdateGEStack(AssetTags.GetByIndex(0), SpecApplied.GetStackCount());
		}
	}
}

void AAutoChessUnitBase::OnGEStackChanged(FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount)
{
	if (AbilitySystemComponent && HealthBarWidgetComp)
	{
		if (const FActiveGameplayEffect* ActiveGE = AbilitySystemComponent->GetActiveGameplayEffect(Handle))
		{
			FGameplayTagContainer AssetTags;
			ActiveGE->Spec.GetAllAssetTags(AssetTags);

			if (AssetTags.Num() > 0)
			{
				if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
				{
					UnitWidget->UpdateGEStack(AssetTags.GetByIndex(0), NewStackCount);
				}
			}
		}
	}
}

void AAutoChessUnitBase::OnActiveGERemoved(const FActiveGameplayEffect& RemovedEffect)
{
	FGameplayTagContainer AssetTags;
	RemovedEffect.Spec.GetAllAssetTags(AssetTags);

	if (AssetTags.Num() > 0 && HealthBarWidgetComp)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
		{
			// 层数归零
			UnitWidget->UpdateGEStack(AssetTags.GetByIndex(0), 0);
		}
	}
}

void AAutoChessUnitBase::ApplyGEToAllAllies(TSubclassOf<UGameplayEffect> GEClass)
{
	if (!HasAuthority() || !GEClass) return;

	TArray<AActor*> AllUnits;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAutoChessUnitBase::StaticClass(), AllUnits);

	for (AActor* Actor : AllUnits)
	{
		AAutoChessUnitBase* Unit = Cast<AAutoChessUnitBase>(Actor);
		if (Unit && Unit->TeamID == this->TeamID && Unit->GetAbilitySystemComponent())
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);
			
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GEClass, 1.0f, EffectContext);
			if (SpecHandle.IsValid())
			{
				Unit->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
				UE_LOG(LogTemp, Log, TEXT("[Aura] Applied %s to ally %s"), *GEClass->GetName(), *Unit->GetName());
			}
		}
	}
}

void AAutoChessUnitBase::SpawnProjectileAtTarget(AAutoChessUnitBase* Target, TSubclassOf<AAutoChessProjectile> InProjectileClass, float Damage, bool bIsCrit)
{
	if (!Target || !InProjectileClass || !GetWorld())
	{
		return;
	}

	// 计算生成位置
	FVector SpawnLocation = GetActorLocation() + ProjectileSpawnOffset;
	if (GetMesh()->DoesSocketExist(ProjectileSocketName))
	{
		SpawnLocation = GetMesh()->GetSocketLocation(ProjectileSocketName);
	}

	// 计算朝向
	FRotator SpawnRotation = (Target->GetActorLocation() - SpawnLocation).Rotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;
	SpawnParams.Owner = this;

	AAutoChessProjectile* Projectile = GetWorld()->SpawnActor<AAutoChessProjectile>(InProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
	if (Projectile)
	{
		// 初始化投射物，传入 TeamID
		Projectile->InitProjectile(Target, Damage, this, bIsCrit, TeamID);
	}
}
