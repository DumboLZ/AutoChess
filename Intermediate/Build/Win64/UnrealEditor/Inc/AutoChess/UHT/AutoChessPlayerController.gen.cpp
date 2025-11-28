// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessPlayerController() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessPlayerController();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessPlayerController_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitWidget_NoRegister();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
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

// Begin Class AAutoChessPlayerController Function DrawCard
struct Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\xbd\xe4\xb8\x80\xe5\xbc\xa0\xe7\x89\x8c\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\xbd\xe4\xb8\x80\xe5\xbc\xa0\xe7\x89\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "DrawCard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_DrawCard_Statics::Function_MetaDataParams) };
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
	P_THIS->DrawCard();
	P_NATIVE_END;
}
// End Class AAutoChessPlayerController Function DrawCard

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
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlayCard_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessPlayerController_eventPlayCard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessPlayerController_eventPlayCard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessPlayerController_eventPlayCard_Parms), &Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessPlayerController, nullptr, "PlayCard", nullptr, nullptr, Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::AutoChessPlayerController_eventPlayCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessPlayerController_PlayCard_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlayCard(Z_Param_Card,Z_Param_Target);
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

// Begin Class AAutoChessPlayerController
void AAutoChessPlayerController::StaticRegisterNativesAAutoChessPlayerController()
{
	UClass* Class = AAutoChessPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuyCard", &AAutoChessPlayerController::execBuyCard },
		{ "DrawCard", &AAutoChessPlayerController::execDrawCard },
		{ "PlaceUnit", &AAutoChessPlayerController::execPlaceUnit },
		{ "PlayCard", &AAutoChessPlayerController::execPlayCard },
		{ "SellUnit", &AAutoChessPlayerController::execSellUnit },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\n * \xe5\xa4\x84\xe7\x90\x86\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe3\x80\x81\xe5\x8d\xa1\xe7\x89\x8c\xe8\xb4\xad\xe4\xb9\xb0\xe3\x80\x81\xe5\x8d\x95\xe4\xbd\x8d\xe6\x94\xbe\xe7\xbd\xae\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AutoChessPlayerController.h" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\n\xe5\xa4\x84\xe7\x90\x86\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe3\x80\x81\xe5\x8d\xa1\xe7\x89\x8c\xe8\xb4\xad\xe4\xb9\xb0\xe3\x80\x81\xe5\x8d\x95\xe4\xbd\x8d\xe6\x94\xbe\xe7\xbd\xae" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainHUDClass_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb HUD \xe7\xb1\xbb (\xe7\x8e\xa9\xe5\xae\xb6\xe6\x89\x8b\xe7\x89\x8c\xe3\x80\x81\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe7\xad\x89)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb HUD \xe7\xb1\xbb (\xe7\x8e\xa9\xe5\xae\xb6\xe6\x89\x8b\xe7\x89\x8c\xe3\x80\x81\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe7\xad\x89)" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitHealthBarClass_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1 Widget \xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1 Widget \xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitHealthBars_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xae\xa1\xe7\x90\x86\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\xe7\x9a\x84\xe8\xa1\x80\xe6\x9d\xa1 Widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xae\xa1\xe7\x90\x86\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\xe7\x9a\x84\xe8\xa1\x80\xe6\x9d\xa1 Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarZOffset_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1\xe5\x9e\x82\xe7\x9b\xb4\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1\xe5\x9e\x82\xe7\x9b\xb4\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarRefDistance_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1\xe7\xbc\xa9\xe6\x94\xbe\xe5\x8f\x82\xe8\x80\x83\xe8\xb7\x9d\xe7\xa6\xbb (\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe8\xb7\x9d\xe7\xa6\xbb\xe4\xb8\x8b\xe7\xbc\xa9\xe6\x94\xbe\xe4\xb8\xba 1.0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1\xe7\xbc\xa9\xe6\x94\xbe\xe5\x8f\x82\xe8\x80\x83\xe8\xb7\x9d\xe7\xa6\xbb (\xe5\x9c\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe8\xb7\x9d\xe7\xa6\xbb\xe4\xb8\x8b\xe7\xbc\xa9\xe6\x94\xbe\xe4\xb8\xba 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarMinScale_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1\xe6\x9c\x80\xe5\xb0\x8f\xe7\xbc\xa9\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1\xe6\x9c\x80\xe5\xb0\x8f\xe7\xbc\xa9\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarMaxScale_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1\xe6\x9c\x80\xe5\xa4\xa7\xe7\xbc\xa9\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1\xe6\x9c\x80\xe5\xa4\xa7\xe7\xbc\xa9\xe6\x94\xbe" },
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
		{ "Comment", "// \xe7\x89\x8c\xe5\xba\x93\xe9\x85\x8d\xe7\xbd\xae (\xe5\x8d\xa1\xe7\x89\x8c\xe7\xb1\xbb\xe5\x88\x97\xe8\xa1\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x8c\xe5\xba\x93\xe9\x85\x8d\xe7\xbd\xae (\xe5\x8d\xa1\xe7\x89\x8c\xe7\xb1\xbb\xe5\x88\x97\xe8\xa1\xa8)" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCardClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainHUDWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitHealthBarClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitHealthBars_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitHealthBars_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UnitHealthBars;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarRefDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarMinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthBarMaxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeckConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeckConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandCards;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawCardInterval;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessPlayerController_BuyCard, "BuyCard" }, // 564924422
		{ &Z_Construct_UFunction_AAutoChessPlayerController_DrawCard, "DrawCard" }, // 3409514534
		{ &Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit, "PlaceUnit" }, // 1670979043
		{ &Z_Construct_UFunction_AAutoChessPlayerController_PlayCard, "PlayCard" }, // 4161845518
		{ &Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop, "RefreshShop" }, // 1906884202
		{ &Z_Construct_UFunction_AAutoChessPlayerController_SellUnit, "SellUnit" }, // 587305614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass = { "SelectedCardClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCardClass_MetaData), NewProp_SelectedCardClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDClass = { "MainHUDClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MainHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDClass_MetaData), NewProp_MainHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDWidget = { "MainHUDWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MainHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainHUDWidget_MetaData), NewProp_MainHUDWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBarClass = { "UnitHealthBarClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, UnitHealthBarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessUnitWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitHealthBarClass_MetaData), NewProp_UnitHealthBarClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars_ValueProp = { "UnitHealthBars", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAutoChessUnitWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars_Key_KeyProp = { "UnitHealthBars_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars = { "UnitHealthBars", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, UnitHealthBars), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitHealthBars_MetaData), NewProp_UnitHealthBars_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarZOffset = { "HealthBarZOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HealthBarZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarZOffset_MetaData), NewProp_HealthBarZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarRefDistance = { "HealthBarRefDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HealthBarRefDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarRefDistance_MetaData), NewProp_HealthBarRefDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarMinScale = { "HealthBarMinScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HealthBarMinScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarMinScale_MetaData), NewProp_HealthBarMinScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarMaxScale = { "HealthBarMaxScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HealthBarMaxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarMaxScale_MetaData), NewProp_HealthBarMaxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, ManaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig_Inner = { "DeckConfig", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DeckConfig = { "DeckConfig", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, DeckConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeckConfig_MetaData), NewProp_DeckConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards_Inner = { "HandCards", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HandCards = { "HandCards", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, HandCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCards_MetaData), NewProp_HandCards_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_DrawCardInterval = { "DrawCardInterval", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, DrawCardInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawCardInterval_MetaData), NewProp_DrawCardInterval_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnManaUpdated = { "OnManaUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnManaUpdated), Z_Construct_UDelegateFunction_AutoChess_OnManaUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaUpdated_MetaData), NewProp_OnManaUpdated_MetaData) }; // 757995455
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_OnHandUpdated = { "OnHandUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, OnHandUpdated), Z_Construct_UDelegateFunction_AutoChess_OnHandUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandUpdated_MetaData), NewProp_OnHandUpdated_MetaData) }; // 4042686198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_MainHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBarClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_UnitHealthBars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarRefDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarMinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_HealthBarMaxScale,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessPlayerController);
AAutoChessPlayerController::~AAutoChessPlayerController() {}
// End Class AAutoChessPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessPlayerController, AAutoChessPlayerController::StaticClass, TEXT("AAutoChessPlayerController"), &Z_Registration_Info_UClass_AAutoChessPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessPlayerController), 1889604646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_759547417(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
