// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCardBase.h"
#include "AutoChess/AutoChessProjectile.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCardBase() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UEnum* Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileEffectInfo();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedCardEntry();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Enum EAutoChessCardTargetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoChessCardTargetType;
static UEnum* EAutoChessCardTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("EAutoChessCardTargetType"));
	}
	return Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton;
}
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessCardTargetType>()
{
	return EAutoChessCardTargetType_StaticEnum();
}
struct Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ally.DisplayName", "Ally Unit" },
		{ "Ally.Name", "EAutoChessCardTargetType::Ally" },
		{ "AnyUnit.DisplayName", "Any Unit" },
		{ "AnyUnit.Name", "EAutoChessCardTargetType::AnyUnit" },
		{ "BlueprintType", "true" },
		{ "EmptyTile.DisplayName", "Empty Tile" },
		{ "EmptyTile.Name", "EAutoChessCardTargetType::EmptyTile" },
		{ "Enemy.DisplayName", "Enemy Unit" },
		{ "Enemy.Name", "EAutoChessCardTargetType::Enemy" },
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAutoChessCardTargetType::None" },
		{ "Self.DisplayName", "Self (Player)" },
		{ "Self.Name", "EAutoChessCardTargetType::Self" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoChessCardTargetType::None", (int64)EAutoChessCardTargetType::None },
		{ "EAutoChessCardTargetType::Enemy", (int64)EAutoChessCardTargetType::Enemy },
		{ "EAutoChessCardTargetType::Ally", (int64)EAutoChessCardTargetType::Ally },
		{ "EAutoChessCardTargetType::Self", (int64)EAutoChessCardTargetType::Self },
		{ "EAutoChessCardTargetType::AnyUnit", (int64)EAutoChessCardTargetType::AnyUnit },
		{ "EAutoChessCardTargetType::EmptyTile", (int64)EAutoChessCardTargetType::EmptyTile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoChess,
	nullptr,
	"EAutoChessCardTargetType",
	"EAutoChessCardTargetType",
	Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType()
{
	if (!Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton, Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton;
}
// End Enum EAutoChessCardTargetType

// Begin Delegate FOnCardCostChanged
struct Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnCardCostChanged_Parms
	{
		int32 NewFinalCost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFinalCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::NewProp_NewFinalCost = { "NewFinalCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnCardCostChanged_Parms, NewFinalCost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::NewProp_NewFinalCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnCardCostChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::_Script_AutoChess_eventOnCardCostChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::_Script_AutoChess_eventOnCardCostChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCardCostChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCardCostChanged, int32 NewFinalCost)
{
	struct _Script_AutoChess_eventOnCardCostChanged_Parms
	{
		int32 NewFinalCost;
	};
	_Script_AutoChess_eventOnCardCostChanged_Parms Parms;
	Parms.NewFinalCost=NewFinalCost;
	OnCardCostChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCardCostChanged

// Begin Class UAutoChessCardBase Function CastRandomCardsOnTarget
struct Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics
{
	struct AutoChessCardBase_eventCastRandomCardsOnTarget_Parms
	{
		UObject* WorldContextObject;
		AActor* Target;
		int32 CardCount;
		TArray<FWeightedCardEntry> CardPool;
		int32 CasterTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CardPool" },
		{ "Category", "Card Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe5\x8d\x95\xe4\xbd\x8d\xe9\x9a\x8f\xe6\x9c\xba\xe6\x89\x93\xe5\x87\xba\xe5\xa4\x9a\xe5\xbc\xa0\xe5\x8d\xa1\xe7\x89\x8c (\xe4\xbb\x8e\xe5\x8a\xa0\xe6\x9d\x83\xe5\x8d\xa1\xe7\x89\x8c\xe6\xb1\xa0\xe4\xb8\xad\xe6\x8a\xbd\xe5\x8f\x96)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe5\x8d\x95\xe4\xbd\x8d\xe9\x9a\x8f\xe6\x9c\xba\xe6\x89\x93\xe5\x87\xba\xe5\xa4\x9a\xe5\xbc\xa0\xe5\x8d\xa1\xe7\x89\x8c (\xe4\xbb\x8e\xe5\x8a\xa0\xe6\x9d\x83\xe5\x8d\xa1\xe7\x89\x8c\xe6\xb1\xa0\xe4\xb8\xad\xe6\x8a\xbd\xe5\x8f\x96)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPool_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CasterTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventCastRandomCardsOnTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventCastRandomCardsOnTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardCount = { "CardCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventCastRandomCardsOnTarget_Parms, CardCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardPool_Inner = { "CardPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeightedCardEntry, METADATA_PARAMS(0, nullptr) }; // 3912207657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardPool = { "CardPool", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventCastRandomCardsOnTarget_Parms, CardPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPool_MetaData), NewProp_CardPool_MetaData) }; // 3912207657
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CasterTeamID = { "CasterTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventCastRandomCardsOnTarget_Parms, CasterTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CardPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::NewProp_CasterTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "CastRandomCardsOnTarget", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::AutoChessCardBase_eventCastRandomCardsOnTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::AutoChessCardBase_eventCastRandomCardsOnTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execCastRandomCardsOnTarget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FIntProperty,Z_Param_CardCount);
	P_GET_TARRAY_REF(FWeightedCardEntry,Z_Param_Out_CardPool);
	P_GET_PROPERTY(FIntProperty,Z_Param_CasterTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAutoChessCardBase::CastRandomCardsOnTarget(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_CardCount,Z_Param_Out_CardPool,Z_Param_CasterTeamID);
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function CastRandomCardsOnTarget

// Begin Class UAutoChessCardBase Function GetFinalCost
struct Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics
{
	struct AutoChessCardBase_eventGetFinalCost_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x80\xe7\xbb\x88\xe8\xb4\xb9\xe7\x94\xa8 (\xe5\x9f\xba\xe7\xa1\x80\xe8\xb4\xb9\xe7\x94\xa8 + \xe4\xbf\xae\xe6\xad\xa3\xe5\x80\xbc\xef\xbc\x8c\xe6\x9c\x80\xe5\xb0\x8f\xe4\xb8\xba 0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9c\x80\xe7\xbb\x88\xe8\xb4\xb9\xe7\x94\xa8 (\xe5\x9f\xba\xe7\xa1\x80\xe8\xb4\xb9\xe7\x94\xa8 + \xe4\xbf\xae\xe6\xad\xa3\xe5\x80\xbc\xef\xbc\x8c\xe6\x9c\x80\xe5\xb0\x8f\xe4\xb8\xba 0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventGetFinalCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "GetFinalCost", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::AutoChessCardBase_eventGetFinalCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::AutoChessCardBase_eventGetFinalCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execGetFinalCost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFinalCost();
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function GetFinalCost

// Begin Class UAutoChessCardBase Function ModifyCost
struct Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics
{
	struct AutoChessCardBase_eventModifyCost_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\xae\xe6\x94\xb9\xe8\xb4\xb9\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\xae\xe6\x94\xb9\xe8\xb4\xb9\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventModifyCost_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "ModifyCost", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::AutoChessCardBase_eventModifyCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::AutoChessCardBase_eventModifyCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_ModifyCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_ModifyCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execModifyCost)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyCost(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function ModifyCost

// Begin Class UAutoChessCardBase Function OnPlayed
struct AutoChessCardBase_eventOnPlayed_Parms
{
	APlayerController* Controller;
	AActor* Target;
};
static FName NAME_UAutoChessCardBase_OnPlayed = FName(TEXT("OnPlayed"));
void UAutoChessCardBase::OnPlayed(APlayerController* Controller, AActor* Target)
{
	AutoChessCardBase_eventOnPlayed_Parms Parms;
	Parms.Controller=Controller;
	Parms.Target=Target;
	ProcessEvent(FindFunctionChecked(NAME_UAutoChessCardBase_OnPlayed),&Parms);
}
struct Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\n// Controller: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\n// Target: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)\n// \xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\n// Controller: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\n// Target: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)\n// \xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\n// Controller: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\n// Target: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\nController: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\nTarget: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)\n\xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\nController: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\nTarget: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)\n\xe5\xbd\x93\xe5\x8d\xa1\xe7\x89\x8c\xe8\xa2\xab\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\x88\xe6\x9e\x9c)\nController: \xe8\xb0\x81\xe6\x89\x93\xe5\x87\xba\xe7\x9a\x84\nTarget: \xe7\x9b\xae\xe6\xa0\x87 (\xe5\x8f\xaf\xe8\x83\xbd\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x8d\xe3\x80\x81\xe5\x9c\xb0\xe5\x9d\x97\xe6\x88\x96\xe7\xa9\xba)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventOnPlayed_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventOnPlayed_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "OnPlayed", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::PropPointers), sizeof(AutoChessCardBase_eventOnPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessCardBase_eventOnPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_OnPlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_OnPlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execOnPlayed)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayed_Implementation(Z_Param_Controller,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function OnPlayed

// Begin Class UAutoChessCardBase Function OnRep_Cost
struct Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "OnRep_Cost", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execOnRep_Cost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Cost();
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function OnRep_Cost

// Begin Class UAutoChessCardBase Function OnRep_CostModifier
struct Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "OnRep_CostModifier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execOnRep_CostModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CostModifier();
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function OnRep_CostModifier

// Begin Class UAutoChessCardBase Function SpawnProjectileFromSide
struct Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics
{
	struct AutoChessCardBase_eventSpawnProjectileFromSide_Parms
	{
		AActor* Target;
		TSubclassOf<AAutoChessProjectile> ProjectileClass;
		float Damage;
		int32 CasterTeamID;
		TArray<FProjectileEffectInfo> EffectsOnHitEnemy;
		TArray<FProjectileEffectInfo> EffectsOnHitFriendly;
		float SideOffsetDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EffectsOnHitEnemy, EffectsOnHitFriendly" },
		{ "Category", "Card Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe5\x9c\xba\xe8\xbe\xb9\xe5\x8f\x91\xe5\xb0\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 (\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe9\x9d\x99\xe6\x80\x81\xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe5\x9c\xba\xe8\xbe\xb9\xe5\x8f\x91\xe5\xb0\x84\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 (\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe9\x9d\x99\xe6\x80\x81\xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb0\x83\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsOnHitEnemy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsOnHitFriendly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CasterTeamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectsOnHitEnemy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsOnHitEnemy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectsOnHitFriendly_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsOnHitFriendly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideOffsetDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_CasterTeamID = { "CasterTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, CasterTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitEnemy_Inner = { "EffectsOnHitEnemy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProjectileEffectInfo, METADATA_PARAMS(0, nullptr) }; // 2455639867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitEnemy = { "EffectsOnHitEnemy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, EffectsOnHitEnemy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsOnHitEnemy_MetaData), NewProp_EffectsOnHitEnemy_MetaData) }; // 2455639867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitFriendly_Inner = { "EffectsOnHitFriendly", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProjectileEffectInfo, METADATA_PARAMS(0, nullptr) }; // 2455639867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitFriendly = { "EffectsOnHitFriendly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, EffectsOnHitFriendly), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsOnHitFriendly_MetaData), NewProp_EffectsOnHitFriendly_MetaData) }; // 2455639867
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_SideOffsetDistance = { "SideOffsetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnProjectileFromSide_Parms, SideOffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_CasterTeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitEnemy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitFriendly_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_EffectsOnHitFriendly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::NewProp_SideOffsetDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "SpawnProjectileFromSide", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::AutoChessCardBase_eventSpawnProjectileFromSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::AutoChessCardBase_eventSpawnProjectileFromSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execSpawnProjectileFromSide)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_PROPERTY(FIntProperty,Z_Param_CasterTeamID);
	P_GET_TARRAY_REF(FProjectileEffectInfo,Z_Param_Out_EffectsOnHitEnemy);
	P_GET_TARRAY_REF(FProjectileEffectInfo,Z_Param_Out_EffectsOnHitFriendly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SideOffsetDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAutoChessCardBase::SpawnProjectileFromSide(Z_Param_Target,Z_Param_ProjectileClass,Z_Param_Damage,Z_Param_CasterTeamID,Z_Param_Out_EffectsOnHitEnemy,Z_Param_Out_EffectsOnHitFriendly,Z_Param_SideOffsetDistance);
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function SpawnProjectileFromSide

// Begin Class UAutoChessCardBase Function SpawnUnitFromRowName
struct Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics
{
	struct AutoChessCardBase_eventSpawnUnitFromRowName_Parms
	{
		UObject* WorldContextObject;
		FName UnitRowName;
		FIntPoint GridPos;
		int32 TeamID;
		AAutoChessUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\x95\xe4\xbd\x8d (\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8 GameMode \xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe9\x80\xbb\xe8\xbe\x91)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\x95\xe4\xbd\x8d (\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8 GameMode \xe7\x9a\x84\xe7\x94\x9f\xe6\x88\x90\xe9\x80\xbb\xe8\xbe\x91)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnitRowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnUnitFromRowName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_UnitRowName = { "UnitRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnUnitFromRowName_Parms, UnitRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_GridPos = { "GridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnUnitFromRowName_Parms, GridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnUnitFromRowName_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCardBase_eventSpawnUnitFromRowName_Parms, ReturnValue), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_UnitRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_GridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessCardBase, nullptr, "SpawnUnitFromRowName", nullptr, nullptr, Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::AutoChessCardBase_eventSpawnUnitFromRowName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::AutoChessCardBase_eventSpawnUnitFromRowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessCardBase::execSpawnUnitFromRowName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_UnitRowName);
	P_GET_STRUCT(FIntPoint,Z_Param_GridPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAutoChessUnitBase**)Z_Param__Result=UAutoChessCardBase::SpawnUnitFromRowName(Z_Param_WorldContextObject,Z_Param_UnitRowName,Z_Param_GridPos,Z_Param_TeamID);
	P_NATIVE_END;
}
// End Class UAutoChessCardBase Function SpawnUnitFromRowName

// Begin Class UAutoChessCardBase
void UAutoChessCardBase::StaticRegisterNativesUAutoChessCardBase()
{
	UClass* Class = UAutoChessCardBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CastRandomCardsOnTarget", &UAutoChessCardBase::execCastRandomCardsOnTarget },
		{ "GetFinalCost", &UAutoChessCardBase::execGetFinalCost },
		{ "ModifyCost", &UAutoChessCardBase::execModifyCost },
		{ "OnPlayed", &UAutoChessCardBase::execOnPlayed },
		{ "OnRep_Cost", &UAutoChessCardBase::execOnRep_Cost },
		{ "OnRep_CostModifier", &UAutoChessCardBase::execOnRep_CostModifier },
		{ "SpawnProjectileFromSide", &UAutoChessCardBase::execSpawnProjectileFromSide },
		{ "SpawnUnitFromRowName", &UAutoChessCardBase::execSpawnUnitFromRowName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessCardBase);
UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister()
{
	return UAutoChessCardBase::StaticClass();
}
struct Z_Construct_UClass_UAutoChessCardBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n * \xe5\xae\x9a\xe4\xb9\x89\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9a\xe8\x8a\xb1\xe8\xb4\xb9\xe3\x80\x81\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\xad\x89\n */" },
#endif
		{ "IncludePath", "AutoChessCardBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n\xe5\xae\x9a\xe4\xb9\x89\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9a\xe8\x8a\xb1\xe8\xb4\xb9\xe3\x80\x81\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\xad\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCostChanged_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xb9\xe7\x94\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xb9\xe7\x94\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeAllMana_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\xaf\xe5\x8f\x98\xe5\xbc\xba\xe5\xba\xa6\xe6\x8a\x80\xe8\x83\xbd)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\xaf\xe5\x8f\x98\xe5\xbc\xba\xe5\xba\xa6\xe6\x8a\x80\xe8\x83\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x87\x91\xe5\xb8\x81\xe6\xb6\x88\xe8\x80\x97 (\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8b\xbe\xe9\x80\x89\"\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\"\xef\xbc\x8c\xe6\xad\xa4\xe9\xa1\xb9\xe5\xb0\x86\xe8\xa2\xab\xe5\xbf\xbd\xe7\x95\xa5)\n" },
#endif
		{ "EditCondition", "!bConsumeAllMana" },
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x91\xe5\xb8\x81\xe6\xb6\x88\xe8\x80\x97 (\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8b\xbe\xe9\x80\x89\"\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\"\xef\xbc\x8c\xe6\xad\xa4\xe9\xa1\xb9\xe5\xb0\x86\xe8\xa2\xab\xe5\xbf\xbd\xe7\x95\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostModifier_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xb9\xe7\x94\xa8\xe4\xbf\xae\xe6\xad\xa3\xe5\x80\xbc (\xe4\xbe\x8b\xe5\xa6\x82 -1 \xe8\xa1\xa8\xe7\xa4\xba\xe5\x87\x8f 1 \xe8\xb4\xb9)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xb9\xe7\x94\xa8\xe4\xbf\xae\xe6\xad\xa3\xe5\x80\xbc (\xe4\xbe\x8b\xe5\xa6\x82 -1 \xe8\xa1\xa8\xe7\xa4\xba\xe5\x87\x8f 1 \xe8\xb4\xb9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClass_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb (\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb (\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87 (UI\xe6\x98\xbe\xe7\xa4\xba)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87 (UI\xe6\x98\xbe\xe7\xa4\xba)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardAbilityClass_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Gameplay Ability (\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe6\xbf\x80\xe6\xb4\xbb)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Gameplay Ability (\xe6\x89\x93\xe5\x87\xba\xe6\x97\xb6\xe6\xbf\x80\xe6\xb4\xbb)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe9\x99\x90\xe5\x88\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe9\x99\x90\xe5\x88\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AOERadius_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\x9c\xe7\x94\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8d\x8a\xe5\xbe\x84 (0: \xe5\x8d\x95\xe4\xbd\x93, 1: 3x3, 2: 5x5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x9c\xe7\x94\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8d\x8a\xe5\xbe\x84 (0: \xe5\x8d\x95\xe4\xbd\x93, 1: 3x3, 2: 5x5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedTiles_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xb4\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe8\xa2\xab\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe5\x88\x97\xe8\xa1\xa8 (\xe5\x8d\xb3\xe5\xb0\x86\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xb4\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe8\xa2\xab\xe9\xab\x98\xe4\xba\xae\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe5\x88\x97\xe8\xa1\xa8 (\xe5\x8d\xb3\xe5\xb0\x86\xe7\x94\x9f\xe6\x95\x88\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTargetGridPos_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xb4\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe6\xac\xa1\xe6\x96\xbd\xe6\x94\xbe\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x94\xa8\xe4\xba\x8e AOE \xe6\x98\xbe\xe7\xa4\xba)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xb4\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe6\xac\xa1\xe6\x96\xbd\xe6\x94\xbe\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x94\xa8\xe4\xba\x8e AOE \xe6\x98\xbe\xe7\xa4\xba)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTag_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa6\xe5\x8f\x91\xe6\xa0\x87\xe7\xad\xbe (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8c\xba\xe5\x88\x86\xe4\xb8\x8d\xe5\x90\x8c\xe5\x8d\xa1\xe7\x89\x8c\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe4\xba\x8b\xe4\xbb\xb6)\n// \xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba \"Card.Played\"\xef\xbc\x8c\xe5\xbb\xba\xe8\xae\xae\xe4\xb8\xba\xe6\xaf\x8f\xe5\xbc\xa0\xe5\x8d\xa1\xe8\xae\xbe\xe7\xbd\xae\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84 Tag\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"Card.Played.Fireball\"\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\xa0\x87\xe7\xad\xbe (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8c\xba\xe5\x88\x86\xe4\xb8\x8d\xe5\x90\x8c\xe5\x8d\xa1\xe7\x89\x8c\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xe4\xba\x8b\xe4\xbb\xb6)\n\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba \"Card.Played\"\xef\xbc\x8c\xe5\xbb\xba\xe8\xae\xae\xe4\xb8\xba\xe6\xaf\x8f\xe5\xbc\xa0\xe5\x8d\xa1\xe8\xae\xbe\xe7\xbd\xae\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84 Tag\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"Card.Played.Fireball\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Card Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x95\xbf\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\n// \xe5\x9c\xa8\xe6\xbf\x80\xe6\xb4\xbb\xe6\x8a\x80\xe8\x83\xbd\xe5\x89\x8d\xef\xbc\x8c\xe5\xb1\x95\xe7\xa4\xba\xe7\xbb\x99\xe5\x8f\x8c\xe6\x96\xb9\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x95\xbf\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\n\xe5\x9c\xa8\xe6\xbf\x80\xe6\xb4\xbb\xe6\x8a\x80\xe8\x83\xbd\xe5\x89\x8d\xef\xbc\x8c\xe5\xb1\x95\xe7\xa4\xba\xe7\xbb\x99\xe5\x8f\x8c\xe6\x96\xb9\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipDisplay_MetaData[] = {
		{ "Category", "Card Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe8\xb7\xb3\xe8\xbf\x87\xe5\xb1\x95\xe7\xa4\xba\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe5\xbf\xab\xe9\x80\x9f\xe6\x96\xbd\xe6\xb3\x95\xe6\x88\x96\xe8\xa2\xab\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xb7\xb3\xe8\xbf\x87\xe5\xb1\x95\xe7\xa4\xba\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe5\xbf\xab\xe9\x80\x9f\xe6\x96\xbd\xe6\xb3\x95\xe6\x88\x96\xe8\xa2\xab\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCostChanged;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardDescription;
	static void NewProp_bConsumeAllMana_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeAllMana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CostModifier;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rarity;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardAbilityClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AOERadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighlightedTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HighlightedTiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTargetGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static void NewProp_bSkipDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoChessCardBase_CastRandomCardsOnTarget, "CastRandomCardsOnTarget" }, // 2174767054
		{ &Z_Construct_UFunction_UAutoChessCardBase_GetFinalCost, "GetFinalCost" }, // 2182352056
		{ &Z_Construct_UFunction_UAutoChessCardBase_ModifyCost, "ModifyCost" }, // 3632031566
		{ &Z_Construct_UFunction_UAutoChessCardBase_OnPlayed, "OnPlayed" }, // 3742680090
		{ &Z_Construct_UFunction_UAutoChessCardBase_OnRep_Cost, "OnRep_Cost" }, // 4270703214
		{ &Z_Construct_UFunction_UAutoChessCardBase_OnRep_CostModifier, "OnRep_CostModifier" }, // 2818930653
		{ &Z_Construct_UFunction_UAutoChessCardBase_SpawnProjectileFromSide, "SpawnProjectileFromSide" }, // 1655981194
		{ &Z_Construct_UFunction_UAutoChessCardBase_SpawnUnitFromRowName, "SpawnUnitFromRowName" }, // 4100449576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessCardBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_OnCostChanged = { "OnCostChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, OnCostChanged), Z_Construct_UDelegateFunction_AutoChess_OnCardCostChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCostChanged_MetaData), NewProp_OnCostChanged_MetaData) }; // 1301060768
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardName_MetaData), NewProp_CardName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CardDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDescription_MetaData), NewProp_CardDescription_MetaData) };
void Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bConsumeAllMana_SetBit(void* Obj)
{
	((UAutoChessCardBase*)Obj)->bConsumeAllMana = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bConsumeAllMana = { "bConsumeAllMana", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoChessCardBase), &Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bConsumeAllMana_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeAllMana_MetaData), NewProp_bConsumeAllMana_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Cost = { "Cost", "OnRep_Cost", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CostModifier = { "CostModifier", "OnRep_CostModifier", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CostModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostModifier_MetaData), NewProp_CostModifier_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClass_MetaData), NewProp_UnitClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Rarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rarity_MetaData), NewProp_Rarity_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardAbilityClass = { "CardAbilityClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CardAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardAbilityClass_MetaData), NewProp_CardAbilityClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, TargetType), Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 1537978006
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_AOERadius = { "AOERadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, AOERadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AOERadius_MetaData), NewProp_AOERadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_HighlightedTiles_Inner = { "HighlightedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_HighlightedTiles = { "HighlightedTiles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, HighlightedTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightedTiles_MetaData), NewProp_HighlightedTiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_LastTargetGridPos = { "LastTargetGridPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, LastTargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTargetGridPos_MetaData), NewProp_LastTargetGridPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TriggerTag = { "TriggerTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, TriggerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerTag_MetaData), NewProp_TriggerTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, DisplayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDuration_MetaData), NewProp_DisplayDuration_MetaData) };
void Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bSkipDisplay_SetBit(void* Obj)
{
	((UAutoChessCardBase*)Obj)->bSkipDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bSkipDisplay = { "bSkipDisplay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoChessCardBase), &Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bSkipDisplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipDisplay_MetaData), NewProp_bSkipDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_OnCostChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bConsumeAllMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CostModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Rarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_AOERadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_HighlightedTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_HighlightedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_LastTargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_TriggerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_DisplayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_bSkipDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoChessCardBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessCardBase_Statics::ClassParams = {
	&UAutoChessCardBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessCardBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessCardBase()
{
	if (!Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton, Z_Construct_UClass_UAutoChessCardBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessCardBase>()
{
	return UAutoChessCardBase::StaticClass();
}
void UAutoChessCardBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CardName(TEXT("CardName"));
	static const FName Name_CardDescription(TEXT("CardDescription"));
	static const FName Name_Cost(TEXT("Cost"));
	static const FName Name_CostModifier(TEXT("CostModifier"));
	static const FName Name_Icon(TEXT("Icon"));
	const bool bIsValid = true
		&& Name_CardName == ClassReps[(int32)ENetFields_Private::CardName].Property->GetFName()
		&& Name_CardDescription == ClassReps[(int32)ENetFields_Private::CardDescription].Property->GetFName()
		&& Name_Cost == ClassReps[(int32)ENetFields_Private::Cost].Property->GetFName()
		&& Name_CostModifier == ClassReps[(int32)ENetFields_Private::CostModifier].Property->GetFName()
		&& Name_Icon == ClassReps[(int32)ENetFields_Private::Icon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAutoChessCardBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessCardBase);
UAutoChessCardBase::~UAutoChessCardBase() {}
// End Class UAutoChessCardBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutoChessCardTargetType_StaticEnum, TEXT("EAutoChessCardTargetType"), &Z_Registration_Info_UEnum_EAutoChessCardTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1537978006U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessCardBase, UAutoChessCardBase::StaticClass, TEXT("UAutoChessCardBase"), &Z_Registration_Info_UClass_UAutoChessCardBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessCardBase), 232598166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_3208518585(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
