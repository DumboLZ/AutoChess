#include "AutoChessUnitBase.h"
#include "AutoChessGameState.h"
#include "AutoChessGameModeBase.h"
#include "AutoChessGrid.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"

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
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
}

void AAutoChessUnitBase::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;
	Mana = 0.0f;

	// 注册到 GameState
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->RegisterUnit(this);
	}

	// 初始化位置对齐
	SnapToGrid();
}

void AAutoChessUnitBase::SnapToGrid()
{
	// 优化：从 GameState 获取 Grid，避免每帧遍历 Actor
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		if (AAutoChessGrid* Grid = GS->GameGrid)
		{
			int32 X, Y;
			if (Grid->WorldToGrid(GetActorLocation(), X, Y))
			{
				CurrentGridPos = FIntPoint(X, Y);
				// 强制对齐中心
				FVector NewLoc = Grid->GridToWorld(X, Y);
				// 保持当前的 Z 高度 (或者根据 Grid 高度调整)
				NewLoc.Z = GetActorLocation().Z; 
				SetActorLocation(NewLoc);
			}
			else
			{
				// 如果不在棋盘上，可以销毁或者打印警告
				// UE_LOG(LogTemp, Warning, TEXT("Unit %s is not on the grid!"), *GetName());
			}
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
		Target->ReceiveDamage(AttackDamage, this);
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
	Health -= DamageAmount;
	if (Health <= 0.0f)
	{
		OnDeath();
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
