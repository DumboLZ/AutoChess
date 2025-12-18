// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/GA_RestoreMana.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_RestoreMana() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessGameplayAbility();
AUTOCHESS_API UClass* Z_Construct_UClass_UGA_RestoreMana();
AUTOCHESS_API UClass* Z_Construct_UClass_UGA_RestoreMana_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UGA_RestoreMana
void UGA_RestoreMana::StaticRegisterNativesUGA_RestoreMana()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_RestoreMana);
UClass* Z_Construct_UClass_UGA_RestoreMana_NoRegister()
{
	return UGA_RestoreMana::StaticClass();
}
struct Z_Construct_UClass_UGA_RestoreMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x81\xa2\xe5\xa4\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\n */" },
#endif
		{ "IncludePath", "GA_RestoreMana.h" },
		{ "ModuleRelativePath", "GA_RestoreMana.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x81\xa2\xe5\xa4\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_RestoreMana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_RestoreMana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoChessGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_RestoreMana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_RestoreMana_Statics::ClassParams = {
	&UGA_RestoreMana::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_RestoreMana_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_RestoreMana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_RestoreMana()
{
	if (!Z_Registration_Info_UClass_UGA_RestoreMana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_RestoreMana.OuterSingleton, Z_Construct_UClass_UGA_RestoreMana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_RestoreMana.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UGA_RestoreMana>()
{
	return UGA_RestoreMana::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_RestoreMana);
UGA_RestoreMana::~UGA_RestoreMana() {}
// End Class UGA_RestoreMana

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_GA_RestoreMana_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_RestoreMana, UGA_RestoreMana::StaticClass, TEXT("UGA_RestoreMana"), &Z_Registration_Info_UClass_UGA_RestoreMana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_RestoreMana), 484847922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_GA_RestoreMana_h_3829431462(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_GA_RestoreMana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_GA_RestoreMana_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
