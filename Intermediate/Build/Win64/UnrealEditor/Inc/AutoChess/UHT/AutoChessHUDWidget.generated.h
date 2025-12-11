// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessHUDWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAutoChessCardBase;
#ifdef AUTOCHESS_AutoChessHUDWidget_generated_h
#error "AutoChessHUDWidget.generated.h already included, missing '#pragma once' in AutoChessHUDWidget.h"
#endif
#define AUTOCHESS_AutoChessHUDWidget_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHandUpdated); \
	DECLARE_FUNCTION(execHandleManaUpdated);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoChessHUDWidget(); \
	friend struct Z_Construct_UClass_UAutoChessHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UAutoChessHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(UAutoChessHUDWidget)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoChessHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoChessHUDWidget(UAutoChessHUDWidget&&); \
	UAutoChessHUDWidget(const UAutoChessHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoChessHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoChessHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoChessHUDWidget) \
	NO_API virtual ~UAutoChessHUDWidget();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_13_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class UAutoChessHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
