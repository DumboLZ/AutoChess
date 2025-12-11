// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessHUDWidget() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessHUDWidget();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessHUDWidget Function BP_OnHandUpdated
struct AutoChessHUDWidget_eventBP_OnHandUpdated_Parms
{
	TArray<UAutoChessCardBase*> HandCards;
};
static FName NAME_UAutoChessHUDWidget_BP_OnHandUpdated = FName(TEXT("BP_OnHandUpdated"));
void UAutoChessHUDWidget::BP_OnHandUpdated(TArray<UAutoChessCardBase*> const& HandCards)
{
	AutoChessHUDWidget_eventBP_OnHandUpdated_Parms Parms;
	Parms.HandCards=HandCards;
	ProcessEvent(FindFunctionChecked(NAME_UAutoChessHUDWidget_BP_OnHandUpdated),&Parms);
}
struct Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
		{ "DisplayName", "On Hand Updated" },
		{ "ModuleRelativePath", "AutoChessHUDWidget.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::NewProp_HandCards_Inner = { "HandCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::NewProp_HandCards = { "HandCards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventBP_OnHandUpdated_Parms, HandCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCards_MetaData), NewProp_HandCards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::NewProp_HandCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::NewProp_HandCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessHUDWidget, nullptr, "BP_OnHandUpdated", nullptr, nullptr, Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::PropPointers), sizeof(AutoChessHUDWidget_eventBP_OnHandUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessHUDWidget_eventBP_OnHandUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAutoChessHUDWidget Function BP_OnHandUpdated

// Begin Class UAutoChessHUDWidget Function BP_OnManaUpdated
struct AutoChessHUDWidget_eventBP_OnManaUpdated_Parms
{
	float CurrentMana;
	float MaxMana;
};
static FName NAME_UAutoChessHUDWidget_BP_OnManaUpdated = FName(TEXT("BP_OnManaUpdated"));
void UAutoChessHUDWidget::BP_OnManaUpdated(float CurrentMana, float MaxMana)
{
	AutoChessHUDWidget_eventBP_OnManaUpdated_Parms Parms;
	Parms.CurrentMana=CurrentMana;
	Parms.MaxMana=MaxMana;
	ProcessEvent(FindFunctionChecked(NAME_UAutoChessHUDWidget_BP_OnManaUpdated),&Parms);
}
struct Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint \xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe5\x9c\xa8""Blueprint\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "On Mana Updated" },
		{ "ModuleRelativePath", "AutoChessHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint \xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe5\x9c\xa8""Blueprint\xe4\xb8\xad\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventBP_OnManaUpdated_Parms, CurrentMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventBP_OnManaUpdated_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessHUDWidget, nullptr, "BP_OnManaUpdated", nullptr, nullptr, Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::PropPointers), sizeof(AutoChessHUDWidget_eventBP_OnManaUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessHUDWidget_eventBP_OnManaUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAutoChessHUDWidget Function BP_OnManaUpdated

// Begin Class UAutoChessHUDWidget Function HandleHandUpdated
struct Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics
{
	struct AutoChessHUDWidget_eventHandleHandUpdated_Parms
	{
		TArray<UAutoChessCardBase*> HandCards;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessHUDWidget.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::NewProp_HandCards_Inner = { "HandCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::NewProp_HandCards = { "HandCards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventHandleHandUpdated_Parms, HandCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCards_MetaData), NewProp_HandCards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::NewProp_HandCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::NewProp_HandCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessHUDWidget, nullptr, "HandleHandUpdated", nullptr, nullptr, Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::AutoChessHUDWidget_eventHandleHandUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::AutoChessHUDWidget_eventHandleHandUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessHUDWidget::execHandleHandUpdated)
{
	P_GET_TARRAY_REF(UAutoChessCardBase*,Z_Param_Out_HandCards);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHandUpdated(Z_Param_Out_HandCards);
	P_NATIVE_END;
}
// End Class UAutoChessHUDWidget Function HandleHandUpdated

// Begin Class UAutoChessHUDWidget Function HandleManaUpdated
struct Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics
{
	struct AutoChessHUDWidget_eventHandleManaUpdated_Parms
	{
		float CurrentMana;
		float MaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// C++ \xe5\xa7\x94\xe6\x89\x98\xe7\xbb\x91\xe5\xae\x9a\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe7\x94\xb1PlayerController\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "AutoChessHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ \xe5\xa7\x94\xe6\x89\x98\xe7\xbb\x91\xe5\xae\x9a\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe7\x94\xb1PlayerController\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventHandleManaUpdated_Parms, CurrentMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessHUDWidget_eventHandleManaUpdated_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessHUDWidget, nullptr, "HandleManaUpdated", nullptr, nullptr, Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::AutoChessHUDWidget_eventHandleManaUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::AutoChessHUDWidget_eventHandleManaUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoChessHUDWidget::execHandleManaUpdated)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentMana);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleManaUpdated(Z_Param_CurrentMana,Z_Param_MaxMana);
	P_NATIVE_END;
}
// End Class UAutoChessHUDWidget Function HandleManaUpdated

// Begin Class UAutoChessHUDWidget
void UAutoChessHUDWidget::StaticRegisterNativesUAutoChessHUDWidget()
{
	UClass* Class = UAutoChessHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleHandUpdated", &UAutoChessHUDWidget::execHandleHandUpdated },
		{ "HandleManaUpdated", &UAutoChessHUDWidget::execHandleManaUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessHUDWidget);
UClass* Z_Construct_UClass_UAutoChessHUDWidget_NoRegister()
{
	return UAutoChessHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UAutoChessHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x8e\xa9\xe5\xae\xb6HUD Widget\xe5\x9f\xba\xe7\xb1\xbb\n * \xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\xa5\xe6\x94\xb6""C++\xe4\xba\x8b\xe4\xbb\xb6\xe5\xb9\xb6\xe8\xbd\xac\xe5\x8f\x91\xe5\x88\xb0""Blueprint\n */" },
#endif
		{ "IncludePath", "AutoChessHUDWidget.h" },
		{ "ModuleRelativePath", "AutoChessHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6HUD Widget\xe5\x9f\xba\xe7\xb1\xbb\n\xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\xa5\xe6\x94\xb6""C++\xe4\xba\x8b\xe4\xbb\xb6\xe5\xb9\xb6\xe8\xbd\xac\xe5\x8f\x91\xe5\x88\xb0""Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnHandUpdated, "BP_OnHandUpdated" }, // 3018295470
		{ &Z_Construct_UFunction_UAutoChessHUDWidget_BP_OnManaUpdated, "BP_OnManaUpdated" }, // 1215648898
		{ &Z_Construct_UFunction_UAutoChessHUDWidget_HandleHandUpdated, "HandleHandUpdated" }, // 533690472
		{ &Z_Construct_UFunction_UAutoChessHUDWidget_HandleManaUpdated, "HandleManaUpdated" }, // 1672755314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoChessHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessHUDWidget_Statics::ClassParams = {
	&UAutoChessHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessHUDWidget()
{
	if (!Z_Registration_Info_UClass_UAutoChessHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessHUDWidget.OuterSingleton, Z_Construct_UClass_UAutoChessHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessHUDWidget.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessHUDWidget>()
{
	return UAutoChessHUDWidget::StaticClass();
}
UAutoChessHUDWidget::UAutoChessHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessHUDWidget);
UAutoChessHUDWidget::~UAutoChessHUDWidget() {}
// End Class UAutoChessHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessHUDWidget, UAutoChessHUDWidget::StaticClass, TEXT("UAutoChessHUDWidget"), &Z_Registration_Info_UClass_UAutoChessHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessHUDWidget), 2545735741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_589639111(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
