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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

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
		{ "PlaceUnit", &AAutoChessPlayerController::execPlaceUnit },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedCardClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessPlayerController_BuyCard, "BuyCard" }, // 564924422
		{ &Z_Construct_UFunction_AAutoChessPlayerController_PlaceUnit, "PlaceUnit" }, // 1670979043
		{ &Z_Construct_UFunction_AAutoChessPlayerController_RefreshShop, "RefreshShop" }, // 1906884202
		{ &Z_Construct_UFunction_AAutoChessPlayerController_SellUnit, "SellUnit" }, // 587305614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass = { "SelectedCardClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCardClass_MetaData), NewProp_SelectedCardClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessPlayerController, SelectedUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedCardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessPlayerController_Statics::NewProp_SelectedUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessPlayerController_Statics::ClassParams = {
	&AAutoChessPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessPlayerController_Statics::PropPointers),
	0,
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
		{ Z_Construct_UClass_AAutoChessPlayerController, AAutoChessPlayerController::StaticClass, TEXT("AAutoChessPlayerController"), &Z_Registration_Info_UClass_AAutoChessPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessPlayerController), 4008684654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_1745831477(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
