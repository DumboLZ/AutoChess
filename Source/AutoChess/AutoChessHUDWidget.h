#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AutoChessHUDWidget.generated.h"

class UAutoChessCardBase;

/**
 * 玩家HUD Widget基类
 * 用于接收C++事件并转发到Blueprint
 */
UCLASS()
class AUTOCHESS_API UAutoChessHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// C++ 委托绑定函数（由PlayerController调用）
	UFUNCTION()
	void HandleManaUpdated(float CurrentMana, float MaxMana);
	
	UFUNCTION()
	void HandleHandUpdated(const TArray<UAutoChessCardBase*>& HandCards);
	
protected:
	// Blueprint 事件（在Blueprint中实现）
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|UI", meta=(DisplayName="On Mana Updated"))
	void BP_OnManaUpdated(float CurrentMana, float MaxMana);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|UI", meta=(DisplayName="On Hand Updated"))
	void BP_OnHandUpdated(const TArray<UAutoChessCardBase*>& HandCards);
};
