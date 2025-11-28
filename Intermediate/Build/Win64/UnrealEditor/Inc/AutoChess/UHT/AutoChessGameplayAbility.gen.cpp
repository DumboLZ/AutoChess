// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessGameplayAbility() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessGameplayAbility();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessGameplayAbility
void UAutoChessGameplayAbility::StaticRegisterNativesUAutoChessGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessGameplayAbility);
UClass* Z_Construct_UClass_UAutoChessGameplayAbility_NoRegister()
{
	return UAutoChessGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UAutoChessGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\x8a\x80\xe8\x83\xbd\xe5\x9f\xba\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "AutoChessGameplayAbility.h" },
		{ "ModuleRelativePath", "AutoChessGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\x8a\x80\xe8\x83\xbd\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoChessGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessGameplayAbility_Statics::ClassParams = {
	&UAutoChessGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UAutoChessGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessGameplayAbility.OuterSingleton, Z_Construct_UClass_UAutoChessGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessGameplayAbility.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessGameplayAbility>()
{
	return UAutoChessGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessGameplayAbility);
UAutoChessGameplayAbility::~UAutoChessGameplayAbility() {}
// End Class UAutoChessGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessGameplayAbility, UAutoChessGameplayAbility::StaticClass, TEXT("UAutoChessGameplayAbility"), &Z_Registration_Info_UClass_UAutoChessGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessGameplayAbility), 2509725233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameplayAbility_h_1007456669(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
