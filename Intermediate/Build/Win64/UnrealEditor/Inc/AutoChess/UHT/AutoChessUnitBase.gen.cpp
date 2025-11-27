// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessUnitBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessUnitBase() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessUnitBase Function AttackTarget
struct Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics
{
	struct AutoChessUnitBase_eventAttackTarget_Parms
	{
		AAutoChessUnitBase* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x9d\xe8\xaf\x95\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x9d\xe8\xaf\x95\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventAttackTarget_Parms, Target), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "AttackTarget", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::AutoChessUnitBase_eventAttackTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::AutoChessUnitBase_eventAttackTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execAttackTarget)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function AttackTarget

// Begin Class AAutoChessUnitBase Function CheckCanFight
struct Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics
{
	struct AutoChessUnitBase_eventCheckCanFight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x88\x98\xe6\x96\x97 (\xe5\x9f\xba\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x88\x98\xe6\x96\x97 (\xe5\x9f\xba\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessUnitBase_eventCheckCanFight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessUnitBase_eventCheckCanFight_Parms), &Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "CheckCanFight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::AutoChessUnitBase_eventCheckCanFight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::AutoChessUnitBase_eventCheckCanFight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execCheckCanFight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanFight();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function CheckCanFight

// Begin Class AAutoChessUnitBase Function OnDeath
static FName NAME_AAutoChessUnitBase_OnDeath = FName(TEXT("OnDeath"));
void AAutoChessUnitBase::OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_OnDeath),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xad\xbb\xe4\xba\xa1\xe5\xa4\x84\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\xa4\x84\xe7\x90\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function OnDeath

// Begin Class AAutoChessUnitBase Function ReceiveDamage
struct Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics
{
	struct AutoChessUnitBase_eventReceiveDamage_Parms
	{
		float DamageAmount;
		AAutoChessUnitBase* Attacker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\xae\xb3\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\xae\xb3" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventReceiveDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventReceiveDamage_Parms, Attacker), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_Attacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::AutoChessUnitBase_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::AutoChessUnitBase_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execReceiveDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Attacker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage(Z_Param_DamageAmount,Z_Param_Attacker);
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function ReceiveDamage

// Begin Class AAutoChessUnitBase Function SnapToGrid
struct Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x9e\xac\xe9\x97\xb4)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x9e\xac\xe9\x97\xb4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "SnapToGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execSnapToGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapToGrid();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function SnapToGrid

// Begin Class AAutoChessUnitBase Function UseSkill
static FName NAME_AAutoChessUnitBase_UseSkill = FName(TEXT("UseSkill"));
void AAutoChessUnitBase::UseSkill()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_UseSkill),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "UseSkill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_UseSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAutoChessUnitBase Function UseSkill

// Begin Class AAutoChessUnitBase
void AAutoChessUnitBase::StaticRegisterNativesAAutoChessUnitBase()
{
	UClass* Class = AAutoChessUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackTarget", &AAutoChessUnitBase::execAttackTarget },
		{ "CheckCanFight", &AAutoChessUnitBase::execCheckCanFight },
		{ "OnDeath", &AAutoChessUnitBase::execOnDeath },
		{ "ReceiveDamage", &AAutoChessUnitBase::execReceiveDamage },
		{ "SnapToGrid", &AAutoChessUnitBase::execSnapToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessUnitBase);
UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister()
{
	return AAutoChessUnitBase::StaticClass();
}
struct Z_Construct_UClass_AAutoChessUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\x95\xe4\xbd\x8d\xe5\x9f\xba\xe7\xb1\xbb\n * \xe5\x8c\x85\xe5\x90\xab\xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AutoChessUnitBase.h" },
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\x95\xe4\xbd\x8d\xe5\x9f\xba\xe7\xb1\xbb\n\xe5\x8c\x85\xe5\x90\xab\xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeGrid_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xac\xa1/\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xac\xa1/\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridPos_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGridPos_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xb8\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xb8\xad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe7\xa7\xbb\xe5\x8a\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe7\xa7\xbb\xe5\x8a\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (Unreal Units / sec)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (Unreal Units / sec)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackRangeGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget, "AttackTarget" }, // 2292515219
		{ &Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight, "CheckCanFight" }, // 1465676004
		{ &Z_Construct_UFunction_AAutoChessUnitBase_OnDeath, "OnDeath" }, // 2050110532
		{ &Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage, "ReceiveDamage" }, // 2033339204
		{ &Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid, "SnapToGrid" }, // 1754529632
		{ &Z_Construct_UFunction_AAutoChessUnitBase_UseSkill, "UseSkill" }, // 2783063911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackRangeGrid = { "AttackRangeGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackRangeGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeGrid_MetaData), NewProp_AttackRangeGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, CurrentTarget), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentGridPos = { "CurrentGridPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, CurrentGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridPos_MetaData), NewProp_CurrentGridPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGridPos_MetaData), NewProp_TargetGridPos_MetaData) };
void Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AAutoChessUnitBase*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessUnitBase), &Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackRangeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessUnitBase_Statics::ClassParams = {
	&AAutoChessUnitBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessUnitBase()
{
	if (!Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton, Z_Construct_UClass_AAutoChessUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessUnitBase>()
{
	return AAutoChessUnitBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessUnitBase);
AAutoChessUnitBase::~AAutoChessUnitBase() {}
// End Class AAutoChessUnitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessUnitBase, AAutoChessUnitBase::StaticClass, TEXT("AAutoChessUnitBase"), &Z_Registration_Info_UClass_AAutoChessUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessUnitBase), 4124954795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_676997883(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
