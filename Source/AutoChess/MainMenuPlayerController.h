#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainMenuPlayerController.generated.h"

/**
 * 主菜单专用 PlayerController
 * 负责显示主菜单 UI 并处理联机功能
 */
UCLASS()
class AUTOCHESS_API AMainMenuPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainMenuPlayerController();

protected:
	virtual void BeginPlay() override;

	// 主菜单 Widget 类（在蓝图中设置）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<class UUserWidget> MainMenuWidgetClass;

	// 主菜单 Widget 实例
	UPROPERTY()
	class UUserWidget* MainMenuWidget;

public:
	// 创建游戏 (作为 Listen Server)
	// InitialGold: 初始金币设置
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Menu")
	void HostGame(int32 InitialGold = 0);

	// 加入游戏 (作为 Client)
	UFUNCTION(BlueprintCallable, Category = "AutoChess|Menu")
	void JoinGame(const FString& Address);

	// 退出游戏
	UFUNCTION(BlueprintCallable, Category = "UI")
	void QuitGame();
};
