// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenuPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOCHESS_MainMenuPlayerController_generated_h
#error "MainMenuPlayerController.generated.h already included, missing '#pragma once' in MainMenuPlayerController.h"
#endif
#define AUTOCHESS_MainMenuPlayerController_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execHostGame);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuPlayerController(); \
	friend struct Z_Construct_UClass_AMainMenuPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainMenuPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuPlayerController)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainMenuPlayerController(AMainMenuPlayerController&&); \
	AMainMenuPlayerController(const AMainMenuPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuPlayerController) \
	NO_API virtual ~AMainMenuPlayerController();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_11_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AMainMenuPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
