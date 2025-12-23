#include "AutoChessCardBase.h"
#include "AutoChessCardData.h"
#include "AutoChessPlayerController.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGrid.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
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
		// 如果没有配置 GA，检查是否是召唤卡牌
		if (!UnitRowName.IsNone())
		{
			// 纯召唤卡：先展示，然后延迟召唤
			if (AutoChessController && LastTargetGridPos.X != -1 && LastTargetGridPos.Y != -1)
			{
				// 1. 广播卡牌展示事件到所有客户端
				if (AAutoChessGameModeBase* GameMode = Cast<AAutoChessGameModeBase>(AutoChessController->GetWorld()->GetAuthGameMode()))
				{
					GameMode->BroadcastCardDisplay(this, nullptr, LastTargetGridPos, Controller);
				}

				// 1.5 计算 AOE 范围内的所有有效格子
				TArray<FIntPoint> TargetTiles;
				if (AAutoChessGameState* GS = AutoChessController->GetWorld()->GetGameState<AAutoChessGameState>())
				{
					for (int32 x = LastTargetGridPos.X - AOERadius; x <= LastTargetGridPos.X + AOERadius; x++)
					{
						for (int32 y = LastTargetGridPos.Y - AOERadius; y <= LastTargetGridPos.Y + AOERadius; y++)
						{
							if (GS->GameGrid && GS->GameGrid->IsValidGridPosition(x, y))
							{
								FIntPoint Tile(x, y);
								TargetTiles.Add(Tile);
								
								// 预留目标格子，防止其他单位寻路进入
								GS->ReserveTile(Tile, DisplayDuration);
							}
						}
					}
					UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Reserved %d tiles for AOE summon (Radius: %d)"), 
						TargetTiles.Num(), AOERadius);
				}

				// 2. 延迟召唤
				FTimerHandle SummonTimerHandle;
				
				auto SummonLambda = [AutoChessController, this, TargetTiles]() mutable
				{
					if (AutoChessController && IsValid(AutoChessController))
					{
						int32 SummonCount = 0;
						AAutoChessGameState* GS = AutoChessController->GetWorld()->GetGameState<AAutoChessGameState>();
						
						for (const FIntPoint& Tile : TargetTiles)
						{
							// 检查格子是否已被占用 (排除预留，因为预留就是为了这次召唤)
							// 注意：IsGridOccupied 内部会检查 IsTileReserved
							// 但在这里我们希望即使被预留了也能召唤，只要没有真正的单位
							if (GS && GS->GetUnitAtGrid(Tile.X, Tile.Y) == nullptr)
							{
								AutoChessController->Server_SummonUnit(UnitRowName, Tile.X, Tile.Y);
								SummonCount++;
							}
						}
						
						UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] AOE Summon complete: %d units of %s summoned"), 
							SummonCount, *UnitRowName.ToString());
					}
				};

				if (bSkipDisplay || DisplayDuration <= 0.0f)
				{
					// 立即召唤
					SummonLambda();
				}
				else
				{
					// 延迟召唤
					Controller->GetWorldTimerManager().SetTimer(SummonTimerHandle, SummonLambda, DisplayDuration, false);
					UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] AOE Summon card display started, will summon after %.2f seconds"), DisplayDuration);
				}
			}
			return;
		}
		
		UE_LOG(LogTemp, Error, TEXT("[CardBase::OnPlayed] CardAbilityClass is NULL and no UnitRowName!"));
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
		FIntPoint CapturedTargetPos = LastTargetGridPos; // 捕获当前目标位置
		
		auto ActivateAbilityLambda = [this, ASC, SpecToActivate, EventTag, EventData, AutoChessController, CapturedTargetPos]() mutable
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

			// 确保 EventData 使用捕获的目标位置（如果需要）
			// 注意：如果 GA 内部使用了 LastTargetGridPos，可能还需要在 EventData 中传递
			
			// 注意：最后一个参数必须是引用 (*ASC)
			int32 Count = ASC->TriggerAbilityFromGameplayEvent(SpecToActivate->Handle, ASC->AbilityActorInfo.Get(), EventTag, &EventData, *ASC);
			UE_LOG(LogTemp, Warning, TEXT("[CardBase::OnPlayed] Ability Activated at (%d, %d)! Result Count: %d"), 
				CapturedTargetPos.X, CapturedTargetPos.Y, Count);
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
	DOREPLIFETIME(UAutoChessCardBase, BuyPrice);
	DOREPLIFETIME(UAutoChessCardBase, SellPrice);
	DOREPLIFETIME(UAutoChessCardBase, UnitRowName);
}

void UAutoChessCardBase::InitFromRow(const FAutoChessCardRow& Row)
{
	CardName = Row.CardName;
	CardDescription = Row.CardDescription;
	bConsumeAllMana = Row.bConsumeAllMana;
	Cost = Row.Cost;
	BuyPrice = Row.BuyPrice;
	SellPrice = Row.SellPrice;
	UnitRowName = Row.UnitRow.RowName;
	Icon = Row.Icon;
	Rarity = Row.Rarity;
	CardAbilityClass = Row.CardAbilityClass;
	TargetType = Row.TargetType;
	AOERadius = Row.AOERadius;
	TriggerTag = Row.TriggerTag;
	DisplayDuration = Row.DisplayDuration;
	bSkipDisplay = Row.bSkipDisplay;
}
