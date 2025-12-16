// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessUnitBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAutoChessUnitBase;
#ifdef AUTOCHESS_AutoChessUnitBase_generated_h
#error "AutoChessUnitBase.generated.h already included, missing '#pragma once' in AutoChessUnitBase.h"
#endif
#define AUTOCHESS_AutoChessUnitBase_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDeath_Implementation(); \
	virtual void UseSkill_Implementation(); \
	virtual void Multicast_PlayDeathAnimation_Implementation(); \
	virtual void Multicast_PlaySkillAnimation_Implementation(); \
	virtual void Multicast_PlayAttackAnimation_Implementation(); \
	DECLARE_FUNCTION(execSnapToGrid); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execAttackTarget); \
	DECLARE_FUNCTION(execCheckCanFight); \
	DECLARE_FUNCTION(execGetUnitVelocity); \
	DECLARE_FUNCTION(execMulticast_PlayDeathAnimation); \
	DECLARE_FUNCTION(execMulticast_PlaySkillAnimation); \
	DECLARE_FUNCTION(execMulticast_PlayAttackAnimation); \
	DECLARE_FUNCTION(execOnRep_CurrentGridPos); \
	DECLARE_FUNCTION(execSpawnSkillProjectile); \
	DECLARE_FUNCTION(execInitFromUnitData); \
	DECLARE_FUNCTION(execOnRep_TeamID);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessUnitBase(); \
	friend struct Z_Construct_UClass_AAutoChessUnitBase_Statics; \
public: \
	DECLARE_CLASS(AAutoChessUnitBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessUnitBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAutoChessUnitBase*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamID=NETFIELD_REP_START, \
		CurrentTarget, \
		CurrentGridPos, \
		TargetGridPos, \
		bIsMoving, \
		bIsDead, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessUnitBase(AAutoChessUnitBase&&); \
	AAutoChessUnitBase(const AAutoChessUnitBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessUnitBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessUnitBase) \
	NO_API virtual ~AAutoChessUnitBase();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_17_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessUnitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
