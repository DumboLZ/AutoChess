// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef AUTOCHESS_AutoChessAttributeSet_generated_h
#error "AutoChessAttributeSet.generated.h already included, missing '#pragma once' in AutoChessAttributeSet.h"
#endif
#define AUTOCHESS_AutoChessAttributeSet_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_AttackDamage); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoChessAttributeSet(); \
	friend struct Z_Construct_UClass_UAutoChessAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAutoChessAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(UAutoChessAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		AttackDamage, \
		NETFIELD_REP_END=AttackDamage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAutoChessAttributeSet) \
public:


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoChessAttributeSet(UAutoChessAttributeSet&&); \
	UAutoChessAttributeSet(const UAutoChessAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoChessAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoChessAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutoChessAttributeSet) \
	NO_API virtual ~UAutoChessAttributeSet();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_18_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class UAutoChessAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
