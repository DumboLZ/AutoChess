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

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_21_DELEGATE \
static void FOnHealthUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdate, int32 NewHealth, int32 PlayerIndex);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_27_DELEGATE \
static void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, int32 NewPhaseIndex);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_42_DELEGATE \
static void FOnWinnerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWinnerChanged, int32 WinnerTeamID);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_45_DELEGATE \
static void FOnGoldUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGoldUpdated, int32 NewGold, int32 PlayerIndex);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_HideSpellHighlight_Implementation(int32 TeamID); \
	virtual void Multicast_ShowSpellHighlight_Implementation(TArray<FIntPoint> const& GridPositions, int32 TeamID); \
	DECLARE_FUNCTION(execMulticast_HideSpellHighlight); \
	DECLARE_FUNCTION(execMulticast_ShowSpellHighlight); \
	DECLARE_FUNCTION(execGetUnitAtGrid); \
	DECLARE_FUNCTION(execFindEmptyBenchSlot); \
	DECLARE_FUNCTION(execIsGridOccupied); \
	DECLARE_FUNCTION(execGetUnitsByTeam); \
	DECLARE_FUNCTION(execUnregisterUnit); \
	DECLARE_FUNCTION(execRegisterUnit); \
	DECLARE_FUNCTION(execOnRep_CurrentPhaseIndex); \
	DECLARE_FUNCTION(execOnRep_MatchWinnerTeamID); \
	DECLARE_FUNCTION(execOnRep_Player2Wins); \
	DECLARE_FUNCTION(execOnRep_Player1Wins); \
	DECLARE_FUNCTION(execOnRep_WinnerTeamID); \
	DECLARE_FUNCTION(execOnRep_InitialGold); \
	DECLARE_FUNCTION(execOnRep_Player2Gold); \
	DECLARE_FUNCTION(execOnRep_Player1Gold); \
	DECLARE_FUNCTION(execOnRep_Player2Health); \
	DECLARE_FUNCTION(execOnRep_Player1Health);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessGameState(); \
	friend struct Z_Construct_UClass_AAutoChessGameState_Statics; \
public: \
	DECLARE_CLASS(AAutoChessGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Player1Health=NETFIELD_REP_START, \
		Player2Health, \
		Player1Gold, \
		Player2Gold, \
		InitialGold, \
		bPlayer1Ready, \
		bPlayer2Ready, \
		bPlayer1Rematch, \
		bPlayer2Rematch, \
		WinnerTeamID, \
		Player1Wins, \
		Player2Wins, \
		MatchWinnerTeamID, \
		GoldPerRound, \
		CurrentPhaseIndex, \
		CurrentRound, \
		PhaseTimer, \
		GameGrid, \
		AllUnits, \
		HeroUnit_Team0, \
		HeroUnit_Team1, \
		NETFIELD_REP_END=HeroUnit_Team1	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


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
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
