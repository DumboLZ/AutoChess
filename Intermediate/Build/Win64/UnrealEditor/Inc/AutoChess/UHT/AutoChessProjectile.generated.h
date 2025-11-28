// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AUTOCHESS_AutoChessProjectile_generated_h
#error "AutoChessProjectile.generated.h already included, missing '#pragma once' in AutoChessProjectile.h"
#endif
#define AUTOCHESS_AutoChessProjectile_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoChessProjectile(); \
	friend struct Z_Construct_UClass_AAutoChessProjectile_Statics; \
public: \
	DECLARE_CLASS(AAutoChessProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(AAutoChessProjectile)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoChessProjectile(AAutoChessProjectile&&); \
	AAutoChessProjectile(const AAutoChessProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoChessProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoChessProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoChessProjectile) \
	NO_API virtual ~AAutoChessProjectile();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_12_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class AAutoChessProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
