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
	bIsMoving = false;
	CurrentGridPos = FIntPoint(0, 0);
	bIsHero = false;

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
	DOREPLIFETIME(AAutoChessUnitBase, bIsHero);
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

			// 尝试从 DataAsset 初始化
			InitFromUnitData();

			// 无论是否从 DataAsset 初始化，都确保 AttributeSet 被正确赋值
			AttributeSet->InitHealth(MaxHealth);
			AttributeSet->InitMaxHealth(MaxHealth);
			AttributeSet->InitMana(InitialMana);
			AttributeSet->InitMaxMana(MaxMana);
			AttributeSet->InitAttackDamage(AttackDamage);
			AttributeSet->InitAttackSpeed(AttackSpeed);

			// 授予技能 (主动) - 仅服务器
			if (HasAuthority() && UnitAbilityClass)
			{
				AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(UnitAbilityClass, 1, 0));
			}

			// 授予技能 (被动) - 仅服务器
			if (HasAuthority() && PassiveAbilityClass)
			{
				FGameplayAbilitySpecHandle PassiveSpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PassiveAbilityClass, 1, 1));
				AbilitySystemComponent->TryActivateAbility(PassiveSpecHandle);
			}

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

	// --- 护盾流失逻辑（优先执行，不受眩晕影响） ---
	if (AttributeSet && AttributeSet->GetShield() > 0.0f && ShieldDecayRate > 0.0f)
	{
		float NewShield = AttributeSet->GetShield() - ShieldDecayRate * DeltaTime;
		AttributeSet->SetShield(FMath::Max(0.0f, NewShield));
		
		// 服务器端也需要更新 Widget（护盾衰减不会触发 OnRep）
		if (HealthBarWidgetComp)
		{
			if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetUserWidgetObject()))
			{
				UnitWidget->UpdateHealth(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth(), AttributeSet->GetShield());
			}
		}
		
		// 如果护盾归零，重置流失速度
		if (NewShield <= 0.0f)
		{
			ShieldDecayRate = 0.0f;
		}
	}

	// 检查眩晕状态
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
				Projectile->InitProjectile(Target, CurrentAttackDamage, this, bIsCrit);
			}
		}
		else
		{
			Target->ReceiveDamage(CurrentAttackDamage, this, bIsCrit);
		}

		Multicast_PlayAttackAnimation();

		if (AttributeSet)
		{
			float CurrentMana = AttributeSet->GetMana();
			float NewMana = FMath::Clamp(CurrentMana + ManaRegenOnAttack, 0.0f, AttributeSet->GetMaxMana());
			AttributeSet->SetMana(NewMana);
			
			if (NewMana >= AttributeSet->GetMaxMana())
			{
				UseSkill();
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

void AAutoChessUnitBase::ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker, bool bIsCrit)
{
	if (bIsDead) return;

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
				OnDeath();
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
					float CurrentMana = AttributeSet->GetMana();
					float NewMana = FMath::Clamp(CurrentMana + ManaRegenOnHit, 0.0f, AttributeSet->GetMaxMana());
					AttributeSet->SetMana(NewMana);

					if (NewMana >= AttributeSet->GetMaxMana())
					{
						UseSkill();
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

    if (UnitDataHandle.IsNull())
    {
        return;
    }

    FAutoChessUnitRow* Row = UnitDataHandle.GetRow<FAutoChessUnitRow>(TEXT("InitFromUnitData"));
    if (Row)
    {
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
        CritRate = Row->CritRate;
        CritDamage = Row->CritDamage;
        SellPrice = Row->SellPrice;
        bIsHero = Row->bIsHero;

        UnitAbilityClass = Row->AbilityClass;
        PassiveAbilityClass = Row->PassiveAbilityClass;
        SkillVFX = Row->SkillVFX;
        SkillNiagaraVFX = Row->SkillNiagaraVFX;
        ProjectileClass = Row->ProjectileClass;

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
