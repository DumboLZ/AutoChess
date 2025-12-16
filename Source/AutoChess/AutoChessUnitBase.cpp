#include "AutoChessUnitBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGrid.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "AutoChessUnitWidget.h"
#include "AutoChessUnitWidget.h"
#include "AutoChessProjectile.h"
#include "AutoChessUnitData.h"
#include "Net/UnrealNetwork.h"

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
	DOREPLIFETIME(AAutoChessUnitBase, bIsMoving);
	DOREPLIFETIME(AAutoChessUnitBase, CurrentTarget);
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
			
			// 初始更新 UI（传入正确的初始值）
			FOnAttributeChangeData HealthData;
			HealthData.NewValue = AttributeSet->GetHealth();
			OnHealthChanged(HealthData);
			
			FOnAttributeChangeData ManaData;
			ManaData.NewValue = AttributeSet->GetMana();
			OnManaChanged(ManaData);
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
				
				// 立即更新一次显示
				if (AttributeSet)
				{
					UnitWidget->UpdateHealth(AttributeSet->GetHealth(), AttributeSet->GetMaxHealth(), AttributeSet->GetShield());
					UnitWidget->UpdateMana(AttributeSet->GetMana(), AttributeSet->GetMaxMana());
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
			}
		}
	}
	SnapToGrid();
}

void AAutoChessUnitBase::OnHealthChanged(const FOnAttributeChangeData& Data)
{
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
	// 优先使用 GameState (Client & Server 均可用)
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		// 需要在 GameState 中暴露 CurrentPhase (已在 GameState.h 中添加 CurrentPhaseIndex)
		// 暂时假设 CurrentPhaseIndex 1 是 Battle (根据 Enum 定义: Preparation=0, Battle=1)
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
	// 这样可以防止普攻打断技能，同时允许普攻打断普攻（高攻速时）
	if (GetMesh() && GetMesh()->GetAnimInstance())
	{
		UAnimInstance* AnimInst = GetMesh()->GetAnimInstance();
		if (AnimInst->IsAnyMontagePlaying())
		{
			// 如果当前播放的不是普攻蒙太奇，那就肯定是技能或受击，必须暂停
			if (!AttackMontage || !AnimInst->Montage_IsPlaying(AttackMontage))
			{
				return;
			}
		}
	}

	// 简单的自动攻击逻辑 (仅在有目标时)
	if (IsValid(CurrentTarget))
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

		// 1. 检查是否已经在攻击范围内 (基于圆形范围，忽略 Z 轴)
		float DistToTarget = FVector::Dist2D(GetActorLocation(), CurrentTarget->GetActorLocation());
		
		// 允许微小误差 (例如 10.0f)
		if (DistToTarget <= AttackRadius + 10.0f)
		{
			// 停止移动
			bIsMoving = false;
			CurrentPath.Empty();

			// 攻击冷却
			if (AttackTimer <= 0.0f)
			{
				// 面向目标 (忽略 Z 轴)
				FVector Direction = CurrentTarget->GetActorLocation() - GetActorLocation();
				Direction.Z = 0.0f;
				SetActorRotation(Direction.Rotation());

				AttackTarget(CurrentTarget);
				
				// 从 AttributeSet 获取攻击速度
				float CurrentAttackSpeed = AttackSpeed; // 默认值
				if (AttributeSet)
				{
					CurrentAttackSpeed = AttributeSet->GetAttackSpeed();
				}
				AttackTimer = 1.0f / FMath::Max(0.1f, CurrentAttackSpeed); // 防止除0
			}
		}
		else
		{
			// 2. 预测逻辑：如果目标正在移动，且目标即将到达的位置在我的攻击范围内，则原地等待
			bool bShouldWait = false;
			if (CurrentTarget->bIsMoving)
			{
				// 计算目标终点与我的距离
				if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
				{
					if (GS->GameGrid)
					{
						FVector TargetDestWorld = GS->GameGrid->GridToWorld(CurrentTarget->TargetGridPos.X, CurrentTarget->TargetGridPos.Y);
						// TargetDestWorld.Z = GetActorLocation().Z; // 不再需要强制高度，直接用 Dist2D
						
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
				// 停止移动，面向目标，等待目标走过来
				bIsMoving = false;
				CurrentPath.Empty();
				
				// 面向目标 (忽略 Z 轴)
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
		// 获取当前攻击力（从 AttributeSet）
		float CurrentAttackDamage = AttackDamage; // 默认值
		if (AttributeSet)
		{
			CurrentAttackDamage = AttributeSet->GetAttackDamage();
		}

		if (ProjectileClass)
		{
			// 远程攻击：生成投射物
			FVector SpawnLocation;
			
			// 优先使用骨骼插槽
			if (!ProjectileSocketName.IsNone() && GetMesh() && GetMesh()->DoesSocketExist(ProjectileSocketName))
			{
				SpawnLocation = GetMesh()->GetSocketLocation(ProjectileSocketName);
			}
			else
			{
				// 使用相对偏移
				SpawnLocation = GetActorLocation() + GetActorRotation().RotateVector(ProjectileSpawnOffset);
			}

			// 计算发射方向 (忽略 Z 轴)
			FVector TargetLocFlat = Target->GetActorLocation();
			TargetLocFlat.Z = SpawnLocation.Z;
			FRotator SpawnRotation = (TargetLocFlat - SpawnLocation).Rotation();

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = this;

			AAutoChessProjectile* Projectile = GetWorld()->SpawnActor<AAutoChessProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
			if (Projectile)
			{
				Projectile->InitProjectile(Target, CurrentAttackDamage, this);
			}
		}
		else
		{
			// 近战攻击：直接造成伤害
			Target->ReceiveDamage(CurrentAttackDamage, this);
		}

		// 播放攻击动画
		Multicast_PlayAttackAnimation();

		// 增加法力值 (通过 AttributeSet)
		if (AttributeSet)
		{
			float CurrentMana = AttributeSet->GetMana();
			float NewMana = FMath::Clamp(CurrentMana + ManaRegenOnAttack, 0.0f, AttributeSet->GetMaxMana());
			AttributeSet->SetMana(NewMana);
			
			// 检查是否可以释放技能
			if (NewMana >= AttributeSet->GetMaxMana())
			{
				UseSkill();
			}
		}

		// 发送攻击事件 (用于触发被动技能)
		if (AbilitySystemComponent)
		{
			FGameplayEventData EventData;
			EventData.Instigator = this;
			EventData.Target = Target;
			// EventData.EventTag = FGameplayTag::RequestGameplayTag(FName("AutoChess.Event.Attack")); // 需要在某处定义 Tag，或者直接用 Name
			// 为了简单，我们这里直接发送 Tag，假设 Tag 已经在 Editor 中创建
			// 如果 Tag 不存在，SendGameplayEventToActor 可能会失败，或者我们需要用 FGameplayTag::RequestGameplayTag
			
			// 注意：为了避免硬编码 Tag 导致的查找失败，建议在 DefaultGameplayTags.ini 中配置
			// 这里我们暂时使用 FindTag，如果找不到就不发
			FGameplayTag AttackTag = FGameplayTag::RequestGameplayTag(FName("AutoChess.Event.Attack"), false);
			if (AttackTag.IsValid())
			{
				// 发送给自己的 ASC，触发拥有该 Tag 触发器的 Ability
				AbilitySystemComponent->HandleGameplayEvent(AttackTag, &EventData);
			}
		}
	}
}

void AAutoChessUnitBase::ReceiveDamage(float DamageAmount, AAutoChessUnitBase* Attacker)
{
	// 结算阶段免疫伤害
	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->CurrentPhase == EAutoChessPhase::Settlement) return;
	}

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
			
			float CurrentShield = AttributeSet->GetShield();
			float ActualDamageToHealth = DamageAmount;

			// 优先扣除护盾
			if (CurrentShield > 0.0f)
			{
				if (CurrentShield >= DamageAmount)
				{
					// 护盾完全抵挡
					AttributeSet->SetShield(CurrentShield - DamageAmount);
					ActualDamageToHealth = 0.0f;
					// UE_LOG(LogTemp, Warning, TEXT("[ReceiveDamage] Shield absorbed all damage. Remaining Shield: %.1f"), AttributeSet->GetShield());
				}
				else
				{
					// 护盾抵挡部分
					ActualDamageToHealth = DamageAmount - CurrentShield;
					AttributeSet->SetShield(0.0f);
					// UE_LOG(LogTemp, Warning, TEXT("[ReceiveDamage] Shield absorbed %.1f damage. Remaining Damage: %.1f"), CurrentShield, ActualDamageToHealth);
				}
			}

			if (ActualDamageToHealth > 0.0f)
			{
				float OldHealth = AttributeSet->GetHealth();
				float NewHealth = OldHealth - ActualDamageToHealth;
				AttributeSet->SetHealth(FMath::Max(0.0f, NewHealth));
				
				// UE_LOG(LogTemp, Warning, TEXT("[UnitBase::ReceiveDamage] %s received %.1f damage (Health). Health: %.1f -> %.1f"), 
				// 	*GetName(), ActualDamageToHealth, 
				// 	OldHealth, AttributeSet->GetHealth());
			}
			
			// 手动检查死亡
			if (AttributeSet->GetHealth() <= 0.0f)
			{
				// UE_LOG(LogTemp, Warning, TEXT("[UnitBase::ReceiveDamage] %s health reached 0, triggering OnDeath"), *GetName());
				OnDeath();
			}
			else
			{
				// 受击回蓝
				// 如果正在释放技能（播放技能蒙太奇），则不回蓝
				// 之前的逻辑误判了受击蒙太奇，导致受击也不回蓝
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

					// 检查是否可以释放技能
					if (NewMana >= AttributeSet->GetMaxMana())
					{
						UseSkill();
					}
				}

				// 发送受击事件 (用于触发被动技能)
				// Tag: AutoChess.Event.Hit
				FGameplayEventData EventData;
				EventData.Instigator = Attacker;
				EventData.Target = this;
				EventData.EventMagnitude = ActualDamageToHealth; // 可选：传递伤害值

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
	if (bIsDead) return;
	bIsDead = true;

	// 禁用碰撞
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 从 GameState 注销 (逻辑上移除，但 Actor 还在播放动画)
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->UnregisterUnit(this);
	}

	// 播放死亡蒙太奇
	float DeathAnimDuration = 1.5f; // 默认销毁延迟
	if (DeathMontage)
	{
		// 多播播放死亡动画
		// 注意：这里我们简单地在 Server 播放并依赖 Replication，或者手动 Multicast
		// 由于 Montage_Play 默认只在本地播放，我们需要一个 Multicast 函数
		Multicast_PlayDeathAnimation();
		DeathAnimDuration = DeathMontage->GetPlayLength();
	}

	// 延迟销毁
	SetLifeSpan(DeathAnimDuration + 0.5f);
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

	TArray<AAutoChessUnitBase*> Enemies = GS->GetUnitsByTeam(1 - TeamID); // 假设只有 0 和 1 两个队伍
	
	AAutoChessUnitBase* NearestEnemy = nullptr;
	float MinDistance = FLT_MAX;

	for (AAutoChessUnitBase* Enemy : Enemies)
	{
		if (IsValid(Enemy))
		{
			// 使用世界坐标距离 (欧几里得距离)，与攻击范围逻辑保持一致
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
	// 检查眩晕状态 - 眩晕时无法释放技能
	if (AbilitySystemComponent)
	{
		FGameplayTag StunTag = FGameplayTag::RequestGameplayTag(FName("State.CC.Stunned"), false);
		if (StunTag.IsValid() && AbilitySystemComponent->HasMatchingGameplayTag(StunTag))
		{
			UE_LOG(LogTemp, Warning, TEXT("[UseSkill] %s is stunned, cannot use skill!"), *GetName());
			return;
		}
	}

	// 默认实现：如果有配置 Ability，则激活它
	if (UnitAbilityClass && AbilitySystemComponent)
	{
		// 给予 Ability (如果还没给) - 简化起见，这里假设已经给了或者每次给
		// 更好的做法是在 BeginPlay 给一次
		FGameplayAbilitySpecHandle SpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(UnitAbilityClass, 1, 0));
		
		if (SpecHandle.IsValid())
		{
			if (AbilitySystemComponent->TryActivateAbility(SpecHandle))
			{
				// 技能释放成功，扣除蓝量
				if (AttributeSet)
				{
					AttributeSet->SetMana(0.0f);
				}

				// 播放技能动画
				Multicast_PlaySkillAnimation();

				// 播放特效
				if (SkillVFX)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SkillVFX, GetActorLocation(), GetActorRotation(), true);
				}
			}
		}
	}
	else
	{
		// 如果没有 GAS Ability，则直接播放动画和特效（简单模式）
		if (AttributeSet)
		{
			AttributeSet->SetMana(0.0f);
		}
		Multicast_PlaySkillAnimation();
		UE_LOG(LogTemp, Log, TEXT("[UseSkill] No GAS Ability, playing animation directly."));
	}
}

void AAutoChessUnitBase::InitFromUnitData()
{
	if (!UnitData) return;

	UE_LOG(LogTemp, Warning, TEXT("[UnitBase] Initializing from UnitData: %s"), *UnitData->GetName());

	// 基础属性
	MaxHealth = UnitData->MaxHealth;
	AttackDamage = UnitData->AttackDamage;
	AttackSpeed = UnitData->AttackSpeed;
	AttackRangeGrid = UnitData->AttackRangeGrid;
	MoveSpeed = UnitData->MoveSpeed;

	// 蓝量属性
	MaxMana = UnitData->MaxMana;
	InitialMana = UnitData->InitialMana;
	ManaRegenOnAttack = UnitData->ManaRegenOnAttack;
	ManaRegenOnHit = UnitData->ManaRegenOnHit;

	// 技能与战斗
	UnitAbilityClass = UnitData->AbilityClass;
	PassiveAbilityClass = UnitData->PassiveAbilityClass;
	SkillVFX = UnitData->SkillVFX;
	SkillNiagaraVFX = UnitData->SkillNiagaraVFX;
	ProjectileClass = UnitData->ProjectileClass;

	// 模型与动画 (如果还没设置)
	if (GetMesh())
	{
		if (UnitData->SkeletalMesh && GetMesh()->GetSkeletalMeshAsset() != UnitData->SkeletalMesh)
		{
			GetMesh()->SetSkeletalMesh(UnitData->SkeletalMesh);
		}

		if (UnitData->AnimBlueprint && GetMesh()->GetAnimClass() != UnitData->AnimBlueprint)
		{
			GetMesh()->SetAnimInstanceClass(UnitData->AnimBlueprint);
		}
	}
}



void AAutoChessUnitBase::OnRep_TeamID()
{
	UE_LOG(LogTemp, Error, TEXT("[OnRep_TeamID] Unit=%s, TeamID=%d, HasAuthority=%d"), 
		*GetName(), TeamID, HasAuthority());
	
	// 当 TeamID 复制到客户端时，更新血条颜色
	if (HealthBarWidgetComp)
	{
		if (UAutoChessUnitWidget* UnitWidget = Cast<UAutoChessUnitWidget>(HealthBarWidgetComp->GetWidget()))
		{
			UnitWidget->SetTeamColor(TeamID);
			UE_LOG(LogTemp, Log, TEXT("[OnRep_TeamID] Updated health bar color for Team %d"), TeamID);
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
		UE_LOG(LogTemp, Warning, TEXT("[SpawnSkillProjectile] SkillProjectileClass is NULL!"));
		return;
	}

	// 计算发射位置 (使用插槽或偏移)
	FVector SpawnLocation;
	if (!ProjectileSocketName.IsNone() && GetMesh() && GetMesh()->DoesSocketExist(ProjectileSocketName))
	{
		SpawnLocation = GetMesh()->GetSocketLocation(ProjectileSocketName);
	}
	else
	{
		SpawnLocation = GetActorLocation() + GetActorRotation().RotateVector(ProjectileSpawnOffset);
	}

	// 计算发射方向 (忽略 Z 轴，水平发射)
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
