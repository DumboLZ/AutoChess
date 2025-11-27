// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAutoChessUnitBase;
#ifdef AUTOCHESS_AutoChessGameState_generated_h
#error "AutoChessGameState.generated.h already included, missing '#pragma once' in AutoChessGameState.h"
#endif
#define AUTOCHESS_AutoChessGameState_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUnitAtGrid); \
	DECLARE_FUNCTION(execIsGridOccupied); \
	DECLARE_FUNCTION(execGetUnitsByTeam); \
	DECLARE_FUNCTION(execUnregisterUnit); \
	DECLARE_FUNCTION(execRegisterUnit);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessGameState(); \
	friend struct Z_Construct_UClass_AAutoChessGameState_Statics; \
public: \
	DECLARE_CLASS(AAutoChessGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessGameState)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessGameState(AAutoChessGameState&&); \
	AAutoChessGameState(const AAutoChessGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessGameState) \
	NO_API virtual ~AAutoChessGameState();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_14_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
