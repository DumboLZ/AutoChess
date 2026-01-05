// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessCardTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOCHESS_AutoChessCardTypes_generated_h
#error "AutoChessCardTypes.generated.h already included, missing '#pragma once' in AutoChessCardTypes.h"
#endif
#define AUTOCHESS_AutoChessCardTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardTypes_h


#define FOREACH_ENUM_EAUTOCHESSCARDTARGETTYPE(op) \
	op(EAutoChessCardTargetType::None) \
	op(EAutoChessCardTargetType::Enemy) \
	op(EAutoChessCardTargetType::Ally) \
	op(EAutoChessCardTargetType::Self) \
	op(EAutoChessCardTargetType::AnyUnit) \
	op(EAutoChessCardTargetType::EmptyTile) 

enum class EAutoChessCardTargetType : uint8;
template<> struct TIsUEnumClass<EAutoChessCardTargetType> { enum { Value = true }; };
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessCardTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
