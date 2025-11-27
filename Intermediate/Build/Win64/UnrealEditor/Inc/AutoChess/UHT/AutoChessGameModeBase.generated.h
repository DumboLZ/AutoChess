// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAutoChessPhase : uint8;
#ifdef AUTOCHESS_AutoChessGameModeBase_generated_h
#error "AutoChessGameModeBase.generated.h already included, missing '#pragma once' in AutoChessGameModeBase.h"
#endif
#define AUTOCHESS_AutoChessGameModeBase_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execStartBattle);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessGameModeBase(); \
	friend struct Z_Construct_UClass_AAutoChessGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAutoChessGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessGameModeBase)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessGameModeBase(AAutoChessGameModeBase&&); \
	AAutoChessGameModeBase(const AAutoChessGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessGameModeBase) \
	NO_API virtual ~AAutoChessGameModeBase();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_20_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h


#define FOREACH_ENUM_EAUTOCHESSPHASE(op) \
	op(EAutoChessPhase::Preparation) \
	op(EAutoChessPhase::Battle) \
	op(EAutoChessPhase::Settlement) 

enum class EAutoChessPhase : uint8;
template<> struct TIsUEnumClass<EAutoChessPhase> { enum { Value = true }; };
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
