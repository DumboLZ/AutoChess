// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessSkillProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAutoChessUnitBase;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AUTOCHESS_AutoChessSkillProjectile_generated_h
#error "AutoChessSkillProjectile.generated.h already included, missing '#pragma once' in AutoChessSkillProjectile.h"
#endif
#define AUTOCHESS_AutoChessSkillProjectile_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execInitSkillProjectile);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessSkillProjectile(); \
	friend struct Z_Construct_UClass_AAutoChessSkillProjectile_Statics; \
public: \
	DECLARE_CLASS(AAutoChessSkillProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessSkillProjectile)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessSkillProjectile(AAutoChessSkillProjectile&&); \
	AAutoChessSkillProjectile(const AAutoChessSkillProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessSkillProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessSkillProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessSkillProjectile) \
	NO_API virtual ~AAutoChessSkillProjectile();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_18_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessSkillProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
