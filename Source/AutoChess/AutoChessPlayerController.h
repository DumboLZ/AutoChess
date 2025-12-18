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

// 卡牌展示数据（用于 RPC 传输）
USTRUCT(BlueprintType)
struct FCardDisplayData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FText CardName;

	UPROPERTY(BlueprintReadOnly)
	FText CardDescription;

	UPROPERTY(BlueprintReadOnly)
	int32 BaseCost = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 FinalCost = 0;

	UPROPERTY(BlueprintReadOnly)
	bool bConsumeAllMana = false;

	UPROPERTY(BlueprintReadOnly)
	UTexture2D* Icon = nullptr;

	UPROPERTY(BlueprintReadOnly)
	float DisplayDuration = 2.0f;

	FCardDisplayData() {}
	
	// 构造函数声明（实现在 .cpp 中）
	FCardDisplayData(class UAutoChessCardBase* Card);
};

// 卡牌展示事件委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCardDisplayed, const FCardDisplayData&, CardData, APlayerController*, Caster, AActor*, Target, FIntPoint, TargetGridPos);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoldUpdate, int32, CurrentGold, int32, Delta);
UCLASS()
class AUTOCHESS_API AAutoChessPlayerController : public APlayerController, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AAutoChessPlayerController();

	// --- 客户端展示 RPC ---
	
	// 客户端显示卡牌展示效果 (高亮格子 + UI)
	UFUNCTION(Client, Reliable)
	void Client_ShowCardDisplay(const FCardDisplayData& CardData, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster, int32 AOERadius);

	// 客户端隐藏卡牌展示效果
	UFUNCTION(Client, Reliable)
	void Client_HideCardDisplay();

	// 客户端强制结束比赛 (用于确保 UI 弹出)
	UFUNCTION(Client, Reliable)
	void Client_MatchEnded(int32 WinnerTeamID);

	// 蓝图实现的比赛结束逻辑 (用于弹出 UI)
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|UI")
	void BP_OnMatchEnded(int32 WinnerTeamID);

	// --- 购买单位 Server RPC ---
	
	// 服务器端购买并生成单位 (通过 DataTable RowName)
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "AutoChess|Shop")
	void Server_BuyUnit(FName UnitRowName);

	// 单位数据表
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Config")
	class UDataTable* UnitDataTable;

	// 设置玩家准备状态
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "AutoChess|GameFlow")
	void Server_SetPlayerReady(bool bReady);

	// 请求再来一局
	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "AutoChess|GameFlow")
	void Server_RequestRematch(bool bRematch);

	// 返回主菜单 (客户端本地调用)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|GameFlow")
	void Client_ReturnToMainMenu();

	// --- GAS 组件 ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	class UAbilitySystemComponent* AbilitySystemComponent;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// 队伍ID (0: 玩家1, 1: 玩家2)
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AutoChess")
	int32 TeamID = 0;

	UFUNCTION()
	void OnDebugMatchWinnerChanged(int32 WinnerTeamID);

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

	virtual void ReceivedPlayer() override; // 当关联到 LocalPlayer 时调用
	virtual void OnPossess(APawn* InPawn) override;
	
	// 鼠标点击处理
	void HandleClick(const FVector2D& ScreenPosition);

	// --- 拖拽逻辑 ---
	bool bIsDragging;
	AAutoChessUnitBase* DraggedUnit;
	
	UPROPERTY()
	class AAutoChessGhost* DragGhost; // 幽灵 Actor

	float DragStartZ; // 拖拽开始时的 Z 高度
	FVector DragOffset; // 鼠标点击位置相对于单位中心的偏移

	void HandleDragStart(const FVector2D& ScreenPosition);
	void HandleDragging(const FVector2D& ScreenPosition);
	void HandleDragEnd();

	// --- UI 逻辑 ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|UI")
	TSubclassOf<class UUserWidget> MainHUDClass;

	// 主 HUD 实例
	UPROPERTY(BlueprintReadOnly, Category = "AutoChess|UI")
	class UUserWidget* MainHUDWidget;

	// 高亮管理器
	UPROPERTY()
	class AAutoChessHighlightActor* HighlightActor;

	// --- 虚拟光标 (手柄支持) ---
	
	// 虚拟光标 Widget 类
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Input")
	TSubclassOf<UUserWidget> VirtualCursorClass;

	// 虚拟光标实例
	UPROPERTY(BlueprintReadOnly, Category = "AutoChess|Input")
	UUserWidget* VirtualCursorWidget;

	// 虚拟光标当前位置 (屏幕坐标)
	FVector2D VirtualCursorPosition;

	// 光标移动速度 (像素/秒)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AutoChess|Input")
	float CursorMoveSpeed = 1000.0f;

	// 获取当前光标位置 (自动判断鼠标或虚拟光标)
	// 获取当前光标位置 (自动判断鼠标或虚拟光标)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Input")
	FVector2D GetCursorPosition();

	virtual void SetupInputComponent() override;
	void OnLeftClickPressed();
	void OnLeftClickReleased();



	// --- 实时卡牌战斗系统 ---

	// 当前法力值
	UPROPERTY(ReplicatedUsing = OnRep_Mana, VisibleAnywhere, BlueprintReadWrite, Category = "AutoChess|Battle")
	float Mana;

	UFUNCTION()
	void OnRep_Mana();

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
	UPROPERTY(ReplicatedUsing = OnRep_HandCards, VisibleAnywhere, BlueprintReadOnly, Category = "AutoChess|Battle")
	TArray<UAutoChessCardBase*> HandCards;

	UFUNCTION()
	void OnRep_HandCards();

	// 抽牌间隔 (秒)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoChess|Battle")
	float DrawCardInterval = 5.0f;

	// 尝试打出卡牌
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	bool PlayCard(UAutoChessCardBase* Card, AActor* Target, FIntPoint TargetGridPos);

	// 尝试在指定屏幕位置打出卡牌 (用于拖拽释放)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	bool TryPlayCardAtPosition(UAutoChessCardBase* Card, const FVector2D& ScreenPosition);

	// 更新拖拽高亮 (用于拖拽过程中显示范围)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	void UpdateDragHighlight(UAutoChessCardBase* Card, const FVector2D& ScreenPosition);


public:
	// 回复法力 (Public for GameMode access)
	void RegenerateMana(float DeltaTime);

	// 增加法力 (用于法术效果)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	void AddMana(float Amount);

	// 处理自动抽牌 (Public for GameMode access)
	void ProcessAutoDraw(float DeltaTime);

	// 重置玩家状态 (清空手牌、重置法力)
	void ResetState();

protected:
	// 内部计时器
	float DrawCardTimer;

	// --- 网络复制 ---
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;

	// Server RPCs
	UFUNCTION(Server, Reliable)
	void Server_BuyCard(TSubclassOf<UAutoChessCardBase> CardClass);

	UFUNCTION(Server, Reliable)
	void Server_PlaceUnit(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY);

	// 出售单位
	UFUNCTION(Server, Reliable)
	void Server_SellUnit(AAutoChessUnitBase* Unit);

	UFUNCTION(Server, Reliable)
	void Server_PlayCard(UAutoChessCardBase* Card, AActor* Target, int32 GridX, int32 GridY);

	UFUNCTION(Server, Reliable)
	void Server_MoveUnit(AAutoChessUnitBase* Unit, int32 TargetGridX, int32 TargetGridY);


public:
	// 抽牌接口
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	UAutoChessCardBase* DrawCard();

	UFUNCTION(BlueprintCallable, Category = "AutoChess|Battle")
	void DrawCards(int32 Count);

	// --- UI 事件 ---
	
	// 法力值更新事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnManaUpdate OnManaUpdated;

	// 手牌更新事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnHandUpdate OnHandUpdated;

	// 卡牌展示事件
	UPROPERTY(BlueprintAssignable, Category = "AutoChess|Events")
	FOnCardDisplayed OnCardDisplayed;

	// --- 联机功能 (控制台命令) ---
	
	// 创建游戏（作为 Host）
	// 用法：在控制台输入 HostGame
	UFUNCTION(Exec)
	void HostGame();

	// 加入游戏（作为 Client）
	// 用法：在控制台输入 JoinGame 192.168.1.100
	UFUNCTION(Exec)
	void JoinGame(const FString& Address);
};
