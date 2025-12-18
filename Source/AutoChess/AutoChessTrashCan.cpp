#include "AutoChessTrashCan.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AAutoChessTrashCan::AAutoChessTrashCan()
{
	PrimaryActorTick.bCanEverTick = false;

	// 创建碰撞盒
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
	CollisionBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	RootComponent = CollisionBox;

	// 创建网格体
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAutoChessTrashCan::BeginPlay()
{
	Super::BeginPlay();
}

void AAutoChessTrashCan::SetHighlight_Implementation(bool bHighlight)
{
	// 蓝图中可以实现具体的视觉效果，如改变材质颜色或显示特效
}
