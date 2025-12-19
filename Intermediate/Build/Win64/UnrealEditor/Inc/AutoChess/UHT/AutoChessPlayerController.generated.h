// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAutoChessUnitBase;
class APlayerController;
class UAutoChessCardBase;
struct FCardDisplayData;
#ifdef AUTOCHESS_AutoChessPlayerController_generated_h
#error "AutoChessPlayerController.generated.h already included, missing '#pragma once' in AutoChessPlayerController.h"
#endif
#define AUTOCHESS_AutoChessPlayerController_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_13_DELEGATE \
AUTOCHESS_API void FOnManaUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnManaUpdate, float CurrentMana, float MaxMana);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_14_DELEGATE \
AUTOCHESS_API void FOnHandUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHandUpdate, TArray<UAutoChessCardBase*> const& HandCards);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_15_DELEGATE \
AUTOCHESS_API void FOnDeckUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnDeckUpdate, TArray<FName> const& DeckConfig);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardDisplayData_Statics; \
	AUTOCHESS_API static class UScriptStruct* StaticStruct();


template<> AUTOCHESS_API UScriptStruct* StaticStruct<struct FCardDisplayData>();

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_51_DELEGATE \
AUTOCHESS_API void FOnCardDisplayed_DelegateWrapper(const FMulticastScriptDelegate& OnCardDisplayed, FCardDisplayData const& CardData, APlayerController* Caster, AActor* Target, FIntPoint TargetGridPos);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_52_DELEGATE \
AUTOCHESS_API void FOnGoldUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGoldUpdate, int32 CurrentGold, int32 Delta);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RemoveCardFromDeck_Implementation(FName CardRowName); \
	virtual void Server_AddCardToDeck_Implementation(FName CardRowName); \
	virtual void Server_MoveUnit_Implementation(AAutoChessUnitBase* Unit, int32 TargetGridX, int32 TargetGridY); \
	virtual void Server_PlayCard_Implementation(UAutoChessCardBase* Card, AActor* Target, int32 GridX, int32 GridY); \
	virtual void Server_SellUnit_Implementation(AAutoChessUnitBase* Unit); \
	virtual void Server_PlaceUnit_Implementation(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY); \
	virtual void Server_BuyCard_Implementation(TSubclassOf<UAutoChessCardBase> CardClass); \
	virtual void Server_SellAllUnits_Implementation(int32 TargetTeamID); \
	virtual void Server_RequestRematch_Implementation(bool bRematch); \
	virtual void Server_SetPlayerReady_Implementation(bool bReady); \
	virtual void Server_BuyUnit_Implementation(FName UnitRowName); \
	virtual void Client_RefreshHand_Implementation(); \
	virtual void Client_MatchEnded_Implementation(int32 WinnerTeamID); \
	virtual void Client_HideCardDisplay_Implementation(); \
	virtual void Client_ShowCardDisplay_Implementation(FCardDisplayData const& CardData, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster, int32 AOERadius); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execDrawCards); \
	DECLARE_FUNCTION(execDrawCard); \
	DECLARE_FUNCTION(execServer_RemoveCardFromDeck); \
	DECLARE_FUNCTION(execServer_AddCardToDeck); \
	DECLARE_FUNCTION(execServer_MoveUnit); \
	DECLARE_FUNCTION(execServer_PlayCard); \
	DECLARE_FUNCTION(execServer_SellUnit); \
	DECLARE_FUNCTION(execServer_PlaceUnit); \
	DECLARE_FUNCTION(execServer_BuyCard); \
	DECLARE_FUNCTION(execAddMana); \
	DECLARE_FUNCTION(execUpdateDragHighlight); \
	DECLARE_FUNCTION(execTryPlayCardAtPosition); \
	DECLARE_FUNCTION(execPlayCard); \
	DECLARE_FUNCTION(execOnRep_HandCards); \
	DECLARE_FUNCTION(execOnRep_DeckConfig); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execGetCursorPosition); \
	DECLARE_FUNCTION(execSellUnit); \
	DECLARE_FUNCTION(execPlaceUnit); \
	DECLARE_FUNCTION(execBuyCard); \
	DECLARE_FUNCTION(execOnDebugMatchWinnerChanged); \
	DECLARE_FUNCTION(execClient_ReturnToMainMenu); \
	DECLARE_FUNCTION(execServer_SellAllUnits); \
	DECLARE_FUNCTION(execServer_RequestRematch); \
	DECLARE_FUNCTION(execServer_SetPlayerReady); \
	DECLARE_FUNCTION(execServer_BuyUnit); \
	DECLARE_FUNCTION(execClient_RefreshHand); \
	DECLARE_FUNCTION(execClient_MatchEnded); \
	DECLARE_FUNCTION(execClient_HideCardDisplay); \
	DECLARE_FUNCTION(execClient_ShowCardDisplay);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessPlayerController(); \
	friend struct Z_Construct_UClass_AAutoChessPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAutoChessPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AAutoChessPlayerController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamID=NETFIELD_REP_START, \
		Mana, \
		DeckConfig, \
		HandCards, \
		NETFIELD_REP_END=HandCards	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessPlayerController(AAutoChessPlayerController&&); \
	AAutoChessPlayerController(const AAutoChessPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessPlayerController) \
	NO_API virtual ~AAutoChessPlayerController();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_53_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
