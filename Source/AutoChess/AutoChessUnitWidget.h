#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AutoChessUnitWidget.generated.h"

/**
 * 单位头顶血条 Widget
 */
UCLASS()
class AUTOCHESS_API UAutoChessUnitWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// 更新血量百分比
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|UI")
	void UpdateHealth(float CurrentHealth, float MaxHealth);

	// 设置队伍颜色
	UFUNCTION(BlueprintImplementableEvent, Category = "AutoChess|UI")
	void SetTeamColor(int32 TeamID);
};
