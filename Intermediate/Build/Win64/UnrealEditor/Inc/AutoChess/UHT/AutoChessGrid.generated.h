// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOCHESS_AutoChessGrid_generated_h
#error "AutoChessGrid.generated.h already included, missing '#pragma once' in AutoChessGrid.h"
#endif
#define AUTOCHESS_AutoChessGrid_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execIsValidGridPosition); \
	DECLARE_FUNCTION(execGridToWorld); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execGenerateGrid);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessGrid(); \
	friend struct Z_Construct_UClass_AAutoChessGrid_Statics; \
public: \
	DECLARE_CLASS(AAutoChessGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessGrid)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessGrid(AAutoChessGrid&&); \
	AAutoChessGrid(const AAutoChessGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessGrid) \
	NO_API virtual ~AAutoChessGrid();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_13_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
