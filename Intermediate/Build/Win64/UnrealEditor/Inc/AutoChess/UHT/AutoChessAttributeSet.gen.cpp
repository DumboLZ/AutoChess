// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessAttributeSet() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessAttributeSet();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessAttributeSet Function OnRep_AttackDamage
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics
{
	struct AutoChessAttributeSet_eventOnRep_AttackDamage_Parms
	{
		FGameplayAttributeData OldAttackDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage = { "OldAttackDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_AttackDamage_Parms, OldAttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackDamage_MetaData), NewProp_OldAttackDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_AttackDamage", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::AutoChessAttributeSet_eventOnRep_AttackDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::AutoChessAttributeSet_eventOnRep_AttackDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_AttackDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackDamage(Z_Param_Out_OldAttackDamage);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_AttackDamage

// Begin Class UAutoChessAttributeSet Function OnRep_AttackSpeed
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics
{
	struct AutoChessAttributeSet_eventOnRep_AttackSpeed_Parms
	{
		FGameplayAttributeData OldAttackSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed = { "OldAttackSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_AttackSpeed_Parms, OldAttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackSpeed_MetaData), NewProp_OldAttackSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_AttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::AutoChessAttributeSet_eventOnRep_AttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::AutoChessAttributeSet_eventOnRep_AttackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_AttackSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackSpeed(Z_Param_Out_OldAttackSpeed);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_AttackSpeed

// Begin Class UAutoChessAttributeSet Function OnRep_CritDamage
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics
{
	struct AutoChessAttributeSet_eventOnRep_CritDamage_Parms
	{
		FGameplayAttributeData OldCritDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::NewProp_OldCritDamage = { "OldCritDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_CritDamage_Parms, OldCritDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritDamage_MetaData), NewProp_OldCritDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::NewProp_OldCritDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_CritDamage", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::AutoChessAttributeSet_eventOnRep_CritDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::AutoChessAttributeSet_eventOnRep_CritDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_CritDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritDamage(Z_Param_Out_OldCritDamage);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_CritDamage

// Begin Class UAutoChessAttributeSet Function OnRep_CritRate
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics
{
	struct AutoChessAttributeSet_eventOnRep_CritRate_Parms
	{
		FGameplayAttributeData OldCritRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate = { "OldCritRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_CritRate_Parms, OldCritRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritRate_MetaData), NewProp_OldCritRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_CritRate", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::AutoChessAttributeSet_eventOnRep_CritRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::AutoChessAttributeSet_eventOnRep_CritRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_CritRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritRate(Z_Param_Out_OldCritRate);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_CritRate

// Begin Class UAutoChessAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics
{
	struct AutoChessAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\x9b\x9e\xe8\xb0\x83 ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\x9b\x9e\xe8\xb0\x83 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::AutoChessAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::AutoChessAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_Health

// Begin Class UAutoChessAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics
{
	struct AutoChessAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::AutoChessAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::AutoChessAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_Mana

// Begin Class UAutoChessAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics
{
	struct AutoChessAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::AutoChessAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::AutoChessAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_MaxHealth

// Begin Class UAutoChessAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics
{
	struct AutoChessAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::AutoChessAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::AutoChessAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_MaxMana

// Begin Class UAutoChessAttributeSet Function OnRep_MoveSpeed
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics
{
	struct AutoChessAttributeSet_eventOnRep_MoveSpeed_Parms
	{
		FGameplayAttributeData OldMoveSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMoveSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed = { "OldMoveSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_MoveSpeed_Parms, OldMoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMoveSpeed_MetaData), NewProp_OldMoveSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_MoveSpeed", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::AutoChessAttributeSet_eventOnRep_MoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::AutoChessAttributeSet_eventOnRep_MoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_MoveSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMoveSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldMoveSpeed);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_MoveSpeed

// Begin Class UAutoChessAttributeSet Function OnRep_Shield
struct Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics
{
	struct AutoChessAttributeSet_eventOnRep_Shield_Parms
	{
		FGameplayAttributeData OldShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessAttributeSet_eventOnRep_Shield_Parms, OldShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldShield_MetaData), NewProp_OldShield_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::NewProp_OldShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessAttributeSet, nullptr, "OnRep_Shield", nullptr, nullptr, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::AutoChessAttributeSet_eventOnRep_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::AutoChessAttributeSet_eventOnRep_Shield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessAttributeSet::execOnRep_Shield)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Shield(Z_Param_Out_OldShield);
	P_NATIVE_END;
}
// End Class UAutoChessAttributeSet Function OnRep_Shield

// Begin Class UAutoChessAttributeSet
void UAutoChessAttributeSet::StaticRegisterNativesUAutoChessAttributeSet()
{
	UClass* Class = UAutoChessAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AttackDamage", &UAutoChessAttributeSet::execOnRep_AttackDamage },
		{ "OnRep_AttackSpeed", &UAutoChessAttributeSet::execOnRep_AttackSpeed },
		{ "OnRep_CritDamage", &UAutoChessAttributeSet::execOnRep_CritDamage },
		{ "OnRep_CritRate", &UAutoChessAttributeSet::execOnRep_CritRate },
		{ "OnRep_Health", &UAutoChessAttributeSet::execOnRep_Health },
		{ "OnRep_Mana", &UAutoChessAttributeSet::execOnRep_Mana },
		{ "OnRep_MaxHealth", &UAutoChessAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UAutoChessAttributeSet::execOnRep_MaxMana },
		{ "OnRep_MoveSpeed", &UAutoChessAttributeSet::execOnRep_MoveSpeed },
		{ "OnRep_Shield", &UAutoChessAttributeSet::execOnRep_Shield },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessAttributeSet);
UClass* Z_Construct_UClass_UAutoChessAttributeSet_NoRegister()
{
	return UAutoChessAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UAutoChessAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86\n */" },
#endif
		{ "IncludePath", "AutoChessAttributeSet.h" },
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\xa4\xe7\x9b\xbe\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\xa4\xe7\x9b\xbe\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritRate_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritDamage_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150% \xe4\xbc\xa4\xe5\xae\xb3)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150% \xe4\xbc\xa4\xe5\xae\xb3)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackDamage, "OnRep_AttackDamage" }, // 1898998767
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_AttackSpeed, "OnRep_AttackSpeed" }, // 3655174265
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritDamage, "OnRep_CritDamage" }, // 3858919818
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_CritRate, "OnRep_CritRate" }, // 999549715
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Health, "OnRep_Health" }, // 1529847541
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2347213120
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2402769712
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 3543424869
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 4225745428
		{ &Z_Construct_UFunction_UAutoChessAttributeSet_OnRep_Shield, "OnRep_Shield" }, // 152348777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_AttackDamage = { "AttackDamage", "OnRep_AttackDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, AttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_MetaData), NewProp_Shield_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_AttackSpeed = { "AttackSpeed", "OnRep_AttackSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_CritRate = { "CritRate", "OnRep_CritRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, CritRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritRate_MetaData), NewProp_CritRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_CritDamage = { "CritDamage", "OnRep_CritDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, CritDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritDamage_MetaData), NewProp_CritDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoChessAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_Shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_CritRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_CritDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessAttributeSet_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoChessAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessAttributeSet_Statics::ClassParams = {
	&UAutoChessAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoChessAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAutoChessAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessAttributeSet.OuterSingleton, Z_Construct_UClass_UAutoChessAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessAttributeSet.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessAttributeSet>()
{
	return UAutoChessAttributeSet::StaticClass();
}
void UAutoChessAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_AttackDamage(TEXT("AttackDamage"));
	static const FName Name_Shield(TEXT("Shield"));
	static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
	static const FName Name_CritRate(TEXT("CritRate"));
	static const FName Name_CritDamage(TEXT("CritDamage"));
	static const FName Name_MoveSpeed(TEXT("MoveSpeed"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_AttackDamage == ClassReps[(int32)ENetFields_Private::AttackDamage].Property->GetFName()
		&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName()
		&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
		&& Name_CritRate == ClassReps[(int32)ENetFields_Private::CritRate].Property->GetFName()
		&& Name_CritDamage == ClassReps[(int32)ENetFields_Private::CritDamage].Property->GetFName()
		&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAutoChessAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessAttributeSet);
UAutoChessAttributeSet::~UAutoChessAttributeSet() {}
// End Class UAutoChessAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessAttributeSet, UAutoChessAttributeSet::StaticClass, TEXT("UAutoChessAttributeSet"), &Z_Registration_Info_UClass_UAutoChessAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessAttributeSet), 2988417183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_2179769634(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
