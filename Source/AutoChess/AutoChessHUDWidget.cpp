#include "AutoChessHUDWidget.h"

void UAutoChessHUDWidget::HandleManaUpdated(float CurrentMana, float MaxMana)
{
	// 调用Blueprint事件
	BP_OnManaUpdated(CurrentMana, MaxMana);
}

void UAutoChessHUDWidget::HandleHandUpdated(const TArray<UAutoChessCardBase*>& HandCards)
{
	// 调用Blueprint事件
	BP_OnHandUpdated(HandCards);
}
