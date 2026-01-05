// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessPlayerController.h"
#include "AutoChess/AutoChessCardData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessPlayerController() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGhost_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessHighlightActor_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessPlayerController();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessPlayerController_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoChessCardRow();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FCardDisplayData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Delegate FOnManaUpdate
struct Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnManaUpdate_Parms
	{
		float CurrentMana;
		float MaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89 UI \xe6\x9b\xb4\xe6\x96\xb0\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89 UI \xe6\x9b\xb4\xe6\x96\xb0\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnManaUpdate_Parms, CurrentMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnManaUpdate_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnManaUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnManaUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnManaUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnManaUpdate, float CurrentMana, float MaxMana)
{
	struct _Script_AutoChess_eventOnManaUpdate_Parms
	{
		float CurrentMana;
		float MaxMana;
	};
	_Script_AutoChess_eventOnManaUpdate_Parms Parms;
	Parms.CurrentMana=CurrentMana;
	Parms.MaxMana=MaxMana;
	OnManaUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnManaUpdate

// Begin Delegate FOnHandUpdate
struct Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnHandUpdate_Parms
	{
		TArray<UAutoChessCardBase*> HandCards;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandCards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandCards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::NewProp_HandCards_Inner = { "HandCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::NewProp_HandCards = { "HandCards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnHandUpdate_Parms, HandCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCards_MetaData), NewProp_HandCards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::NewProp_HandCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::NewProp_HandCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnHandUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnHandUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnHandUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHandUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHandUpdate, TArray<UAutoChessCardBase*> const& HandCards)
{
	struct _Script_AutoChess_eventOnHandUpdate_Parms
	{
		TArray<UAutoChessCardBase*> HandCards;
	};
	_Script_AutoChess_eventOnHandUpdate_Parms Parms;
	Parms.HandCards=HandCards;
	OnHandUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHandUpdate

// Begin Delegate FOnDeckUpdate
struct Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnDeckUpdate_Parms
	{
		TArray<FName> DeckConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeckConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeckConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeckConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::NewProp_DeckConfig_Inner = { "DeckConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::NewProp_DeckConfig = { "DeckConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnDeckUpdate_Parms, DeckConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeckConfig_MetaData), NewProp_DeckConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::NewProp_DeckConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::NewProp_DeckConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnDeckUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnDeckUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnDeckUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeckUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnDeckUpdate, TArray<FName> const& DeckConfig)
{
	struct _Script_AutoChess_eventOnDeckUpdate_Parms
	{
		TArray<FName> DeckConfig;
	};
	_Script_AutoChess_eventOnDeckUpdate_Parms Parms;
	Parms.DeckConfig=DeckConfig;
	OnDeckUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeckUpdate

// Begin ScriptStruct FCardDisplayData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardDisplayData;
class UScriptStruct* FCardDisplayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardDisplayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardDisplayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardDisplayData, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("CardDisplayData"));
	}
	return Z_Registration_Info_UScriptStruct_CardDisplayData.OuterSingleton;
}
template<> AUTOCHESS_API UScriptStruct* StaticStruct<FCardDisplayData>()
{
	return FCardDisplayData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCardDisplayData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e RPC \xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e RPC \xe4\xbc\xa0\xe8\xbe\x93\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCost_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalCost_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeAllMana_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "CardDisplayData" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalCost;
	static void NewProp_bConsumeAllMana_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeAllMana;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardDisplayData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, CardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardName_MetaData), NewProp_CardName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, CardDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDescription_MetaData), NewProp_CardDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_BaseCost = { "BaseCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, BaseCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCost_MetaData), NewProp_BaseCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_FinalCost = { "FinalCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, FinalCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalCost_MetaData), NewProp_FinalCost_MetaData) };
void Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_bConsumeAllMana_SetBit(void* Obj)
{
	((FCardDisplayData*)Obj)->bConsumeAllMana = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_bConsumeAllMana = { "bConsumeAllMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCardDisplayData), &Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_bConsumeAllMana_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeAllMana_MetaData), NewProp_bConsumeAllMana_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDisplayData, DisplayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDuration_MetaData), NewProp_DisplayDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardDisplayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_CardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_CardDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_BaseCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_FinalCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_bConsumeAllMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewProp_DisplayDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDisplayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardDisplayData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
	nullptr,
	&NewStructOps,
	"CardDisplayData",
	Z_Construct_UScriptStruct_FCardDisplayData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDisplayData_Statics::PropPointers),
	sizeof(FCardDisplayData),
	alignof(FCardDisplayData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDisplayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardDisplayData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCardDisplayData()
{
	if (!Z_Registration_Info_UScriptStruct_CardDisplayData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardDisplayData.InnerSingleton, Z_Construct_UScriptStruct_FCardDisplayData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CardDisplayData.InnerSingleton;
}
// End ScriptStruct FCardDisplayData

// Begin Delegate FOnCardDisplayed
struct Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnCardDisplayed_Parms
	{
		FCardDisplayData CardData;
		APlayerController* Caster;
		AActor* Target;
		FIntPoint TargetGridPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnCardDisplayed_Parms, CardData), Z_Construct_UScriptStruct_FCardDisplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardData_MetaData), NewProp_CardData_MetaData) }; // 1569734733
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnCardDisplayed_Parms, Caster), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnCardDisplayed_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnCardDisplayed_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_CardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_Caster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::NewProp_TargetGridPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnCardDisplayed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::_Script_AutoChess_eventOnCardDisplayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::_Script_AutoChess_eventOnCardDisplayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCardDisplayed_DelegateWrapper(const FMulticastScriptDelegate& OnCardDisplayed, FCardDisplayData const& CardData, APlayerController* Caster, AActor* Target, FIntPoint TargetGridPos)
{
	struct _Script_AutoChess_eventOnCardDisplayed_Parms
	{
		FCardDisplayData CardData;
		APlayerController* Caster;
		AActor* Target;
		FIntPoint TargetGridPos;
	};
	_Script_AutoChess_eventOnCardDisplayed_Parms Parms;
	Parms.CardData=CardData;
	Parms.Caster=Caster;
	Parms.Target=Target;
	Parms.TargetGridPos=TargetGridPos;
	OnCardDisplayed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCardDisplayed

// Begin Delegate FOnGoldUpdate
struct Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics
{
	struct _Script_AutoChess_eventOnGoldUpdate_Parms
	{
		int32 CurrentGold;
		int32 Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::NewProp_CurrentGold = { "CurrentGold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnGoldUpdate_Parms, CurrentGold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AutoChess_eventOnGoldUpdate_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::NewProp_CurrentGold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoChess, nullptr, "OnGoldUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnGoldUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::_Script_AutoChess_eventOnGoldUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AutoChess_OnGoldUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGoldUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGoldUpdate, int32 CurrentGold, int32 Delta)
{
	struct _Script_AutoChess_eventOnGoldUpdate_Parms
	{
		int32 CurrentGold;
		int32 Delta;
	};
	_Script_AutoChess_eventOnGoldUpdate_Parms Parms;
	Parms.CurrentGold=CurrentGold;
	Parms.Delta=Delta;
	OnGoldUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGoldUpdate

// Begin Class AAutoChessPlayerController Function AddMana
struct Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics
{
	struct AutoChessPlayerController_eventAddMana_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa2\x9e\xe5\x8a\xa0\xe6\xb3\x95\xe5\x8a\x9b (\xe7\x94\xa8\xe4\xba\x8e\xe6\xb3\x95\xe6\x9c\xaf\xe6\x95\x88\xe6\x9e\x9c)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\x8a\xa0\xe6\xb3\x95\xe5\x8a\x9b (\xe7\x94\xa8\xe4\xba\x8e\xe6\xb3\x95\xe6\x9c\xaf\xe6\x95\x88\xe6\x9e\x9c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventAddMana_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "AddMana", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::AutoChessPlayerController_eventAddMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::AutoChessPlayerController_eventAddMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_AddMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_AddMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execAddMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMana(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function AddMana

// Begin Class AAutoChessPlayerController Function BP_OnMatchEnded
struct AutoChessPlayerController_eventBP_OnMatchEnded_Parms
{
	int32 WinnerTeamID;
};
static FName NAME_AAutoChessPlayerController_BP_OnMatchEnded = FName(TEXT("BP_OnMatchEnded"));
void AAutoChessPlayerController::BP_OnMatchEnded(int32 WinnerTeamID)
{
	AutoChessPlayerController_eventBP_OnMatchEnded_Parms Parms;
	Parms.WinnerTeamID=WinnerTeamID;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_BP_OnMatchEnded),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe7\x9a\x84\xe6\xaf\x94\xe8\xb5\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe9\x80\xbb\xe8\xbe\x91 (\xe7\x94\xa8\xe4\xba\x8e\xe5\xbc\xb9\xe5\x87\xba UI)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe7\x9a\x84\xe6\xaf\x94\xe8\xb5\x9b\xe7\xbb\x93\xe6\x9d\x9f\xe9\x80\xbb\xe8\xbe\x91 (\xe7\x94\xa8\xe4\xba\x8e\xe5\xbc\xb9\xe5\x87\xba UI)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventBP_OnMatchEnded_Parms, WinnerTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::NewProp_WinnerTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "BP_OnMatchEnded", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::PropPointers), sizeof(AutoChessPlayerController_eventBP_OnMatchEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventBP_OnMatchEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAutoChessPlayerController Function BP_OnMatchEnded

// Begin Class AAutoChessPlayerController Function BuyCard
struct Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics
{
	struct AutoChessPlayerController_eventBuyCard_Parms
	{
		TSubclassOf<UAutoChessCardBase> CardClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe5\x8d\xa1\xe7\x89\x8c\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe5\x8d\xa1\xe7\x89\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::NewProp_CardClass = { "CardClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventBuyCard_Parms, CardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::NewProp_CardClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "BuyCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::AutoChessPlayerController_eventBuyCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::AutoChessPlayerController_eventBuyCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_BuyCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_BuyCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execBuyCard)
{
	P_GET_OBJECT(UClass,Z_Param_CardClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuyCard(Z_Param_CardClass);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function BuyCard

// Begin Class AAutoChessPlayerController Function Client_HideCardDisplay
static FName NAME_AAutoChessPlayerController_Client_HideCardDisplay = FName(TEXT("Client_HideCardDisplay"));
void AAutoChessPlayerController::Client_HideCardDisplay()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Client_HideCardDisplay),NULL);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe9\x9a\x90\xe8\x97\x8f\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe9\x9a\x90\xe8\x97\x8f\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_HideCardDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_HideCardDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_HideCardDisplay_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_HideCardDisplay

// Begin Class AAutoChessPlayerController Function Client_MatchEnded
struct AutoChessPlayerController_eventClient_MatchEnded_Parms
{
	int32 WinnerTeamID;
};
static FName NAME_AAutoChessPlayerController_Client_MatchEnded = FName(TEXT("Client_MatchEnded"));
void AAutoChessPlayerController::Client_MatchEnded(int32 WinnerTeamID)
{
	AutoChessPlayerController_eventClient_MatchEnded_Parms Parms;
	Parms.WinnerTeamID=WinnerTeamID;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Client_MatchEnded),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xbc\xba\xe5\x88\xb6\xe7\xbb\x93\xe6\x9d\x9f\xe6\xaf\x94\xe8\xb5\x9b (\xe7\x94\xa8\xe4\xba\x8e\xe7\xa1\xae\xe4\xbf\x9d UI \xe5\xbc\xb9\xe5\x87\xba)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xbc\xba\xe5\x88\xb6\xe7\xbb\x93\xe6\x9d\x9f\xe6\xaf\x94\xe8\xb5\x9b (\xe7\x94\xa8\xe4\xba\x8e\xe7\xa1\xae\xe4\xbf\x9d UI \xe5\xbc\xb9\xe5\x87\xba)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_MatchEnded_Parms, WinnerTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::NewProp_WinnerTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_MatchEnded", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::PropPointers), sizeof(AutoChessPlayerController_eventClient_MatchEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventClient_MatchEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_MatchEnded)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_MatchEnded_Implementation(Z_Param_WinnerTeamID);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_MatchEnded

// Begin Class AAutoChessPlayerController Function Client_RefreshDeck
static FName NAME_AAutoChessPlayerController_Client_RefreshDeck = FName(TEXT("Client_RefreshDeck"));
void AAutoChessPlayerController::Client_RefreshDeck()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Client_RefreshDeck),NULL);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_RefreshDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_RefreshDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_RefreshDeck_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_RefreshDeck

// Begin Class AAutoChessPlayerController Function Client_RefreshHand
static FName NAME_AAutoChessPlayerController_Client_RefreshHand = FName(TEXT("Client_RefreshHand"));
void AAutoChessPlayerController::Client_RefreshHand()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Client_RefreshHand),NULL);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\x88\xb7\xe6\x96\xb0\xe6\x89\x8b\xe7\x89\x8c UI\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\x88\xb7\xe6\x96\xb0\xe6\x89\x8b\xe7\x89\x8c UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_RefreshHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_RefreshHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_RefreshHand_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_RefreshHand

// Begin Class AAutoChessPlayerController Function Client_ReturnToMainMenu
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 (\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xb0\x83\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 (\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xb0\x83\xe7\x94\xa8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_ReturnToMainMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_ReturnToMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ReturnToMainMenu();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_ReturnToMainMenu

// Begin Class AAutoChessPlayerController Function Client_ShowCardDisplay
struct AutoChessPlayerController_eventClient_ShowCardDisplay_Parms
{
	FCardDisplayData CardData;
	AActor* Target;
	FIntPoint TargetGridPos;
	APlayerController* Caster;
	int32 AOERadius;
};
static FName NAME_AAutoChessPlayerController_Client_ShowCardDisplay = FName(TEXT("Client_ShowCardDisplay"));
void AAutoChessPlayerController::Client_ShowCardDisplay(FCardDisplayData const& CardData, AActor* Target, FIntPoint TargetGridPos, APlayerController* Caster, int32 AOERadius)
{
	AutoChessPlayerController_eventClient_ShowCardDisplay_Parms Parms;
	Parms.CardData=CardData;
	Parms.Target=Target;
	Parms.TargetGridPos=TargetGridPos;
	Parms.Caster=Caster;
	Parms.AOERadius=AOERadius;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Client_ShowCardDisplay),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x98\xbe\xe7\xa4\xba\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\x88\xe6\x9e\x9c (\xe9\xab\x98\xe4\xba\xae\xe6\xa0\xbc\xe5\xad\x90 + UI)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x98\xbe\xe7\xa4\xba\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe6\x95\x88\xe6\x9e\x9c (\xe9\xab\x98\xe4\xba\xae\xe6\xa0\xbc\xe5\xad\x90 + UI)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caster;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AOERadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms, CardData), Z_Construct_UScriptStruct_FCardDisplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardData_MetaData), NewProp_CardData_MetaData) }; // 1569734733
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms, Caster), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_AOERadius = { "AOERadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms, AOERadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_CardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_Caster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::NewProp_AOERadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Client_ShowCardDisplay", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::PropPointers), sizeof(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventClient_ShowCardDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execClient_ShowCardDisplay)
{
	P_GET_STRUCT(FCardDisplayData,Z_Param_CardData);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetGridPos);
	P_GET_OBJECT(APlayerController,Z_Param_Caster);
	P_GET_PROPERTY(FIntProperty,Z_Param_AOERadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ShowCardDisplay_Implementation(Z_Param_CardData,Z_Param_Target,Z_Param_TargetGridPos,Z_Param_Caster,Z_Param_AOERadius);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Client_ShowCardDisplay

// Begin Class AAutoChessPlayerController Function DrawCard
struct Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics
{
	struct AutoChessPlayerController_eventDrawCard_Parms
	{
		UAutoChessCardBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\xbd\xe7\x89\x8c\xe6\x8e\xa5\xe5\x8f\xa3\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\xbd\xe7\x89\x8c\xe6\x8e\xa5\xe5\x8f\xa3" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::AutoChessPlayerController_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::AutoChessPlayerController_eventDrawCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_DrawCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execDrawCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAutoChessCardBase**)Z_Param__Result=P_THIS->DrawCard();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function DrawCard

// Begin Class AAutoChessPlayerController Function DrawCards
struct Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics
{
	struct AutoChessPlayerController_eventDrawCards_Parms
	{
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventDrawCards_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "DrawCards", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::AutoChessPlayerController_eventDrawCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::AutoChessPlayerController_eventDrawCards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_DrawCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_DrawCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execDrawCards)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawCards(Z_Param_Count);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function DrawCards

// Begin Class AAutoChessPlayerController Function GetCardRowData
struct Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics
{
	struct AutoChessPlayerController_eventGetCardRowData_Parms
	{
		FName RowName;
		FAutoChessCardRow OutRow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventGetCardRowData_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventGetCardRowData_Parms, OutRow), Z_Construct_UScriptStruct_FAutoChessCardRow, METADATA_PARAMS(0, nullptr) }; // 1802650439
void Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventGetCardRowData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventGetCardRowData_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "GetCardRowData", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::AutoChessPlayerController_eventGetCardRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::AutoChessPlayerController_eventGetCardRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execGetCardRowData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_GET_STRUCT_REF(FAutoChessCardRow,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCardRowData(Z_Param_RowName,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function GetCardRowData

// Begin Class AAutoChessPlayerController Function GetCursorPosition
struct Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics
{
	struct AutoChessPlayerController_eventGetCursorPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\x89\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae (\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xa4\xe6\x96\xad\xe9\xbc\xa0\xe6\xa0\x87\xe6\x88\x96\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87)\n// \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\x89\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae (\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xa4\xe6\x96\xad\xe9\xbc\xa0\xe6\xa0\x87\xe6\x88\x96\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\x89\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae (\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xa4\xe6\x96\xad\xe9\xbc\xa0\xe6\xa0\x87\xe6\x88\x96\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87)\n\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\x89\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae (\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\xa4\xe6\x96\xad\xe9\xbc\xa0\xe6\xa0\x87\xe6\x88\x96\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventGetCursorPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "GetCursorPosition", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::AutoChessPlayerController_eventGetCursorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::AutoChessPlayerController_eventGetCursorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execGetCursorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCursorPosition();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function GetCursorPosition

// Begin Class AAutoChessPlayerController Function HostGame
struct Z_Construct_UFunction_AAutoChessPlayerController_HostGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Host\xef\xbc\x89\n// \xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\xb0\xe8\xbe\x93\xe5\x85\xa5 HostGame\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Host\xef\xbc\x89\n\xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\xb0\xe8\xbe\x93\xe5\x85\xa5 HostGame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_HostGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "HostGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_HostGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_HostGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_HostGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_HostGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execHostGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostGame();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function HostGame

// Begin Class AAutoChessPlayerController Function JoinGame
struct Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics
{
	struct AutoChessPlayerController_eventJoinGame_Parms
	{
		FString Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Client\xef\xbc\x89\n// \xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\xb0\xe8\xbe\x93\xe5\x85\xa5 JoinGame 192.168.1.100\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Client\xef\xbc\x89\n\xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\xb0\xe8\xbe\x93\xe5\x85\xa5 JoinGame 192.168.1.100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventJoinGame_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "JoinGame", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::AutoChessPlayerController_eventJoinGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::AutoChessPlayerController_eventJoinGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_JoinGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_JoinGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execJoinGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinGame(Z_Param_Address);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function JoinGame

// Begin Class AAutoChessPlayerController Function OnDebugMatchWinnerChanged
struct Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics
{
	struct AutoChessPlayerController_eventOnDebugMatchWinnerChanged_Parms
	{
		int32 WinnerTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventOnDebugMatchWinnerChanged_Parms, WinnerTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::NewProp_WinnerTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "OnDebugMatchWinnerChanged", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::AutoChessPlayerController_eventOnDebugMatchWinnerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::AutoChessPlayerController_eventOnDebugMatchWinnerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execOnDebugMatchWinnerChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDebugMatchWinnerChanged(Z_Param_WinnerTeamID);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function OnDebugMatchWinnerChanged

// Begin Class AAutoChessPlayerController Function OnRep_DeckConfig
struct Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "OnRep_DeckConfig", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execOnRep_DeckConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DeckConfig();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function OnRep_DeckConfig

// Begin Class AAutoChessPlayerController Function OnRep_HandCards
struct Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "OnRep_HandCards", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execOnRep_HandCards)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HandCards();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function OnRep_HandCards

// Begin Class AAutoChessPlayerController Function OnRep_Mana
struct Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "OnRep_Mana", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execOnRep_Mana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function OnRep_Mana

// Begin Class AAutoChessPlayerController Function PlaceUnit
struct Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics
{
	struct AutoChessPlayerController_eventPlaceUnit_Parms
	{
		TSubclassOf<UAutoChessCardBase> CardClass;
		int32 GridX;
		int32 GridY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbe\xe7\xbd\xae\xe5\x8d\x95\xe4\xbd\x8d (\xe4\xbb\x8e\xe6\x89\x8b\xe7\x89\x8c\xe5\x88\xb0\xe6\xa3\x8b\xe7\x9b\x98)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbe\xe7\xbd\xae\xe5\x8d\x95\xe4\xbd\x8d (\xe4\xbb\x8e\xe6\x89\x8b\xe7\x89\x8c\xe5\x88\xb0\xe6\xa3\x8b\xe7\x9b\x98)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_CardClass = { "CardClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlaceUnit_Parms, CardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlaceUnit_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlaceUnit_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_CardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::NewProp_GridY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "PlaceUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::AutoChessPlayerController_eventPlaceUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::AutoChessPlayerController_eventPlaceUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execPlaceUnit)
{
	P_GET_OBJECT(UClass,Z_Param_CardClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceUnit(Z_Param_CardClass,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function PlaceUnit

// Begin Class AAutoChessPlayerController Function PlayCard
struct Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics
{
	struct AutoChessPlayerController_eventPlayCard_Parms
	{
		UAutoChessCardBase* Card;
		AActor* Target;
		FIntPoint TargetGridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x9d\xe8\xaf\x95\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x9d\xe8\xaf\x95\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlayCard_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlayCard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlayCard_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventPlayCard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventPlayCard_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "PlayCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::AutoChessPlayerController_eventPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::AutoChessPlayerController_eventPlayCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_PlayCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execPlayCard)
{
	P_GET_OBJECT(UAutoChessCardBase,Z_Param_Card);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetGridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayCard(Z_Param_Card,Z_Param_Target,Z_Param_TargetGridPos);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function PlayCard

// Begin Class AAutoChessPlayerController Function RefreshShop
static FName NAME_AAutoChessPlayerController_RefreshShop = FName(TEXT("RefreshShop"));
void AAutoChessPlayerController::RefreshShop()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_RefreshShop),NULL);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\xb7\xe6\x96\xb0\xe5\x95\x86\xe5\xba\x97 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe5\x95\x86\xe5\xba\x97 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x85\xb7\xe4\xbd\x93\xe9\x80\xbb\xe8\xbe\x91)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "RefreshShop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAutoChessPlayerController Function RefreshShop

// Begin Class AAutoChessPlayerController Function SellUnit
struct Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics
{
	struct AutoChessPlayerController_eventSellUnit_Parms
	{
		AAutoChessUnitBase* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xba\xe5\x94\xae\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe5\x94\xae\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventSellUnit_Parms, Unit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "SellUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::AutoChessPlayerController_eventSellUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::AutoChessPlayerController_eventSellUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_SellUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_SellUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execSellUnit)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SellUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function SellUnit

// Begin Class AAutoChessPlayerController Function Server_AddCardToDeck
struct AutoChessPlayerController_eventServer_AddCardToDeck_Parms
{
	FName CardRowName;
};
static FName NAME_AAutoChessPlayerController_Server_AddCardToDeck = FName(TEXT("Server_AddCardToDeck"));
void AAutoChessPlayerController::Server_AddCardToDeck(FName CardRowName)
{
	AutoChessPlayerController_eventServer_AddCardToDeck_Parms Parms;
	Parms.CardRowName=CardRowName;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_AddCardToDeck),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CardRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::NewProp_CardRowName = { "CardRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_AddCardToDeck_Parms, CardRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::NewProp_CardRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_AddCardToDeck", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_AddCardToDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_AddCardToDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_AddCardToDeck)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CardRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddCardToDeck_Implementation(Z_Param_CardRowName);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_AddCardToDeck

// Begin Class AAutoChessPlayerController Function Server_BuyCard
struct AutoChessPlayerController_eventServer_BuyCard_Parms
{
	TSubclassOf<UAutoChessCardBase> CardClass;
};
static FName NAME_AAutoChessPlayerController_Server_BuyCard = FName(TEXT("Server_BuyCard"));
void AAutoChessPlayerController::Server_BuyCard(TSubclassOf<UAutoChessCardBase> CardClass)
{
	AutoChessPlayerController_eventServer_BuyCard_Parms Parms;
	Parms.CardClass=CardClass;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_BuyCard),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::NewProp_CardClass = { "CardClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_BuyCard_Parms, CardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::NewProp_CardClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_BuyCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_BuyCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_BuyCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_BuyCard)
{
	P_GET_OBJECT(UClass,Z_Param_CardClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_BuyCard_Implementation(Z_Param_CardClass);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_BuyCard

// Begin Class AAutoChessPlayerController Function Server_BuyUnit
struct AutoChessPlayerController_eventServer_BuyUnit_Parms
{
	FName UnitRowName;
};
static FName NAME_AAutoChessPlayerController_Server_BuyUnit = FName(TEXT("Server_BuyUnit"));
void AAutoChessPlayerController::Server_BuyUnit(FName UnitRowName)
{
	AutoChessPlayerController_eventServer_BuyUnit_Parms Parms;
	Parms.UnitRowName=UnitRowName;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_BuyUnit),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Shop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xb4\xad\xe4\xb9\xb0\xe5\xb9\xb6\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\x95\xe4\xbd\x8d (\xe9\x80\x9a\xe8\xbf\x87 DataTable RowName)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xb4\xad\xe4\xb9\xb0\xe5\xb9\xb6\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\x95\xe4\xbd\x8d (\xe9\x80\x9a\xe8\xbf\x87 DataTable RowName)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnitRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::NewProp_UnitRowName = { "UnitRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_BuyUnit_Parms, UnitRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::NewProp_UnitRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_BuyUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_BuyUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_BuyUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_BuyUnit)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_UnitRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_BuyUnit_Implementation(Z_Param_UnitRowName);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_BuyUnit

// Begin Class AAutoChessPlayerController Function Server_MoveUnit
struct AutoChessPlayerController_eventServer_MoveUnit_Parms
{
	AAutoChessUnitBase* Unit;
	int32 TargetGridX;
	int32 TargetGridY;
};
static FName NAME_AAutoChessPlayerController_Server_MoveUnit = FName(TEXT("Server_MoveUnit"));
void AAutoChessPlayerController::Server_MoveUnit(AAutoChessUnitBase* Unit, int32 TargetGridX, int32 TargetGridY)
{
	AutoChessPlayerController_eventServer_MoveUnit_Parms Parms;
	Parms.Unit=Unit;
	Parms.TargetGridX=TargetGridX;
	Parms.TargetGridY=TargetGridY;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_MoveUnit),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetGridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetGridY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_MoveUnit_Parms, Unit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_TargetGridX = { "TargetGridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_MoveUnit_Parms, TargetGridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_TargetGridY = { "TargetGridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_MoveUnit_Parms, TargetGridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_TargetGridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::NewProp_TargetGridY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_MoveUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_MoveUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_MoveUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_MoveUnit)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Unit);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetGridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetGridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_MoveUnit_Implementation(Z_Param_Unit,Z_Param_TargetGridX,Z_Param_TargetGridY);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_MoveUnit

// Begin Class AAutoChessPlayerController Function Server_PlaceUnit
struct AutoChessPlayerController_eventServer_PlaceUnit_Parms
{
	TSubclassOf<UAutoChessCardBase> CardClass;
	int32 GridX;
	int32 GridY;
};
static FName NAME_AAutoChessPlayerController_Server_PlaceUnit = FName(TEXT("Server_PlaceUnit"));
void AAutoChessPlayerController::Server_PlaceUnit(TSubclassOf<UAutoChessCardBase> CardClass, int32 GridX, int32 GridY)
{
	AutoChessPlayerController_eventServer_PlaceUnit_Parms Parms;
	Parms.CardClass=CardClass;
	Parms.GridX=GridX;
	Parms.GridY=GridY;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_PlaceUnit),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_CardClass = { "CardClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlaceUnit_Parms, CardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlaceUnit_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlaceUnit_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_CardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::NewProp_GridY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_PlaceUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_PlaceUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_PlaceUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_PlaceUnit)
{
	P_GET_OBJECT(UClass,Z_Param_CardClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlaceUnit_Implementation(Z_Param_CardClass,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_PlaceUnit

// Begin Class AAutoChessPlayerController Function Server_PlayCard
struct AutoChessPlayerController_eventServer_PlayCard_Parms
{
	UAutoChessCardBase* Card;
	AActor* Target;
	int32 GridX;
	int32 GridY;
};
static FName NAME_AAutoChessPlayerController_Server_PlayCard = FName(TEXT("Server_PlayCard"));
void AAutoChessPlayerController::Server_PlayCard(UAutoChessCardBase* Card, AActor* Target, int32 GridX, int32 GridY)
{
	AutoChessPlayerController_eventServer_PlayCard_Parms Parms;
	Parms.Card=Card;
	Parms.Target=Target;
	Parms.GridX=GridX;
	Parms.GridY=GridY;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_PlayCard),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlayCard_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlayCard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlayCard_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_PlayCard_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::NewProp_GridY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_PlayCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_PlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_PlayCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_PlayCard)
{
	P_GET_OBJECT(UAutoChessCardBase,Z_Param_Card);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlayCard_Implementation(Z_Param_Card,Z_Param_Target,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_PlayCard

// Begin Class AAutoChessPlayerController Function Server_RemoveCardFromDeck
struct AutoChessPlayerController_eventServer_RemoveCardFromDeck_Parms
{
	FName CardRowName;
};
static FName NAME_AAutoChessPlayerController_Server_RemoveCardFromDeck = FName(TEXT("Server_RemoveCardFromDeck"));
void AAutoChessPlayerController::Server_RemoveCardFromDeck(FName CardRowName)
{
	AutoChessPlayerController_eventServer_RemoveCardFromDeck_Parms Parms;
	Parms.CardRowName=CardRowName;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_RemoveCardFromDeck),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CardRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::NewProp_CardRowName = { "CardRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_RemoveCardFromDeck_Parms, CardRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::NewProp_CardRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_RemoveCardFromDeck", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_RemoveCardFromDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_RemoveCardFromDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_RemoveCardFromDeck)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CardRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RemoveCardFromDeck_Implementation(Z_Param_CardRowName);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_RemoveCardFromDeck

// Begin Class AAutoChessPlayerController Function Server_RequestRematch
struct AutoChessPlayerController_eventServer_RequestRematch_Parms
{
	bool bRematch;
};
static FName NAME_AAutoChessPlayerController_Server_RequestRematch = FName(TEXT("Server_RequestRematch"));
void AAutoChessPlayerController::Server_RequestRematch(bool bRematch)
{
	AutoChessPlayerController_eventServer_RequestRematch_Parms Parms;
	Parms.bRematch=bRematch ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_RequestRematch),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xb7\xe6\xb1\x82\xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRematch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRematch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::NewProp_bRematch_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventServer_RequestRematch_Parms*)Obj)->bRematch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::NewProp_bRematch = { "bRematch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventServer_RequestRematch_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::NewProp_bRematch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::NewProp_bRematch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_RequestRematch", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_RequestRematch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_RequestRematch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_RequestRematch)
{
	P_GET_UBOOL(Z_Param_bRematch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestRematch_Implementation(Z_Param_bRematch);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_RequestRematch

// Begin Class AAutoChessPlayerController Function Server_SellAllUnits
struct AutoChessPlayerController_eventServer_SellAllUnits_Parms
{
	int32 TargetTeamID;
};
static FName NAME_AAutoChessPlayerController_Server_SellAllUnits = FName(TEXT("Server_SellAllUnits"));
void AAutoChessPlayerController::Server_SellAllUnits(int32 TargetTeamID)
{
	AutoChessPlayerController_eventServer_SellAllUnits_Parms Parms;
	Parms.TargetTeamID=TargetTeamID;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_SellAllUnits),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x96\xe5\x87\xba\xe5\x9c\xba\xe4\xb8\x8a\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x8b\xe6\x96\xb9\xe6\xa3\x8b\xe5\xad\x90\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x96\xe5\x87\xba\xe5\x9c\xba\xe4\xb8\x8a\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x8b\xe6\x96\xb9\xe6\xa3\x8b\xe5\xad\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::NewProp_TargetTeamID = { "TargetTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_SellAllUnits_Parms, TargetTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::NewProp_TargetTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_SellAllUnits", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_SellAllUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_SellAllUnits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_SellAllUnits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SellAllUnits_Implementation(Z_Param_TargetTeamID);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_SellAllUnits

// Begin Class AAutoChessPlayerController Function Server_SellUnit
struct AutoChessPlayerController_eventServer_SellUnit_Parms
{
	AAutoChessUnitBase* Unit;
};
static FName NAME_AAutoChessPlayerController_Server_SellUnit = FName(TEXT("Server_SellUnit"));
void AAutoChessPlayerController::Server_SellUnit(AAutoChessUnitBase* Unit)
{
	AutoChessPlayerController_eventServer_SellUnit_Parms Parms;
	Parms.Unit=Unit;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_SellUnit),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xba\xe5\x94\xae\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xba\xe5\x94\xae\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_SellUnit_Parms, Unit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_SellUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_SellUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_SellUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_SellUnit)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SellUnit_Implementation(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_SellUnit

// Begin Class AAutoChessPlayerController Function Server_SetPlayerReady
struct AutoChessPlayerController_eventServer_SetPlayerReady_Parms
{
	bool bReady;
};
static FName NAME_AAutoChessPlayerController_Server_SetPlayerReady = FName(TEXT("Server_SetPlayerReady"));
void AAutoChessPlayerController::Server_SetPlayerReady(bool bReady)
{
	AutoChessPlayerController_eventServer_SetPlayerReady_Parms Parms;
	Parms.bReady=bReady ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_SetPlayerReady),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe5\xae\xb6\xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x8e\xa9\xe5\xae\xb6\xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventServer_SetPlayerReady_Parms*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventServer_SetPlayerReady_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::NewProp_bReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_SetPlayerReady", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_SetPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_SetPlayerReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_SetPlayerReady)
{
	P_GET_UBOOL(Z_Param_bReady);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetPlayerReady_Implementation(Z_Param_bReady);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_SetPlayerReady

// Begin Class AAutoChessPlayerController Function Server_SummonUnit
struct AutoChessPlayerController_eventServer_SummonUnit_Parms
{
	FName UnitRowName;
	int32 GridX;
	int32 GridY;
};
static FName NAME_AAutoChessPlayerController_Server_SummonUnit = FName(TEXT("Server_SummonUnit"));
void AAutoChessPlayerController::Server_SummonUnit(FName UnitRowName, int32 GridX, int32 GridY)
{
	AutoChessPlayerController_eventServer_SummonUnit_Parms Parms;
	Parms.UnitRowName=UnitRowName;
	Parms.GridX=GridX;
	Parms.GridY=GridY;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessPlayerController_Server_SummonUnit),&Parms);
}
struct Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\xac\xe5\x94\xa4\xe5\x8d\x95\xe4\xbd\x8d\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xac\xe5\x94\xa4\xe5\x8d\x95\xe4\xbd\x8d\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnitRowName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_UnitRowName = { "UnitRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_SummonUnit_Parms, UnitRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_SummonUnit_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventServer_SummonUnit_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_UnitRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::NewProp_GridY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "Server_SummonUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::PropPointers), sizeof(AutoChessPlayerController_eventServer_SummonUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessPlayerController_eventServer_SummonUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execServer_SummonUnit)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_UnitRowName);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SummonUnit_Implementation(Z_Param_UnitRowName,Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function Server_SummonUnit

// Begin Class AAutoChessPlayerController Function TryPlayCardAtPosition
struct Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics
{
	struct AutoChessPlayerController_eventTryPlayCardAtPosition_Parms
	{
		UAutoChessCardBase* Card;
		FVector2D ScreenPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x9d\xe8\xaf\x95\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x8f\xe5\xb9\x95\xe4\xbd\x8d\xe7\xbd\xae\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c (\xe7\x94\xa8\xe4\xba\x8e\xe6\x8b\x96\xe6\x8b\xbd\xe9\x87\x8a\xe6\x94\xbe)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x9d\xe8\xaf\x95\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x8f\xe5\xb9\x95\xe4\xbd\x8d\xe7\xbd\xae\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c (\xe7\x94\xa8\xe4\xba\x8e\xe6\x8b\x96\xe6\x8b\xbd\xe9\x87\x8a\xe6\x94\xbe)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventTryPlayCardAtPosition_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventTryPlayCardAtPosition_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPosition_MetaData), NewProp_ScreenPosition_MetaData) };
void Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventTryPlayCardAtPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventTryPlayCardAtPosition_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "TryPlayCardAtPosition", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::AutoChessPlayerController_eventTryPlayCardAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::AutoChessPlayerController_eventTryPlayCardAtPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execTryPlayCardAtPosition)
{
	P_GET_OBJECT(UAutoChessCardBase,Z_Param_Card);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPlayCardAtPosition(Z_Param_Card,Z_Param_Out_ScreenPosition);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function TryPlayCardAtPosition

// Begin Class AAutoChessPlayerController Function UpdateDragHighlight
struct Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics
{
	struct AutoChessPlayerController_eventUpdateDragHighlight_Parms
	{
		UAutoChessCardBase* Card;
		FVector2D ScreenPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\x8b\x96\xe6\x8b\xbd\xe9\xab\x98\xe4\xba\xae (\xe7\x94\xa8\xe4\xba\x8e\xe6\x8b\x96\xe6\x8b\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba\xe8\x8c\x83\xe5\x9b\xb4)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x8b\x96\xe6\x8b\xbd\xe9\xab\x98\xe4\xba\xae (\xe7\x94\xa8\xe4\xba\x8e\xe6\x8b\x96\xe6\x8b\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba\xe8\x8c\x83\xe5\x9b\xb4)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventUpdateDragHighlight_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventUpdateDragHighlight_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPosition_MetaData), NewProp_ScreenPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::NewProp_ScreenPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "UpdateDragHighlight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::AutoChessPlayerController_eventUpdateDragHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::AutoChessPlayerController_eventUpdateDragHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessPlayerController::execUpdateDragHighlight)
{
	P_GET_OBJECT(UAutoChessCardBase,Z_Param_Card);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDragHighlight(Z_Param_Card,Z_Param_Out_ScreenPosition);
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function UpdateDragHighlight

// Begin Class AAutoChessPlayerController
void AAutoChessPlayerController::StaticRegisterNativesAAutoChessPlayerController()
{
	UClass* Class = AAutoChessPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMana", &AAutoChessPlayerController::execAddMana },
		{ "BuyCard", &AAutoChessPlayerController::execBuyCard },
		{ "Client_HideCardDisplay", &AAutoChessPlayerController::execClient_HideCardDisplay },
		{ "Client_MatchEnded", &AAutoChessPlayerController::execClient_MatchEnded },
		{ "Client_RefreshDeck", &AAutoChessPlayerController::execClient_RefreshDeck },
		{ "Client_RefreshHand", &AAutoChessPlayerController::execClient_RefreshHand },
		{ "Client_ReturnToMainMenu", &AAutoChessPlayerController::execClient_ReturnToMainMenu },
		{ "Client_ShowCardDisplay", &AAutoChessPlayerController::execClient_ShowCardDisplay },
		{ "DrawCard", &AAutoChessPlayerController::execDrawCard },
		{ "DrawCards", &AAutoChessPlayerController::execDrawCards },
		{ "GetCardRowData", &AAutoChessPlayerController::execGetCardRowData },
		{ "GetCursorPosition", &AAutoChessPlayerController::execGetCursorPosition },
		{ "HostGame", &AAutoChessPlayerController::execHostGame },
		{ "JoinGame", &AAutoChessPlayerController::execJoinGame },
		{ "OnDebugMatchWinnerChanged", &AAutoChessPlayerController::execOnDebugMatchWinnerChanged },
		{ "OnRep_DeckConfig", &AAutoChessPlayerController::execOnRep_DeckConfig },
		{ "OnRep_HandCards", &AAutoChessPlayerController::execOnRep_HandCards },
		{ "OnRep_Mana", &AAutoChessPlayerController::execOnRep_Mana },
		{ "PlaceUnit", &AAutoChessPlayerController::execPlaceUnit },
		{ "PlayCard", &AAutoChessPlayerController::execPlayCard },
		{ "SellUnit", &AAutoChessPlayerController::execSellUnit },
		{ "Server_AddCardToDeck", &AAutoChessPlayerController::execServer_AddCardToDeck },
		{ "Server_BuyCard", &AAutoChessPlayerController::execServer_BuyCard },
		{ "Server_BuyUnit", &AAutoChessPlayerController::execServer_BuyUnit },
		{ "Server_MoveUnit", &AAutoChessPlayerController::execServer_MoveUnit },
		{ "Server_PlaceUnit", &AAutoChessPlayerController::execServer_PlaceUnit },
		{ "Server_PlayCard", &AAutoChessPlayerController::execServer_PlayCard },
		{ "Server_RemoveCardFromDeck", &AAutoChessPlayerController::execServer_RemoveCardFromDeck },
		{ "Server_RequestRematch", &AAutoChessPlayerController::execServer_RequestRematch },
		{ "Server_SellAllUnits", &AAutoChessPlayerController::execServer_SellAllUnits },
		{ "Server_SellUnit", &AAutoChessPlayerController::execServer_SellUnit },
		{ "Server_SetPlayerReady", &AAutoChessPlayerController::execServer_SetPlayerReady },
		{ "Server_SummonUnit", &AAutoChessPlayerController::execServer_SummonUnit },
		{ "TryPlayCardAtPosition", &AAutoChessPlayerController::execTryPlayCardAtPosition },
		{ "UpdateDragHighlight", &AAutoChessPlayerController::execUpdateDragHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessPlayerController);
UClass* Z_Construct_UClass_AAutoChessPlayerController_NoRegister()
{
	return AAutoChessPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAutoChessPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AutoChessPlayerController.h" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitDataTable_MetaData[] = {
		{ "Category", "AutoChess|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x95\xe4\xbd\x8d\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDataTable_MetaData[] = {
		{ "Category", "AutoChess|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- GAS \xe7\xbb\x84\xe4\xbb\xb6 ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- GAS \xe7\xbb\x84\xe4\xbb\xb6 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "AutoChess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCardClass_MetaData[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe7\xb1\xbb (\xe5\x87\x86\xe5\xa4\x87\xe6\x94\xbe\xe7\xbd\xae)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe7\xb1\xbb (\xe5\x87\x86\xe5\xa4\x87\xe6\x94\xbe\xe7\xbd\xae)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnit_MetaData[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d (\xe7\x94\xa8\xe4\xba\x8e\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x88\x96\xe5\x87\xba\xe5\x94\xae)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x89\xe4\xb8\xad\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d (\xe7\x94\xa8\xe4\xba\x8e\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x88\x96\xe5\x87\xba\xe5\x94\xae)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragGhost_MetaData[] = {
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDClass_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UI \xe9\x80\xbb\xe8\xbe\x91 ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI \xe9\x80\xbb\xe8\xbe\x91 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDWidget_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb HUD \xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb HUD \xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualCursorClass_MetaData[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87 Widget \xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87 Widget \xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualCursorWidget_MetaData[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87\xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x99\x9a\xe6\x8b\x9f\xe5\x85\x89\xe6\xa0\x87\xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorMoveSpeed_MetaData[] = {
		{ "Category", "AutoChess|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\x89\xe6\xa0\x87\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (\xe5\x83\x8f\xe7\xb4\xa0/\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x89\xe6\xa0\x87\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (\xe5\x83\x8f\xe7\xb4\xa0/\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\x95\xe5\x8a\x9b\xe5\x9b\x9e\xe5\xa4\x8d\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xaf\x8f\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe5\x8a\x9b\xe5\x9b\x9e\xe5\xa4\x8d\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xaf\x8f\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeckConfig_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\x8c\xe5\xba\x93\xe9\x85\x8d\xe7\xbd\xae (\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d\xe5\x88\x97\xe8\xa1\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x8c\xe5\xba\x93\xe9\x85\x8d\xe7\xbd\xae (\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe8\xa1\x8c\xe5\x90\x8d\xe5\x88\x97\xe8\xa1\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandCards_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x8b\xe7\x89\x8c (\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe5\xaf\xb9\xe8\xb1\xa1)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x8b\xe7\x89\x8c (\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\xe5\x90\x8e\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe5\xaf\xb9\xe8\xb1\xa1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawCardInterval_MetaData[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\xbd\xe7\x89\x8c\xe9\x97\xb4\xe9\x9a\x94 (\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\xbd\xe7\x89\x8c\xe9\x97\xb4\xe9\x9a\x94 (\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaUpdated_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandUpdated_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe7\x89\x8c\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe7\x89\x8c\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCardDisplayed_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeckUpdated_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\x8c\xe5\xba\x93\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x8c\xe5\xba\x93\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCardClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragGhost;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainHUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VirtualCursorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualCursorWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeckConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeckConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandCards;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawCardInterval;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCardDisplayed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeckUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessPlayerController_AddMana, "AddMana" }, // 1854996760
		{ &Z_Construct_UFunction_AAutoChessPlayerController_BP_OnMatchEnded, "BP_OnMatchEnded" }, // 852635252
		{ &Z_Construct_UFunction_AAutoChessPlayerController_BuyCard, "BuyCard" }, // 564924422
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_HideCardDisplay, "Client_HideCardDisplay" }, // 2575351283
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_MatchEnded, "Client_MatchEnded" }, // 1672630615
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshDeck, "Client_RefreshDeck" }, // 622468828
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_RefreshHand, "Client_RefreshHand" }, // 526522070
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_ReturnToMainMenu, "Client_ReturnToMainMenu" }, // 601527853
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Client_ShowCardDisplay, "Client_ShowCardDisplay" }, // 2444876624
		{ &Z_Construct_UFunction_AAutoChessPlayerController_DrawCard, "DrawCard" }, // 1713348605
		{ &Z_Construct_UFunction_AAutoChessPlayerController_DrawCards, "DrawCards" }, // 728687335
		{ &Z_Construct_UFunction_AAutoChessPlayerController_GetCardRowData, "GetCardRowData" }, // 81765782
		{ &Z_Construct_UFunction_AAutoChessPlayerController_GetCursorPosition, "GetCursorPosition" }, // 1269009474
		{ &Z_Construct_UFunction_AAutoChessPlayerController_HostGame, "HostGame" }, // 433675712
		{ &Z_Construct_UFunction_AAutoChessPlayerController_JoinGame, "JoinGame" }, // 2827352532
		{ &Z_Construct_UFunction_AAutoChessPlayerController_OnDebugMatchWinnerChanged, "OnDebugMatchWinnerChanged" }, // 1065136084
		{ &Z_Construct_UFunction_AAutoChessPlayerController_OnRep_DeckConfig, "OnRep_DeckConfig" }, // 3835431189
		{ &Z_Construct_UFunction_AAutoChessPlayerController_OnRep_HandCards, "OnRep_HandCards" }, // 2994885739
		{ &Z_Construct_UFunction_AAutoChessPlayerController_OnRep_Mana, "OnRep_Mana" }, // 44575286
		{ &Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit, "PlaceUnit" }, // 1670979043
		{ &Z_Construct_UFunction_AAutoChessPlayerController_PlayCard, "PlayCard" }, // 79853008
		{ &Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop, "RefreshShop" }, // 1906884202
		{ &Z_Construct_UFunction_AAutoChessPlayerController_SellUnit, "SellUnit" }, // 587305614
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_AddCardToDeck, "Server_AddCardToDeck" }, // 504348046
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyCard, "Server_BuyCard" }, // 1564667196
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_BuyUnit, "Server_BuyUnit" }, // 2370569049
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_MoveUnit, "Server_MoveUnit" }, // 249671395
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_PlaceUnit, "Server_PlaceUnit" }, // 344645829
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_PlayCard, "Server_PlayCard" }, // 4182496431
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_RemoveCardFromDeck, "Server_RemoveCardFromDeck" }, // 1205728679
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_RequestRematch, "Server_RequestRematch" }, // 3914817756
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_SellAllUnits, "Server_SellAllUnits" }, // 111380566
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_SellUnit, "Server_SellUnit" }, // 3127502654
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_SetPlayerReady, "Server_SetPlayerReady" }, // 4192042800
		{ &Z_Construct_UFunction_AAutoChessPlayerController_Server_SummonUnit, "Server_SummonUnit" }, // 2050684867
		{ &Z_Construct_UFunction_AAutoChessPlayerController_TryPlayCardAtPosition, "TryPlayCardAtPosition" }, // 3449445507
		{ &Z_Construct_UFunction_AAutoChessPlayerController_UpdateDragHighlight, "UpdateDragHighlight" }, // 4121804145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitDataTable = { "UnitDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, UnitDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitDataTable_MetaData), NewProp_UnitDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_CardDataTable = { "CardDataTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, CardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDataTable_MetaData), NewProp_CardDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass = { "SelectedCardClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCardClass_MetaData), NewProp_SelectedCardClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DragGhost = { "DragGhost", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, DragGhost), Z_Construct_UClass_AAutoChessGhost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragGhost_MetaData), NewProp_DragGhost_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDClass = { "MainHUDClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MainHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDClass_MetaData), NewProp_MainHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDWidget = { "MainHUDWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MainHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidget_MetaData), NewProp_MainHUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HighlightActor = { "HighlightActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HighlightActor), Z_Construct_UClass_AAutoChessHighlightActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightActor_MetaData), NewProp_HighlightActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_VirtualCursorClass = { "VirtualCursorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, VirtualCursorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualCursorClass_MetaData), NewProp_VirtualCursorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_VirtualCursorWidget = { "VirtualCursorWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, VirtualCursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualCursorWidget_MetaData), NewProp_VirtualCursorWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_CursorMoveSpeed = { "CursorMoveSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, CursorMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorMoveSpeed_MetaData), NewProp_CursorMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0020080100020025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, ManaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig_Inner = { "DeckConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig = { "DeckConfig", "OnRep_DeckConfig", (EPropertyFlags)0x0020080100000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, DeckConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeckConfig_MetaData), NewProp_DeckConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards_Inner = { "HandCards", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards = { "HandCards", "OnRep_HandCards", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HandCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCards_MetaData), NewProp_HandCards_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DrawCardInterval = { "DrawCardInterval", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, DrawCardInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawCardInterval_MetaData), NewProp_DrawCardInterval_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnManaUpdated = { "OnManaUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnManaUpdated), Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaUpdated_MetaData), NewProp_OnManaUpdated_MetaData) }; // 757995455
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnHandUpdated = { "OnHandUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnHandUpdated), Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandUpdated_MetaData), NewProp_OnHandUpdated_MetaData) }; // 4042686198
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnCardDisplayed = { "OnCardDisplayed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnCardDisplayed), Z_Construct_UDelegateFunction_AutoChess_OnCardDisplayed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCardDisplayed_MetaData), NewProp_OnCardDisplayed_MetaData) }; // 3303714762
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnDeckUpdated = { "OnDeckUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnDeckUpdated), Z_Construct_UDelegateFunction_AutoChess_OnDeckUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeckUpdated_MetaData), NewProp_OnDeckUpdated_MetaData) }; // 2796415843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_CardDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DragGhost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HighlightActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_VirtualCursorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_VirtualCursorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_CursorMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DrawCardInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnManaUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnHandUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnCardDisplayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnDeckUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAutoChessPlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAutoChessPlayerController, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessPlayerController_Statics::ClassParams = {
	&AAutoChessPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessPlayerController()
{
	if (!Z_Registration_Info_UClass_AAutoChessPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessPlayerController.OuterSingleton, Z_Construct_UClass_AAutoChessPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessPlayerController.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessPlayerController>()
{
	return AAutoChessPlayerController::StaticClass();
}
void AAutoChessPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TeamID(TEXT("TeamID"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_DeckConfig(TEXT("DeckConfig"));
	static const FName Name_HandCards(TEXT("HandCards"));
	const bool bIsValid = true
		&& Name_TeamID == ClassReps[(int32)ENetFields_Private::TeamID].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_DeckConfig == ClassReps[(int32)ENetFields_Private::DeckConfig].Property->GetFName()
		&& Name_HandCards == ClassReps[(int32)ENetFields_Private::HandCards].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAutoChessPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessPlayerController);
AAutoChessPlayerController::~AAutoChessPlayerController() {}
// End Class AAutoChessPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCardDisplayData::StaticStruct, Z_Construct_UScriptStruct_FCardDisplayData_Statics::NewStructOps, TEXT("CardDisplayData"), &Z_Registration_Info_UScriptStruct_CardDisplayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardDisplayData), 1569734733U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessPlayerController, AAutoChessPlayerController::StaticClass, TEXT("AAutoChessPlayerController"), &Z_Registration_Info_UClass_AAutoChessPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessPlayerController), 4273469940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_1592964843(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
