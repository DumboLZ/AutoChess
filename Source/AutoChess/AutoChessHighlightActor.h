#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoChessHighlightActor.generated.h"

class UInstancedStaticMeshComponent;
class AAutoChessGrid;

/**
 * 玩家专属的高亮管理器
 * 使用 bOnlyOwnerSee 确保只有拥有者(玩家)能看到高亮
 */
UCLASS()
class AUTOCHESS_API AAutoChessHighlightActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessHighlightActor();

	// 高亮 ISM 组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
	UInstancedStaticMeshComponent* HighlightISM;

	// 初始化 (设置模型和材质)
	void InitVisuals(UStaticMesh* Mesh, UMaterialInterface* Material);

	// 更新高亮
	void UpdateHighlights(AAutoChessGrid* Grid, const TArray<FIntPoint>& GridPositions);

protected:
	virtual void BeginPlay() override;

};
