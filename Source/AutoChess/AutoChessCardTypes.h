#pragma once

#include "CoreMinimal.h"
#include "AutoChessCardTypes.generated.h"

UENUM(BlueprintType)
enum class EAutoChessCardTargetType : uint8
{
	None		UMETA(DisplayName = "None"),
	Enemy		UMETA(DisplayName = "Enemy Unit"),
	Ally		UMETA(DisplayName = "Ally Unit"),
	Self		UMETA(DisplayName = "Self (Player)"),
	AnyUnit		UMETA(DisplayName = "Any Unit"),
	EmptyTile	UMETA(DisplayName = "Empty Grid Tile")
};
