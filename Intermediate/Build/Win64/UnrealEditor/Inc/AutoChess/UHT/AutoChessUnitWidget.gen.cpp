// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessUnitWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessUnitWidget() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitWidget();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessUnitWidget Function SetTeamColor
struct AutoChessUnitWidget_eventSetTeamColor_Parms
{
	int32 TeamID;
};
static FName NAME_UAutoChessUnitWidget_SetTeamColor = FName(TEXT("SetTeamColor"));
void UAutoChessUnitWidget::SetTeamColor(int32 TeamID)
{
	AutoChessUnitWidget_eventSetTeamColor_Parms Parms;
	Parms.TeamID=TeamID;
	ProcessEvent(FindFunctionChecked(NAME_UAutoChessUnitWidget_SetTeamColor),&Parms);
}
struct Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe9\x98\x9f\xe4\xbc\x8d\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x98\x9f\xe4\xbc\x8d\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitWidget_eventSetTeamColor_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessUnitWidget, nullptr, "SetTeamColor", nullptr, nullptr, Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::PropPointers), sizeof(AutoChessUnitWidget_eventSetTeamColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessUnitWidget_eventSetTeamColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAutoChessUnitWidget Function SetTeamColor

// Begin Class UAutoChessUnitWidget Function UpdateHealth
struct AutoChessUnitWidget_eventUpdateHealth_Parms
{
	float CurrentHealth;
	float MaxHealth;
};
static FName NAME_UAutoChessUnitWidget_UpdateHealth = FName(TEXT("UpdateHealth"));
void UAutoChessUnitWidget::UpdateHealth(float CurrentHealth, float MaxHealth)
{
	AutoChessUnitWidget_eventUpdateHealth_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	Parms.MaxHealth=MaxHealth;
	ProcessEvent(FindFunctionChecked(NAME_UAutoChessUnitWidget_UpdateHealth),&Parms);
}
struct Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe8\xa1\x80\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa1\x80\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitWidget_eventUpdateHealth_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitWidget_eventUpdateHealth_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoChessUnitWidget, nullptr, "UpdateHealth", nullptr, nullptr, Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::PropPointers), sizeof(AutoChessUnitWidget_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessUnitWidget_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAutoChessUnitWidget Function UpdateHealth

// Begin Class UAutoChessUnitWidget
void UAutoChessUnitWidget::StaticRegisterNativesUAutoChessUnitWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessUnitWidget);
UClass* Z_Construct_UClass_UAutoChessUnitWidget_NoRegister()
{
	return UAutoChessUnitWidget::StaticClass();
}
struct Z_Construct_UClass_UAutoChessUnitWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8d\x95\xe4\xbd\x8d\xe5\xa4\xb4\xe9\xa1\xb6\xe8\xa1\x80\xe6\x9d\xa1 Widget\n */" },
#endif
		{ "IncludePath", "AutoChessUnitWidget.h" },
		{ "ModuleRelativePath", "AutoChessUnitWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xe5\xa4\xb4\xe9\xa1\xb6\xe8\xa1\x80\xe6\x9d\xa1 Widget" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoChessUnitWidget_SetTeamColor, "SetTeamColor" }, // 2012989646
		{ &Z_Construct_UFunction_UAutoChessUnitWidget_UpdateHealth, "UpdateHealth" }, // 1565431557
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessUnitWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoChessUnitWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessUnitWidget_Statics::ClassParams = {
	&UAutoChessUnitWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessUnitWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessUnitWidget()
{
	if (!Z_Registration_Info_UClass_UAutoChessUnitWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessUnitWidget.OuterSingleton, Z_Construct_UClass_UAutoChessUnitWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessUnitWidget.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessUnitWidget>()
{
	return UAutoChessUnitWidget::StaticClass();
}
UAutoChessUnitWidget::UAutoChessUnitWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessUnitWidget);
UAutoChessUnitWidget::~UAutoChessUnitWidget() {}
// End Class UAutoChessUnitWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessUnitWidget, UAutoChessUnitWidget::StaticClass, TEXT("UAutoChessUnitWidget"), &Z_Registration_Info_UClass_UAutoChessUnitWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessUnitWidget), 2023270764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitWidget_h_288812806(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
