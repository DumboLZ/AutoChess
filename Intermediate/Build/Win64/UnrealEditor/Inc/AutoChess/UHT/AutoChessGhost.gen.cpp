// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessGhost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessGhost() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGhost();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGhost_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessGhost
void AAutoChessGhost::StaticRegisterNativesAAutoChessGhost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessGhost);
UClass* Z_Construct_UClass_AAutoChessGhost_NoRegister()
{
	return AAutoChessGhost::StaticClass();
}
struct Z_Construct_UClass_AAutoChessGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x8b\x96\xe6\x8b\xbd\xe6\x97\xb6\xe7\x9a\x84\xe5\xb9\xbd\xe7\x81\xb5\xe6\x98\xbe\xe7\xa4\xba Actor\n * \xe4\xbb\x85\xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe7\x94\x9f\xe6\x88\x90\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\x96\xe6\x8b\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\n */" },
#endif
		{ "IncludePath", "AutoChessGhost.h" },
		{ "ModuleRelativePath", "AutoChessGhost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\x96\xe6\x8b\xbd\xe6\x97\xb6\xe7\x9a\x84\xe5\xb9\xbd\xe7\x81\xb5\xe6\x98\xbe\xe7\xa4\xba Actor\n\xe4\xbb\x85\xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe7\x94\x9f\xe6\x88\x90\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\x96\xe6\x8b\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessGhost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGhost_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGhost, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGhost_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGhost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessGhost_Statics::ClassParams = {
	&AAutoChessGhost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAutoChessGhost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGhost_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessGhost()
{
	if (!Z_Registration_Info_UClass_AAutoChessGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessGhost.OuterSingleton, Z_Construct_UClass_AAutoChessGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessGhost.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessGhost>()
{
	return AAutoChessGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessGhost);
AAutoChessGhost::~AAutoChessGhost() {}
// End Class AAutoChessGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGhost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessGhost, AAutoChessGhost::StaticClass, TEXT("AAutoChessGhost"), &Z_Registration_Info_UClass_AAutoChessGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessGhost), 464512821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGhost_h_4066335612(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
