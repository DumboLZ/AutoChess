// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessHighlightActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessHighlightActor() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessHighlightActor();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessHighlightActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessHighlightActor
void AAutoChessHighlightActor::StaticRegisterNativesAAutoChessHighlightActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessHighlightActor);
UClass* Z_Construct_UClass_AAutoChessHighlightActor_NoRegister()
{
	return AAutoChessHighlightActor::StaticClass();
}
struct Z_Construct_UClass_AAutoChessHighlightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x8e\xa9\xe5\xae\xb6\xe4\xb8\x93\xe5\xb1\x9e\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n * \xe4\xbd\xbf\xe7\x94\xa8 bOnlyOwnerSee \xe7\xa1\xae\xe4\xbf\x9d\xe5\x8f\xaa\xe6\x9c\x89\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85(\xe7\x8e\xa9\xe5\xae\xb6)\xe8\x83\xbd\xe7\x9c\x8b\xe5\x88\xb0\xe9\xab\x98\xe4\xba\xae\n */" },
#endif
		{ "IncludePath", "AutoChessHighlightActor.h" },
		{ "ModuleRelativePath", "AutoChessHighlightActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe4\xb8\x93\xe5\xb1\x9e\xe7\x9a\x84\xe9\xab\x98\xe4\xba\xae\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n\xe4\xbd\xbf\xe7\x94\xa8 bOnlyOwnerSee \xe7\xa1\xae\xe4\xbf\x9d\xe5\x8f\xaa\xe6\x9c\x89\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85(\xe7\x8e\xa9\xe5\xae\xb6)\xe8\x83\xbd\xe7\x9c\x8b\xe5\x88\xb0\xe9\xab\x98\xe4\xba\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightISM_MetaData[] = {
		{ "Category", "Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae ISM \xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessHighlightActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae ISM \xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightISM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessHighlightActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessHighlightActor_Statics::NewProp_HighlightISM = { "HighlightISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessHighlightActor, HighlightISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightISM_MetaData), NewProp_HighlightISM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessHighlightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessHighlightActor_Statics::NewProp_HighlightISM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessHighlightActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessHighlightActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessHighlightActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessHighlightActor_Statics::ClassParams = {
	&AAutoChessHighlightActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAutoChessHighlightActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessHighlightActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessHighlightActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessHighlightActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessHighlightActor()
{
	if (!Z_Registration_Info_UClass_AAutoChessHighlightActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessHighlightActor.OuterSingleton, Z_Construct_UClass_AAutoChessHighlightActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessHighlightActor.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessHighlightActor>()
{
	return AAutoChessHighlightActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessHighlightActor);
AAutoChessHighlightActor::~AAutoChessHighlightActor() {}
// End Class AAutoChessHighlightActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHighlightActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessHighlightActor, AAutoChessHighlightActor::StaticClass, TEXT("AAutoChessHighlightActor"), &Z_Registration_Info_UClass_AAutoChessHighlightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessHighlightActor), 2785576620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHighlightActor_h_367841373(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHighlightActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessHighlightActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
