#include "MainMenuPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AMainMenuPlayerController::AMainMenuPlayerController()
{
	// 显示鼠标光标
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AMainMenuPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 创建并显示主菜单 Widget
	if (IsLocalController() && MainMenuWidgetClass)
	{
		MainMenuWidget = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidget)
		{
			MainMenuWidget->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("[MainMenuPC] Main menu widget created and added to viewport."));
			
			// 设置输入模式为 UI Only（不设置焦点，避免错误）
			FInputModeUIOnly InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			SetInputMode(InputMode);
			SetShowMouseCursor(true);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[MainMenuPC] Failed to create main menu widget!"));
		}
	}
}

void AMainMenuPlayerController::HostGame(int32 InitialGold)
{
	UE_LOG(LogTemp, Warning, TEXT("[MainMenuPC::HostGame] Creating game as Listen Server... InitialGold=%d"), InitialGold);
	
	// 加载游戏关卡并开启 Listen Server
	// 传递 InitialGold 参数
	FString GameMapName = TEXT("/Game/Map/GameMap");
	FString TravelURL = FString::Printf(TEXT("%s?listen?InitialGold=%d"), *GameMapName, InitialGold);
	
	UGameplayStatics::OpenLevel(this, FName(*TravelURL));
}

void AMainMenuPlayerController::JoinGame(const FString& Address)
{
	if (Address.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("[MainMenuPC::JoinGame] Failed: IP Address is empty!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("[MainMenuPC::JoinGame] Connecting to: %s"), *Address);
	
	// 客户端连接到指定地址
	UGameplayStatics::OpenLevel(this, FName(*Address));
}

void AMainMenuPlayerController::QuitGame()
{
	UE_LOG(LogTemp, Warning, TEXT("[MainMenuPC::QuitGame] Quitting game..."));
	
	// 退出游戏
	UKismetSystemLibrary::QuitGame(this, this, EQuitPreference::Quit, false);
}
