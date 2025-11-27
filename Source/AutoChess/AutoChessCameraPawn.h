#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AutoChessCameraPawn.generated.h"

UCLASS()
class AUTOCHESS_API AAutoChessCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	AAutoChessCameraPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

	// 设置相机视角 (0: 玩家1视角, 1: 玩家2视角)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Camera")
	void SetupCameraForPlayer(int32 PlayerIndex);

protected:
	virtual void BeginPlay() override;
};
