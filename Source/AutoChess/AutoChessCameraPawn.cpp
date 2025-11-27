#include "AutoChessCameraPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AAutoChessCameraPawn::AAutoChessCameraPawn()
{
	PrimaryActorTick.bCanEverTick = false;

	// 创建根组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// 创建弹簧臂
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // 独立旋转
	CameraBoom->TargetArmLength = 1200.0f;
	CameraBoom->SetRelativeRotation(FRotator(-50.0f, 0.0f, 0.0f));
	CameraBoom->bDoCollisionTest = false; // 不需要碰撞检测

	// 创建相机
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; 
}

void AAutoChessCameraPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AAutoChessCameraPawn::SetupCameraForPlayer(int32 PlayerIndex)
{
	// 棋盘中心计算：
	// GridWidth = 5, TileSize = 100 -> X中心 = 250
	// GridHeight = 8, TileSize = 100 -> Y中心 = 400
	FVector GridCenter(250.0f, 400.0f, 0.0f);

	if (PlayerIndex == 0)
	{
		// 玩家1：看向 Y 正方向 (Yaw = 90)
		SetActorLocation(GridCenter); 
		CameraBoom->SetRelativeRotation(FRotator(-50.0f, 90.0f, 0.0f));
	}
	else
	{
		// 玩家2：看向 Y 负方向 (Yaw = -90)
		SetActorLocation(GridCenter);
		CameraBoom->SetRelativeRotation(FRotator(-50.0f, -90.0f, 0.0f));
	}
}
