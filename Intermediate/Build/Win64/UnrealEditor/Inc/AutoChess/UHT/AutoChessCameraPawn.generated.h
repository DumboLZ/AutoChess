// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessCameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOCHESS_AutoChessCameraPawn_generated_h
#error "AutoChessCameraPawn.generated.h already included, missing '#pragma once' in AutoChessCameraPawn.h"
#endif
#define AUTOCHESS_AutoChessCameraPawn_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupCameraForPlayer);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessCameraPawn(); \
	friend struct Z_Construct_UClass_AAutoChessCameraPawn_Statics; \
public: \
	DECLARE_CLASS(AAutoChessCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessCameraPawn)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessCameraPawn(AAutoChessCameraPawn&&); \
	AAutoChessCameraPawn(const AAutoChessCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessCameraPawn) \
	NO_API virtual ~AAutoChessCameraPawn();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_7_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessCameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
