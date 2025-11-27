// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAutoChessUnitBase;
class UAutoChessCardBase;
#ifdef AUTOCHESS_AutoChessPlayerController_generated_h
#error "AutoChessPlayerController.generated.h already included, missing '#pragma once' in AutoChessPlayerController.h"
#endif
#define AUTOCHESS_AutoChessPlayerController_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSellUnit); \
	DECLARE_FUNCTION(execPlaceUnit); \
	DECLARE_FUNCTION(execBuyCard);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessPlayerController(); \
	friend struct Z_Construct_UClass_AAutoChessPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAutoChessPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessPlayerController)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessPlayerController(AAutoChessPlayerController&&); \
	AAutoChessPlayerController(const AAutoChessPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessPlayerController) \
	NO_API virtual ~AAutoChessPlayerController();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_14_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
