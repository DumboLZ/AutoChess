// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/MainMenuPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPlayerController() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AMainMenuPlayerController();
AUTOCHESS_API UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AMainMenuPlayerController Function HostGame
struct Z_Construct_UFunction_AMainMenuPlayerController_HostGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Host\xef\xbc\x89\n// \xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8 UI \xe6\x8c\x89\xe9\x92\xae\xe4\xb8\xad\xe8\xb0\x83\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Host\xef\xbc\x89\n\xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8 UI \xe6\x8c\x89\xe9\x92\xae\xe4\xb8\xad\xe8\xb0\x83\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuPlayerController_HostGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPlayerController, nullptr, "HostGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuPlayerController_HostGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuPlayerController_HostGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainMenuPlayerController_HostGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuPlayerController_HostGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuPlayerController::execHostGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostGame();
	P_NATIVE_END;
}
// End Class AMainMenuPlayerController Function HostGame

// Begin Class AMainMenuPlayerController Function JoinGame
struct Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics
{
	struct MainMenuPlayerController_eventJoinGame_Parms
	{
		FString Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa0\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Client\xef\xbc\x89\n// \xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8 UI \xe6\x8c\x89\xe9\x92\xae\xe4\xb8\xad\xe8\xb0\x83\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x85\xa5\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe4\xbd\x9c\xe4\xb8\xba Client\xef\xbc\x89\n\xe7\x94\xa8\xe6\xb3\x95\xef\xbc\x9a\xe5\x9c\xa8 UI \xe6\x8c\x89\xe9\x92\xae\xe4\xb8\xad\xe8\xb0\x83\xe7\x94\xa8" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainMenuPlayerController_eventJoinGame_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPlayerController, nullptr, "JoinGame", nullptr, nullptr, Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::MainMenuPlayerController_eventJoinGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::MainMenuPlayerController_eventJoinGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainMenuPlayerController_JoinGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuPlayerController_JoinGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuPlayerController::execJoinGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinGame(Z_Param_Address);
	P_NATIVE_END;
}
// End Class AMainMenuPlayerController Function JoinGame

// Begin Class AMainMenuPlayerController Function QuitGame
struct Z_Construct_UFunction_AMainMenuPlayerController_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x80\xe5\x87\xba\xe6\xb8\xb8\xe6\x88\x8f\n" },
#endif
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x80\xe5\x87\xba\xe6\xb8\xb8\xe6\x88\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuPlayerController_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPlayerController, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuPlayerController_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainMenuPlayerController_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainMenuPlayerController_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainMenuPlayerController_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainMenuPlayerController::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class AMainMenuPlayerController Function QuitGame

// Begin Class AMainMenuPlayerController
void AMainMenuPlayerController::StaticRegisterNativesAMainMenuPlayerController()
{
	UClass* Class = AMainMenuPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HostGame", &AMainMenuPlayerController::execHostGame },
		{ "JoinGame", &AMainMenuPlayerController::execJoinGame },
		{ "QuitGame", &AMainMenuPlayerController::execQuitGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuPlayerController);
UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister()
{
	return AMainMenuPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMainMenuPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95\xe4\xb8\x93\xe7\x94\xa8 PlayerController\n * \xe8\xb4\x9f\xe8\xb4\xa3\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 UI \xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe8\x81\x94\xe6\x9c\xba\xe5\x8a\x9f\xe8\x83\xbd\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainMenuPlayerController.h" },
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95\xe4\xb8\x93\xe7\x94\xa8 PlayerController\n\xe8\xb4\x9f\xe8\xb4\xa3\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 UI \xe5\xb9\xb6\xe5\xa4\x84\xe7\x90\x86\xe8\x81\x94\xe6\x9c\xba\xe5\x8a\x9f\xe8\x83\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 Widget \xe7\xb1\xbb\xef\xbc\x88\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 Widget \xe7\xb1\xbb\xef\xbc\x88\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 Widget \xe5\xae\x9e\xe4\xbe\x8b\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\x8f\x9c\xe5\x8d\x95 Widget \xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuPlayerController_HostGame, "HostGame" }, // 606987200
		{ &Z_Construct_UFunction_AMainMenuPlayerController_JoinGame, "JoinGame" }, // 1098651891
		{ &Z_Construct_UFunction_AMainMenuPlayerController_QuitGame, "QuitGame" }, // 1969698882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuPlayerController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainMenuPlayerController, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuPlayerController_Statics::NewProp_MainMenuWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainMenuPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams = {
	&AMainMenuPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuPlayerController()
{
	if (!Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton, Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuPlayerController.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AMainMenuPlayerController>()
{
	return AMainMenuPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuPlayerController);
AMainMenuPlayerController::~AMainMenuPlayerController() {}
// End Class AMainMenuPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuPlayerController, AMainMenuPlayerController::StaticClass, TEXT("AMainMenuPlayerController"), &Z_Registration_Info_UClass_AMainMenuPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuPlayerController), 3308516850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_3645740070(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_MainMenuPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
