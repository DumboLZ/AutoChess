#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoChessGrid.generated.h"

class UInstancedStaticMeshComponent;

/**
 * 自动走棋棋盘管理器
 * 负责网格坐标转换、棋子放置位置计算、以及棋盘可视化
 */
UCLASS()
class AUTOCHESS_API AAutoChessGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	AAutoChessGrid();

	// 棋盘宽度 (格子数)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Grid")
	int32 GridWidth;

	// 棋盘高度 (格子数)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Grid")
	int32 GridHeight;

	// 单个格子大小 (Unreal Units)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Grid")
	float TileSize;

	// 格子高度 (Z轴缩放控制)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Grid")
	float TileHeight;

	// 棋盘原点偏移
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Grid")
	FVector GridOrigin;

	// --- 可视化调整 ---

	// 手动位置偏移 (用于微调对齐)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals|Adjustments")
	FVector VisualOffset;

	// 缩放补偿 (默认1.0，如果还有缝隙可以设为1.01)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals|Adjustments")
	float ScalePadding;

	// --- 可视化组件 ---

	// 白色格子 (或类型1)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UInstancedStaticMeshComponent* TileISM_White;

	// 黑色格子 (或类型2)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UInstancedStaticMeshComponent* TileISM_Black;

	// 格子模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UStaticMesh* TileMesh;

	// 材质1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialWhite;

	// 材质2
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialBlack;

	// 生成棋盘模型
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "AutoChess|Grid")
	void GenerateGrid();

	// --- 核心逻辑 ---

	// 将世界坐标转换为网格坐标 (X, Y)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool WorldToGrid(FVector WorldLocation, int32& OutGridX, int32& OutGridY);

	// 将网格坐标转换为世界坐标 (中心点)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	FVector GridToWorld(int32 GridX, int32 GridY);

	// 检查网格坐标是否有效
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool IsValidGridPosition(int32 GridX, int32 GridY);

	// 寻找路径 (BFS)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Pathfinding")
	bool FindPath(FIntPoint StartGridPos, FIntPoint EndGridPos, TArray<FIntPoint>& OutPathPoints);

protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

};
