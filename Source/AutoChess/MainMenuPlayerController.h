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
	// 创建游戏（作为 Host）
	// 用法：在 UI 按钮中调用
	UFUNCTION(BlueprintCallable, Category = "Networking")
	void HostGame();

	// 加入游戏（作为 Client）
	// 用法：在 UI 按钮中调用
	UFUNCTION(BlueprintCallable, Category = "Networking")
	void JoinGame(const FString& Address);

	// 退出游戏
	UFUNCTION(BlueprintCallable, Category = "UI")
	void QuitGame();
};
