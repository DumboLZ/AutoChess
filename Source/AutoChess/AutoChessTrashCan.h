#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoChessTrashCan.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

/**
 * 垃圾桶 Actor
 * 当玩家将棋子拖拽到此 Actor 上并释放时，棋子将被卖出
 */
UCLASS()
class AUTOCHESS_API AAutoChessTrashCan : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessTrashCan();

protected:
	virtual void BeginPlay() override;

public:	
	// 碰撞组件，用于检测拖拽释放
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* CollisionBox;

	// 视觉组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Mesh;

	// 高亮状态 (当有单位拖拽到上方时)
	UFUNCTION(BlueprintNativeEvent, Category = "AutoChess")
	void SetHighlight(bool bHighlight);
};
