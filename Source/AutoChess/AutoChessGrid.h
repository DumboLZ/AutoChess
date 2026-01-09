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

	// 交互平面高度偏移 (用于射线检测，通常等于 TileHeight 或 0)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals|Adjustments")
	float InteractionHeightOffset;

	// 缩放填充 (0.9 表示留 10% 缝隙)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals|Adjustments")
	float ScalePadding;

	// --- 可视化组件 ---

	// 白色格子 (或类型1)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UInstancedStaticMeshComponent* TileISM_White;

	// 黑色格子 (或类型2)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UInstancedStaticMeshComponent* TileISM_Black;

	// 高亮格子 ISM
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UInstancedStaticMeshComponent* TileISM_Highlight;

	// 格子模型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UStaticMesh* TileMesh;

	// 材质1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialWhite;

	// 材质2
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialBlack;

	// 高亮材质
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialHighlight;

	// 法术高亮材质 - 队伍 0（蓝色）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialSpellHighlight_Team0;

	// 法术高亮材质 - 队伍 1（绿色）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Visuals")
	UMaterialInterface* MaterialSpellHighlight_Team1;

	// 生成棋盘模型
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "AutoChess|Grid")
	void GenerateGrid();

	// 高亮指定格子
	UFUNCTION(BlueprintCallable, Category = "Grid")
	void HighlightTiles(const TArray<FIntPoint>& GridPositions);

	// 清除高亮
	UFUNCTION(BlueprintCallable, Category = "Grid")
	void ClearHighlights();

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

	// 获取指定范围内的所有单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	TArray<class AAutoChessUnitBase*> GetUnitsInRadius(int32 CenterX, int32 CenterY, int32 Radius);

	// 临时占用格子（用于卡牌高亮时防止寻路）
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void SetTileTemporarilyOccupied(FIntPoint GridPos, bool bOccupied);

	// 检查格子是否被临时占用
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	bool IsTileTemporarilyOccupied(FIntPoint GridPos) const;

	// 清除所有临时占用
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Grid")
	void ClearAllTemporaryOccupations();

protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

	// 临时占用的格子集合（用于卡牌高亮时阻止寻路）
	TSet<FIntPoint> TemporarilyOccupiedTiles;

};
