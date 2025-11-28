// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoChessCardBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
#ifdef AUTOCHESS_AutoChessCardBase_generated_h
#error "AutoChessCardBase.generated.h already included, missing '#pragma once' in AutoChessCardBase.h"
#endif
#define AUTOCHESS_AutoChessCardBase_generated_h

#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayed);


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_CALLBACK_WRAPPERS
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoChessCardBase(); \
	friend struct Z_Construct_UClass_UAutoChessCardBase_Statics; \
public: \
	DECLARE_CLASS(UAutoChessCardBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoChess"), NO_API) \
	DECLARE_SERIALIZER(UAutoChessCardBase)


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoChessCardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoChessCardBase(UAutoChessCardBase&&); \
	UAutoChessCardBase(const UAutoChessCardBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoChessCardBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoChessCardBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoChessCardBase) \
	NO_API virtual ~UAutoChessCardBase();


#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_24_PROLOG
#define FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_CALLBACK_WRAPPERS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOCHESS_API UClass* StaticClass<class UAutoChessCardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h


#define FOREACH_ENUM_EAUTOCHESSCARDTARGETTYPE(op) \
	op(EAutoChessCardTargetType::None) \
	op(EAutoChessCardTargetType::Enemy) \
	op(EAutoChessCardTargetType::Ally) \
	op(EAutoChessCardTargetType::Self) \
	op(EAutoChessCardTargetType::AnyUnit) 

enum class EAutoChessCardTargetType : uint8;
template<> struct TIsUEnumClass<EAutoChessCardTargetType> { enum { Value = true }; };
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessCardTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
