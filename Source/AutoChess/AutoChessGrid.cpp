#include "AutoChessGrid.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "AutoChessGameState.h"
#include "Kismet/GameplayStatics.h"

AAutoChessGrid::AAutoChessGrid()
{
	PrimaryActorTick.bCanEverTick = false;
	
	// 默认尺寸 5x8
	GridWidth = 5;
	GridHeight = 8;
	TileSize = 100.0f;
	TileHeight = 20.0f;
	GridOrigin = FVector::ZeroVector;
	
	VisualOffset = FVector::ZeroVector;
	ScalePadding = 1.0f;

	// 创建根组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// 创建 ISM 组件
	TileISM_White = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TileISM_White"));
	TileISM_White->SetupAttachment(RootComponent);
	// 禁用物理模拟，防止抖动
	TileISM_White->SetSimulatePhysics(false);
	// 设置碰撞预设：只检测查询（用于点击），不进行物理碰撞
	TileISM_White->SetCollisionProfileName(TEXT("NoCollision")); 
	TileISM_White->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TileISM_White->SetCollisionResponseToAllChannels(ECR_Ignore);
	TileISM_White->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block); // 响应鼠标点击

	TileISM_Black = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TileISM_Black"));
	TileISM_Black->SetupAttachment(RootComponent);
	TileISM_Black->SetSimulatePhysics(false);
	TileISM_Black->SetCollisionProfileName(TEXT("NoCollision"));
	TileISM_Black->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TileISM_Black->SetCollisionResponseToAllChannels(ECR_Ignore);
	TileISM_Black->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	TileISM_Highlight = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TileISM_Highlight"));
	TileISM_Highlight->SetupAttachment(RootComponent);
	TileISM_Highlight->SetSimulatePhysics(false);
	TileISM_Highlight->SetCollisionProfileName(TEXT("NoCollision"));
	TileISM_Highlight->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}



void AAutoChessGrid::HighlightTiles(const TArray<FIntPoint>& GridPositions)
{
	TileISM_Highlight->ClearInstances();

	if (MaterialHighlight)
	{
		TileISM_Highlight->SetMaterial(0, MaterialHighlight);
	}

	if (!TileMesh) return;

	// 计算缩放 (复用 GenerateGrid 的逻辑)
	FVector InstanceScale(1.0f, 1.0f, 1.0f);
	float ZOffset = 0.0f;
	FBoxSphereBounds Bounds = TileMesh->GetBounds();
	FVector BoxSize = Bounds.BoxExtent * 2.0f;
	if (BoxSize.X > 0.0f) InstanceScale.X = (TileSize / BoxSize.X) * ScalePadding;
	if (BoxSize.Y > 0.0f) InstanceScale.Y = (TileSize / BoxSize.Y) * ScalePadding;
	if (BoxSize.Z > 0.0f) InstanceScale.Z = (TileHeight / BoxSize.Z);
	ZOffset = TileHeight * 0.5f;

	// 稍微抬高一点，避免 Z-Fighting，或者作为覆盖层
	ZOffset += 1.0f; 

	for (const FIntPoint& Pos : GridPositions)
	{
		if (IsValidGridPosition(Pos.X, Pos.Y))
		{
			float XPos = (Pos.X * TileSize) + (TileSize * 0.5f);
			float YPos = (Pos.Y * TileSize) + (TileSize * 0.5f);
			FVector Location(XPos, YPos, ZOffset);
			Location += VisualOffset;

			FTransform InstanceTransform(FRotator::ZeroRotator, Location, InstanceScale);
			TileISM_Highlight->AddInstance(InstanceTransform);
		}
	}
}

void AAutoChessGrid::ClearHighlights()
{
	TileISM_Highlight->ClearInstances();
}

void AAutoChessGrid::BeginPlay()
{
	Super::BeginPlay();
	GridOrigin = GetActorLocation();

	// 注册自己到 GameState
	if (AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState()))
	{
		GS->GameGrid = this;
	}
}

void AAutoChessGrid::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	GenerateGrid();
}

void AAutoChessGrid::GenerateGrid()
{
	// 清除旧实例
	TileISM_White->ClearInstances();
	TileISM_Black->ClearInstances();

	// 设置模型和材质
	if (TileMesh)
	{
		TileISM_White->SetStaticMesh(TileMesh);
		TileISM_Black->SetStaticMesh(TileMesh);
	}

	if (MaterialWhite) TileISM_White->SetMaterial(0, MaterialWhite);
	if (MaterialBlack) TileISM_Black->SetMaterial(0, MaterialBlack);

	// 计算缩放比例
	FVector InstanceScale(1.0f, 1.0f, 1.0f);
	float ZOffset = 0.0f;

	if (TileMesh)
	{
		FBoxSphereBounds Bounds = TileMesh->GetBounds();
		FVector BoxSize = Bounds.BoxExtent * 2.0f;
		
		// 自动计算缩放
		if (BoxSize.X > 0.0f) InstanceScale.X = (TileSize / BoxSize.X) * ScalePadding;
		if (BoxSize.Y > 0.0f) InstanceScale.Y = (TileSize / BoxSize.Y) * ScalePadding;
		if (BoxSize.Z > 0.0f) InstanceScale.Z = (TileHeight / BoxSize.Z);

		// 假设 Pivot 在中心，我们需要向上偏移一半高度，使其底部贴地
		// 如果 Pivot 已经在底部，这个偏移可能会导致悬空，所以提供了 VisualOffset 供用户手动修正
		ZOffset = TileHeight * 0.5f;
	}

	// 生成网格
	for (int32 x = 0; x < GridWidth; x++)
	{
		for (int32 y = 0; y < GridHeight; y++)
		{
			float XPos = (x * TileSize) + (TileSize * 0.5f);
			float YPos = (y * TileSize) + (TileSize * 0.5f);
			
			// 应用自动 Z 偏移和手动 VisualOffset
			FVector Location(XPos, YPos, ZOffset);
			Location += VisualOffset;

			FTransform InstanceTransform(FRotator::ZeroRotator, Location, InstanceScale);

			if ((x + y) % 2 == 0)
			{
				TileISM_White->AddInstance(InstanceTransform);
			}
			else
			{
				TileISM_Black->AddInstance(InstanceTransform);
			}
		}
	}
}

bool AAutoChessGrid::WorldToGrid(FVector WorldLocation, int32& OutGridX, int32& OutGridY)
{
	FVector LocalPos = WorldLocation - GetActorLocation();
	
	OutGridX = FMath::FloorToInt(LocalPos.X / TileSize);
	OutGridY = FMath::FloorToInt(LocalPos.Y / TileSize);

	return IsValidGridPosition(OutGridX, OutGridY);
}

FVector AAutoChessGrid::GridToWorld(int32 GridX, int32 GridY)
{
	float X = (GridX * TileSize) + (TileSize * 0.5f);
	float Y = (GridY * TileSize) + (TileSize * 0.5f);
	return GetActorLocation() + FVector(X, Y, 0.0f);
}

bool AAutoChessGrid::IsValidGridPosition(int32 GridX, int32 GridY)
{
	return GridX >= 0 && GridX < GridWidth && GridY >= 0 && GridY < GridHeight;
}

// A* 节点结构
struct FGridNode
{
	FIntPoint Pos;
	int32 G; // Cost from start
	int32 H; // Heuristic to end
	FIntPoint Parent;

	int32 F() const { return G + H; }

	bool operator==(const FGridNode& Other) const
	{
		return Pos == Other.Pos;
	}
};

bool AAutoChessGrid::FindPath(FIntPoint StartGridPos, FIntPoint EndGridPos, TArray<FIntPoint>& OutPathPoints)
{
	OutPathPoints.Empty();

	if (!IsValidGridPosition(StartGridPos.X, StartGridPos.Y) || !IsValidGridPosition(EndGridPos.X, EndGridPos.Y))
	{
		return false;
	}

	if (StartGridPos == EndGridPos)
	{
		return true;
	}

	// 获取 GameState 以检查障碍物
	AAutoChessGameState* GS = Cast<AAutoChessGameState>(GetWorld()->GetGameState());

	// Open List, Closed List, Parent Map
	TArray<FGridNode> OpenList;
	TSet<FIntPoint> ClosedSet;
	TMap<FIntPoint, FIntPoint> ParentMap;

	// Start Node
	FGridNode StartNode;
	StartNode.Pos = StartGridPos;
	StartNode.G = 0;
	// Scale H by 10
	StartNode.H = (FMath::Abs(EndGridPos.X - StartGridPos.X) + FMath::Abs(EndGridPos.Y - StartGridPos.Y)) * 10;
	StartNode.Parent = FIntPoint(-1, -1);

	OpenList.Add(StartNode);
	ParentMap.Add(StartGridPos, FIntPoint(-1, -1));

	bool bFound = false;

	// 4个方向
	const FIntPoint Directions[] = { FIntPoint(0, 1), FIntPoint(0, -1), FIntPoint(1, 0), FIntPoint(-1, 0) };

	while (OpenList.Num() > 0)
	{
		// Find node with lowest F
		int32 LowestIndex = 0;
		for (int32 i = 1; i < OpenList.Num(); i++)
		{
			// Tie-breaker: prefer lower H if F is equal
			if (OpenList[i].F() < OpenList[LowestIndex].F() || (OpenList[i].F() == OpenList[LowestIndex].F() && OpenList[i].H < OpenList[LowestIndex].H))
			{
				LowestIndex = i;
			}
		}

		FGridNode CurrentNode = OpenList[LowestIndex];
		OpenList.RemoveAt(LowestIndex);
		ClosedSet.Add(CurrentNode.Pos);

		// Found target
		if (CurrentNode.Pos == EndGridPos)
		{
			bFound = true;
			break;
		}

		// Neighbors
		for (const FIntPoint& Dir : Directions)
		{
			FIntPoint NeighborPos = CurrentNode.Pos + Dir;

			if (IsValidGridPosition(NeighborPos.X, NeighborPos.Y) && !ClosedSet.Contains(NeighborPos))
			{
				// Check Obstacle
				bool bIsBlocked = false;
				if (GS && NeighborPos != EndGridPos)
				{
					if (GS->IsGridOccupied(NeighborPos.X, NeighborPos.Y))
					{
						bIsBlocked = true;
					}
				}

				if (bIsBlocked) continue;

				// Cost is 10 per step
				int32 NewG = CurrentNode.G + 10;
				
				bool bInOpen = false;
				int32 OpenIndex = -1;
				for (int32 i = 0; i < OpenList.Num(); i++)
				{
					if (OpenList[i].Pos == NeighborPos)
					{
						bInOpen = true;
						OpenIndex = i;
						break;
					}
				}

				// Calculate H with Cross Product Tie-Breaker
				int32 dx1 = NeighborPos.X - EndGridPos.X;
				int32 dy1 = NeighborPos.Y - EndGridPos.Y;
				int32 dx2 = StartGridPos.X - EndGridPos.X;
				int32 dy2 = StartGridPos.Y - EndGridPos.Y;
				int32 Cross = FMath::Abs(dx1 * dy2 - dx2 * dy1);
				
				int32 NewH = (FMath::Abs(EndGridPos.X - NeighborPos.X) + FMath::Abs(EndGridPos.Y - NeighborPos.Y)) * 10;
				NewH += Cross; // Add cross product penalty

				if (!bInOpen)
				{
					FGridNode NeighborNode;
					NeighborNode.Pos = NeighborPos;
					NeighborNode.G = NewG;
					NeighborNode.H = NewH;
					OpenList.Add(NeighborNode);
					ParentMap.Add(NeighborPos, CurrentNode.Pos);
				}
				else if (NewG < OpenList[OpenIndex].G)
				{
					OpenList[OpenIndex].G = NewG;
					OpenList[OpenIndex].H = NewH;
					ParentMap.Add(NeighborPos, CurrentNode.Pos);
				}
			}
		}
	}

	if (bFound)
	{
		FIntPoint Current = EndGridPos;
		while (Current != FIntPoint(-1, -1))
		{
			OutPathPoints.Insert(Current, 0);
			if (ParentMap.Contains(Current))
			{
				Current = ParentMap[Current];
			}
			else
			{
				break; // Should not happen
			}
		}
		if (OutPathPoints.Num() > 0 && OutPathPoints[0] == StartGridPos)
		{
			OutPathPoints.RemoveAt(0);
		}
		return true;
	}

	return false;
}
