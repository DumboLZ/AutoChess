// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCameraPawn() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessCameraPawn();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessCameraPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessCameraPawn Function SetupCameraForPlayer
struct Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics
{
	struct AutoChessCameraPawn_eventSetupCameraForPlayer_Parms
	{
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa7\x86\xe8\xa7\x92 (0: \xe7\x8e\xa9\xe5\xae\xb6""1\xe8\xa7\x86\xe8\xa7\x92, 1: \xe7\x8e\xa9\xe5\xae\xb6""2\xe8\xa7\x86\xe8\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCameraPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa7\x86\xe8\xa7\x92 (0: \xe7\x8e\xa9\xe5\xae\xb6""1\xe8\xa7\x86\xe8\xa7\x92, 1: \xe7\x8e\xa9\xe5\xae\xb6""2\xe8\xa7\x86\xe8\xa7\x92)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessCameraPawn_eventSetupCameraForPlayer_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessCameraPawn, nullptr, "SetupCameraForPlayer", nullptr, nullptr, Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::AutoChessCameraPawn_eventSetupCameraForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::AutoChessCameraPawn_eventSetupCameraForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessCameraPawn::execSetupCameraForPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupCameraForPlayer(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class AAutoChessCameraPawn Function SetupCameraForPlayer

// Begin Class AAutoChessCameraPawn
void AAutoChessCameraPawn::StaticRegisterNativesAAutoChessCameraPawn()
{
	UClass* Class = AAutoChessCameraPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupCameraForPlayer", &AAutoChessCameraPawn::execSetupCameraForPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessCameraPawn);
UClass* Z_Construct_UClass_AAutoChessCameraPawn_NoRegister()
{
	return AAutoChessCameraPawn::StaticClass();
}
struct Z_Construct_UClass_AAutoChessCameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AutoChessCameraPawn.h" },
		{ "ModuleRelativePath", "AutoChessCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessCameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessCameraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessCameraPawn_SetupCameraForPlayer, "SetupCameraForPlayer" }, // 2121037459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessCameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessCameraPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessCameraPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessCameraPawn_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessCameraPawn, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessCameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessCameraPawn_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessCameraPawn_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessCameraPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessCameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessCameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessCameraPawn_Statics::ClassParams = {
	&AAutoChessCameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessCameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessCameraPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessCameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessCameraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessCameraPawn()
{
	if (!Z_Registration_Info_UClass_AAutoChessCameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessCameraPawn.OuterSingleton, Z_Construct_UClass_AAutoChessCameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessCameraPawn.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessCameraPawn>()
{
	return AAutoChessCameraPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessCameraPawn);
AAutoChessCameraPawn::~AAutoChessCameraPawn() {}
// End Class AAutoChessCameraPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessCameraPawn, AAutoChessCameraPawn::StaticClass, TEXT("AAutoChessCameraPawn"), &Z_Registration_Info_UClass_AAutoChessCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessCameraPawn), 2362061817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_21711816(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCameraPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
