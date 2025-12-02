#include "AutoChessHighlightActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "AutoChessGrid.h"

AAutoChessHighlightActor::AAutoChessHighlightActor()
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	HighlightISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HighlightISM"));
	HighlightISM->SetupAttachment(RootComponent);
	HighlightISM->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HighlightISM->SetCastShadow(false);
	
	// 关键：只允许拥有者看到
	HighlightISM->bOnlyOwnerSee = true;
}

void AAutoChessHighlightActor::BeginPlay()
{
	Super::BeginPlay();
}

void AAutoChessHighlightActor::InitVisuals(UStaticMesh* Mesh, UMaterialInterface* Material)
{
	if (HighlightISM)
	{
		HighlightISM->SetStaticMesh(Mesh);
		if (Material)
		{
			HighlightISM->SetMaterial(0, Material);
		}
	}
}

void AAutoChessHighlightActor::UpdateHighlights(AAutoChessGrid* Grid, const TArray<FIntPoint>& GridPositions)
{
	if (!HighlightISM || !Grid) return;

	HighlightISM->ClearInstances();

	if (GridPositions.Num() == 0) return;

	// 从 Grid 获取尺寸参数
	float TileSize = Grid->TileSize;
	float TileHeight = Grid->TileHeight;
	float ScalePadding = Grid->ScalePadding;
	FVector VisualOffset = Grid->VisualOffset;

	// 计算缩放 (复用 Grid 的逻辑)
	FVector InstanceScale(1.0f, 1.0f, 1.0f);
	float ZOffset = 0.0f;
	
	if (UStaticMesh* Mesh = HighlightISM->GetStaticMesh())
	{
		FBoxSphereBounds Bounds = Mesh->GetBounds();
		FVector BoxSize = Bounds.BoxExtent * 2.0f;
		if (BoxSize.X > 0.0f) InstanceScale.X = (TileSize / BoxSize.X) * ScalePadding;
		if (BoxSize.Y > 0.0f) InstanceScale.Y = (TileSize / BoxSize.Y) * ScalePadding;
		if (BoxSize.Z > 0.0f) InstanceScale.Z = (TileHeight / BoxSize.Z);
		ZOffset = TileHeight * 0.5f;
	}

	ZOffset += 1.0f; // 稍微抬高

	// 转换坐标系：Grid 的 Local -> World -> HighlightActor 的 Local
	// 为了简单，我们假设 HighlightActor 放在 (0,0,0) 或者我们直接用 World Transform
	// ISM AddInstance 默认是 Local Transform。
	// 最简单的做法：HighlightActor 跟随 Grid 的位置？或者 HighlightActor 放在世界原点。
	// 让我们把 HighlightActor 放在世界原点，或者每次计算 World Transform。
	
	FTransform ActorTransform = GetActorTransform();

	for (const FIntPoint& Pos : GridPositions)
	{
		if (Grid->IsValidGridPosition(Pos.X, Pos.Y))
		{
			FVector WorldPos = Grid->GridToWorld(Pos.X, Pos.Y);
			WorldPos.Z = Grid->GetActorLocation().Z + ZOffset + VisualOffset.Z; // 修正 Z

			// 将 WorldPos 转换为 HighlightActor 的 LocalPos
			FVector LocalPos = ActorTransform.InverseTransformPosition(WorldPos);

			FTransform InstanceTransform(FRotator::ZeroRotator, LocalPos, InstanceScale);
			HighlightISM->AddInstance(InstanceTransform);
		}
	}
}
