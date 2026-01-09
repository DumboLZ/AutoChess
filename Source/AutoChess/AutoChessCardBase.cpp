#include "AutoChessCardBase.h"
#include "AutoChessPlayerController.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "AutoChessProjectile.h"
#include "AutoChessUnitBase.h"
#include "Net/UnrealNetwork.h"

UAutoChessCardBase::UAutoChessCardBase()
{
	CardName = FText::FromString(TEXT("新卡牌"));
	Cost = 0;
	Rarity = 1;
	TargetType = EAutoChessCardTargetType::None;
	AOERadius = 0;
	DisplayDuration = 1.0f;
	bSkipDisplay = false;
	CostModifier = 0;
}

int32 UAutoChessCardBase::GetFinalCost() const
{
	return FMath::Max(0, Cost + CostModifier);
}

void UAutoChessCardBase::ModifyCost(int32 Amount)
{
	if (GetWorld() && GetWorld()->GetNetMode() != NM_Client)
	{
		CostModifier += Amount;
		OnCostChanged.Broadcast(GetFinalCost());
	}
}

void UAutoChessCardBase::OnRep_Cost()
{
	OnCostChanged.Broadcast(GetFinalCost());
}

void UAutoChessCardBase::OnRep_CostModifier()
{
	OnCostChanged.Broadcast(GetFinalCost());
}

void UAutoChessCardBase::OnPlayed_Implementation(APlayerController* Controller, AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Card: %s, Target: %s"), 
		*CardName.ToString(), 
		Target ? *Target->GetName() : TEXT("NULL"));

	// 尝试激活 GAS 技能
	AAutoChessPlayerController* AutoChessController = Cast<AAutoChessPlayerController>(Controller);
	if (!AutoChessController)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] Controller is not AutoChessPlayerController!"));
		return;
	}

	if (!CardAbilityClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] CardAbilityClass is NULL!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] CardAbilityClass: %s"), *CardAbilityClass->GetName());

	// 获取玩家的 ASC
	UAbilitySystemComponent* ASC = AutoChessController->GetAbilitySystemComponent();
	if (!ASC)
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] AbilitySystemComponent is NULL!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Got ASC, preparing to activate ability..."));

	// 构建事件数据，把目标传进去
	FGameplayEventData EventData;
	EventData.Instigator = Controller;
	EventData.Target = Target;
	EventData.OptionalObject = this; // 传递当前卡牌实例，这样蓝图可以拿到最新的 HighlightedTiles
	
	// 定义一个通用的 Tag，例如 "Card.Played"
	FGameplayTag EventTag = TriggerTag;
	if (!EventTag.IsValid())
	{
		EventTag = FGameplayTag::RequestGameplayTag(FName("Card.Played"));
	}
	EventData.EventTag = EventTag;

	UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Event Tag: %s, HighlightedTiles Count: %d"), 
		*EventTag.ToString(), HighlightedTiles.Num());

	// 检查是否已经拥有该技能
	FGameplayAbilitySpec* ExistingSpec = ASC->FindAbilitySpecFromClass(CardAbilityClass);
	
	if (!ExistingSpec)
	{
		// 如果没有，才给予
		FGameplayAbilitySpec Spec(CardAbilityClass, 1, -1, this);
		ASC->GiveAbility(Spec);
		UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability given to Player."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Player already has this ability. Skipping GiveAbility."));
	}

	// 重新获取 Spec (因为 GiveAbility 可能刚添加)
	// 重新获取 Spec (因为 GiveAbility 可能刚添加)
	FGameplayAbilitySpec* SpecToActivate = ASC->FindAbilitySpecFromClass(CardAbilityClass);
	if (SpecToActivate)
	{
		// 广播卡牌展示事件到所有客户端
		if (AutoChessController)
		{
			// 通过 GameMode 广播到所有玩家
			if (AAutoChessGameModeBase* GameMode = Cast<AAutoChessGameModeBase>(AutoChessController->GetWorld()->GetAuthGameMode()))
			{
				GameMode->BroadcastCardDisplay(this, Target, LastTargetGridPos, Controller);
			}
		}

		// 定义激活逻辑 Lambda
		auto ActivateAbilityLambda = [this, ASC, SpecToActivate, EventTag, EventData, AutoChessController]() mutable
		{
			// 安全检查：延迟执行时对象可能已失效
			if (!ASC || !IsValid(ASC))
			{
				UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] ASC is invalid at delayed activation!"));
				return;
			}
			
			if (!SpecToActivate)
			{
				UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] SpecToActivate is invalid at delayed activation!"));
				return;
			}
			
			// 注意：最后一个参数必须是引用 (*ASC)
			int32 Count = ASC->TriggerAbilityFromGameplayEvent(SpecToActivate->Handle, ASC->AbilityActorInfo.Get(), EventTag, &EventData, *ASC);
			UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability Activated! Result Count: %d"), Count);
			
			// 清除全局高亮
			if (AutoChessController && IsValid(AutoChessController))
			{
				if (UWorld* World = AutoChessController->GetWorld())
				{
					if (AAutoChessGameState* GS = World->GetGameState<AAutoChessGameState>())
					{
						// 获取施法者的 TeamID
						int32 TeamID = 0;
						if (AAutoChessPlayerController* CasterPC = Cast<AAutoChessPlayerController>(AutoChessController))
						{
							TeamID = CasterPC->TeamID;
						}
						
						// 使用多播清除对应队伍的高亮
						GS->Multicast_HideSpellHighlight(TeamID);
					}
				}
			}
		};

		if (bSkipDisplay || DisplayDuration <= 0.0f)
		{
			// 立即激活
			ActivateAbilityLambda();
		}
		else
		{
			// 延迟激活
			FTimerHandle TimerHandle;
			Controller->GetWorldTimerManager().SetTimer(TimerHandle, ActivateAbilityLambda, DisplayDuration, false);
			UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability activation delayed by %.2f seconds."), DisplayDuration);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] Failed to find Ability Spec after GiveAbility!"));
	}
}

void UAutoChessCardBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAutoChessCardBase, CardName);
	DOREPLIFETIME(UAutoChessCardBase, CardDescription);
	DOREPLIFETIME(UAutoChessCardBase, Cost);
	DOREPLIFETIME(UAutoChessCardBase, CostModifier);
	DOREPLIFETIME(UAutoChessCardBase, Icon);
}

void UAutoChessCardBase::SpawnProjectileFromSide(AActor* Target, TSubclassOf<AAutoChessProjectile> ProjectileClass, float Damage, int32 CasterTeamID, const TArray<FProjectileEffectInfo>& EffectsOnHitEnemy, const TArray<FProjectileEffectInfo>& EffectsOnHitFriendly, float SideOffsetDistance)
{
	if (!Target || !ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CardBase] SpawnProjectileFromSide Failed: Invalid Target or Class"));
		return;
	}

	UWorld* World = Target->GetWorld();
	if (!World)
	{
		return;
	}

	AAutoChessUnitBase* TargetUnit = Cast<AAutoChessUnitBase>(Target);
	if (!TargetUnit)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CardBase] SpawnProjectileFromSide Failed: Target is not a Unit"));
		return;
	}

	// 计算生成位置
	FVector TargetLoc = Target->GetActorLocation();
	
	// 根据队伍ID决定方向：Team 0 在 Y 负侧 (-1)，Team 1 在 Y 正侧 (1)
	float SideDir = (CasterTeamID == 0) ? -1.0f : 1.0f;
	
	// 偏移位置：Y轴偏移 (Z轴保持一致，与目标等高)
	FVector SpawnOffset(0.0f, SideDir * SideOffsetDistance, 0.0f);
	FVector SpawnLocation = TargetLoc + SpawnOffset;
	
	// 强制 X 坐标为 250 (棋盘中心)
	SpawnLocation.X = 250.0f;

	// 朝向目标
	FRotator SpawnRotation = (TargetLoc - SpawnLocation).Rotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AAutoChessProjectile* Projectile = World->SpawnActor<AAutoChessProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
	if (Projectile)
	{
		// Instigator 设为 nullptr，因为是卡牌效果
		Projectile->InitProjectile(TargetUnit, Damage, nullptr, false, CasterTeamID, EffectsOnHitEnemy, EffectsOnHitFriendly);
		UE_LOG(LogTemp, Log, TEXT("[CardBase] Spawned Projectile %s targeting %s"), *Projectile->GetName(), *TargetUnit->GetName());
	}
}

AAutoChessUnitBase* UAutoChessCardBase::SpawnUnitFromRowName(UObject* WorldContextObject, FName UnitRowName, FIntPoint GridPos, int32 TeamID)
{
	if (!WorldContextObject) return nullptr;

	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return nullptr;

	if (AAutoChessGameModeBase* GM = Cast<AAutoChessGameModeBase>(World->GetAuthGameMode()))
	{
		return GM->SpawnUnit(UnitRowName, TeamID, GridPos);
	}

	return nullptr;
}

void UAutoChessCardBase::CastRandomCardsOnTarget(UObject* WorldContextObject, AActor* Target, int32 CardCount, const TArray<FWeightedCardEntry>& CardPool, int32 CasterTeamID)
{
	if (!WorldContextObject || !Target || CardCount <= 0 || CardPool.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Invalid parameters"));
		return;
	}

	UWorld* World = WorldContextObject->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Invalid World"));
		return;
	}

	// 计算总权重
	float TotalWeight = 0.0f;
	for (const FWeightedCardEntry& Entry : CardPool)
	{
		TotalWeight += Entry.Weight;
	}

	if (TotalWeight <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Total weight is 0"));
		return;
	}

	// 获取 PlayerController（用于执行卡牌）
	AAutoChessPlayerController* CasterPC = nullptr;
	for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		if (AAutoChessPlayerController* PC = Cast<AAutoChessPlayerController>(Iterator->Get()))
		{
			if (PC->TeamID == CasterTeamID)
			{
				CasterPC = PC;
				break;
			}
		}
	}

	if (!CasterPC)
	{
		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Could not find PlayerController for Team %d"), CasterTeamID);
		return;
	}

	// 获取目标的格子坐标（如果目标是单位）
	FIntPoint TargetGridPos(-1, -1);
	if (AAutoChessUnitBase* TargetUnit = Cast<AAutoChessUnitBase>(Target))
	{
		TargetGridPos = TargetUnit->CurrentGridPos;
	}

	// 随机抽取并打出卡牌
	for (int32 i = 0; i < CardCount; i++)
	{
		// 权重随机选择
		float RandomValue = FMath::FRandRange(0.0f, TotalWeight);
		float CurrentWeight = 0.0f;
		TSubclassOf<UAutoChessCardBase> SelectedCardClass = nullptr;

		for (const FWeightedCardEntry& Entry : CardPool)
		{
			CurrentWeight += Entry.Weight;
			if (RandomValue <= CurrentWeight && Entry.CardClass)
			{
				SelectedCardClass = Entry.CardClass;
				break;
			}
		}

		if (!SelectedCardClass)
		{
			UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Failed to select card %d/%d"), i + 1, CardCount);
			continue;
		}

		// 创建卡牌实例
		UAutoChessCardBase* CardInstance = NewObject<UAutoChessCardBase>(CasterPC, SelectedCardClass);
		if (!CardInstance)
		{
			UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Failed to create card instance"));
			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Created card: %s (Cost: %d, TargetType: %d)"), 
			*CardInstance->CardName.ToString(), CardInstance->Cost, (int32)CardInstance->TargetType);

		// 临时添加到手牌（PlayCard 需要卡牌在手牌中）
		CasterPC->HandCards.Add(CardInstance);
		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Added to hand, HandCards count: %d"), CasterPC->HandCards.Num());

		// 通过 PlayerController 的 PlayCard 函数打出卡牌
		bool bSuccess = CasterPC->PlayCard(CardInstance, Target, TargetGridPos);

		UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] PlayCard result: %s"), bSuccess ? TEXT("SUCCESS") : TEXT("FAILED"));

		// 如果打出失败，从手牌中移除
		if (!bSuccess)
		{
			CasterPC->HandCards.Remove(CardInstance);
			UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Failed to play card %d/%d: %s"), 
				i + 1, CardCount, *SelectedCardClass->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[CastRandomCards] Successfully cast card %d/%d: %s on %s"), 
				i + 1, CardCount, *SelectedCardClass->GetName(), *Target->GetName());
		}
	}
}
