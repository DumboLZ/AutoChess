#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoChessGhost.generated.h"

/**
 * 拖拽时的幽灵显示 Actor
 * 仅在客户端生成，用于显示拖拽过程中的模型
 */
UCLASS()
class AUTOCHESS_API AAutoChessGhost : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessGhost();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual")
	class USkeletalMeshComponent* Mesh;

	// 设置外观
	void InitVisuals(USkeletalMesh* InMesh, UMaterialInterface* InMaterial);
};
