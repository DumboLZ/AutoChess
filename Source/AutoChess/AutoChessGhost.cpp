#include "AutoChessGhost.h"
#include "Components/SkeletalMeshComponent.h"

AAutoChessGhost::AAutoChessGhost()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = false; // 仅客户端

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 无碰撞
	Mesh->SetCastShadow(false); // 可选：不投射阴影
}

void AAutoChessGhost::InitVisuals(USkeletalMesh* InMesh, UMaterialInterface* InMaterial)
{
	if (Mesh)
	{
		Mesh->SetSkeletalMesh(InMesh);
		if (InMaterial)
		{
			// 覆盖所有材质槽
			int32 NumMaterials = Mesh->GetNumMaterials();
			for (int32 i = 0; i < NumMaterials; i++)
			{
				Mesh->SetMaterial(i, InMaterial);
			}
		}
	}
}
