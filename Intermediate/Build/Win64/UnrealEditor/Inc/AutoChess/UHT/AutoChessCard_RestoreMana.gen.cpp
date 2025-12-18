// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCard_RestoreMana.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCard_RestoreMana() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCard_RestoreMana();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCard_RestoreMana_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessCard_RestoreMana
void UAutoChessCard_RestoreMana::StaticRegisterNativesUAutoChessCard_RestoreMana()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessCard_RestoreMana);
UClass* Z_Construct_UClass_UAutoChessCard_RestoreMana_NoRegister()
{
	return UAutoChessCard_RestoreMana::StaticClass();
}
struct Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x81\xa2\xe5\xa4\x8d 3 \xe7\x82\xb9\xe8\xb4\xb9\xe7\x94\xa8\xe7\x9a\x84\xe6\xb3\x95\xe6\x9c\xaf\xe7\x89\x8c\n */" },
#endif
		{ "IncludePath", "AutoChessCard_RestoreMana.h" },
		{ "ModuleRelativePath", "AutoChessCard_RestoreMana.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x81\xa2\xe5\xa4\x8d 3 \xe7\x82\xb9\xe8\xb4\xb9\xe7\x94\xa8\xe7\x9a\x84\xe6\xb3\x95\xe6\x9c\xaf\xe7\x89\x8c" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessCard_RestoreMana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutoChessCardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::ClassParams = {
	&UAutoChessCard_RestoreMana::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessCard_RestoreMana()
{
	if (!Z_Registration_Info_UClass_UAutoChessCard_RestoreMana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessCard_RestoreMana.OuterSingleton, Z_Construct_UClass_UAutoChessCard_RestoreMana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessCard_RestoreMana.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessCard_RestoreMana>()
{
	return UAutoChessCard_RestoreMana::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessCard_RestoreMana);
UAutoChessCard_RestoreMana::~UAutoChessCard_RestoreMana() {}
// End Class UAutoChessCard_RestoreMana

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCard_RestoreMana_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessCard_RestoreMana, UAutoChessCard_RestoreMana::StaticClass, TEXT("UAutoChessCard_RestoreMana"), &Z_Registration_Info_UClass_UAutoChessCard_RestoreMana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessCard_RestoreMana), 3463084765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCard_RestoreMana_h_3716233161(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCard_RestoreMana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCard_RestoreMana_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
