#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AutoChessPlayerController.generated.h"

class AAutoChessUnitBase;
class UAutoChessCardBase;

// 定义 UI 更新委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnManaUpdate, float, CurrentMana, float, MaxMana);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandUpdate, const TArray<UAutoChessCardBase*>&, HandCards);

/**
 * 自动走棋玩家控制器
 * 处理玩家输入、卡牌购买、单位放置
 */
UCLASS()
class AUTOCHESS_API AAutoChessPlayerController : public APlayerController, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AAutoChessPlayerController();

	// --- GAS 组件 ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	class UAbilitySystemComponent* AbilitySystemComponent;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

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
	
	// 主 HUD 类 (玩家手牌、法力值等)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	TSubclassOf<class UUserWidget> MainHUDClass;

	// 主 HUD 实例
	UPROPERTY(BlueprintReadOnly, Category = "AutoChess|UI")
	class UUserWidget* MainHUDWidget;

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

	// --- 实时卡牌战斗系统 ---

	// 当前法力值
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Battle")
	float Mana;

	// 最大法力值
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Battle")
	float MaxMana = 10.0f;

	// 法力回复速度 (每秒)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Battle")
	float ManaRegenRate = 1.0f;

	// 牌库配置 (卡牌类列表)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AutoChess|Battle")
	TArray<TSubclassOf<UAutoChessCardBase>> DeckConfig;

	// 当前手牌 (实例化后的卡牌对象)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Battle")
	TArray<UAutoChessCardBase*> HandCards;

	// 抽牌间隔 (秒)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Battle")
	float DrawCardInterval = 5.0f;

	// 尝试打出卡牌
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	bool PlayCard(UAutoChessCardBase* Card, AActor* Target);

	// 尝试在指定屏幕位置打出卡牌 (用于拖拽释放)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	bool TryPlayCardAtPosition(UAutoChessCardBase* Card, const FVector2D& ScreenPosition);

	// 更新拖拽高亮 (用于拖拽过程中显示范围)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	void UpdateDragHighlight(UAutoChessCardBase* Card, const FVector2D& ScreenPosition);

	// 抽一张牌
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	void DrawCard();

protected:
	// 内部计时器
	float DrawCardTimer;

	// 回复法力
	void RegenerateMana(float DeltaTime);

	// 处理自动抽牌
	void ProcessAutoDraw(float DeltaTime);

public:
	// --- UI 事件 ---
	
	// 法力值更新事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnManaUpdate OnManaUpdated;

	// 手牌更新事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnHandUpdate OnHandUpdated;
};
