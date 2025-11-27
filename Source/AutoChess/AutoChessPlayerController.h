#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AutoChessPlayerController.generated.h"

class AAutoChessUnitBase;
class UAutoChessCardBase;

/**
 * 自动走棋玩家控制器
 * 处理玩家输入、卡牌购买、单位放置
 */
UCLASS()
class AUTOCHESS_API AAutoChessPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AAutoChessPlayerController();

	// 当前选中的卡牌类 (准备放置)
	UPROPERTY(BlueprintReadWrite, Category = "AutoChess|Input")
	TSubclassOf<UAutoChessCardBase> SelectedCardClass;

	// 当前选中的单位 (用于移动或出售)
	UPROPERTY(BlueprintReadWrite, Category = "AutoChess|Input")
	AAutoChessUnitBase* SelectedUnit;

	// 购买卡牌
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Actions")
	void BuyCard(TSubclassOf<UAutoChessCardBase> CardClass);

	// 放置单位 (从手牌到棋盘)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Actions")
	void PlaceUnit(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY);

	// 出售单位
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Actions")
	void SellUnit(AAutoChessUnitBase* Unit);

	// 刷新商店 (蓝图实现具体逻辑)
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|Actions")
	void RefreshShop();

protected:
	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;
	
	// 鼠标点击处理
	void HandleClick();

	// --- 拖拽逻辑 ---
	bool bIsDragging;
	AAutoChessUnitBase* DraggedUnit;
	FVector DragOffset; // 鼠标点击位置相对于单位中心的偏移

	void HandleDragStart();
	void HandleDragging();
	void HandleDragEnd();

	// --- UI 逻辑 ---
	// 血条 Widget 类
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	TSubclassOf<class UAutoChessUnitWidget> UnitHealthBarClass;

	// 管理所有单位的血条 Widget
	UPROPERTY()
	TMap<AAutoChessUnitBase*, class UAutoChessUnitWidget*> UnitHealthBars;

	// 血条垂直偏移量
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	float HealthBarZOffset = 150.0f;

	// 血条缩放参考距离 (在这个距离下缩放为 1.0)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	float HealthBarRefDistance = 1000.0f;

	// 血条最小缩放
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	float HealthBarMinScale = 0.5f;

	// 血条最大缩放
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	float HealthBarMaxScale = 1.5f;

	void UpdateHealthBars();
};
