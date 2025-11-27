// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCardBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCardBase() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class UAutoChessCardBase
void UAutoChessCardBase::StaticRegisterNativesUAutoChessCardBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessCardBase);
UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister()
{
	return UAutoChessCardBase::StaticClass();
}
struct Z_Construct_UClass_UAutoChessCardBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n * \xe5\xae\x9a\xe4\xb9\x89\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9a\xe8\x8a\xb1\xe8\xb4\xb9\xe3\x80\x81\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\xad\x89\n */" },
#endif
		{ "IncludePath", "AutoChessCardBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n\xe5\xae\x9a\xe4\xb9\x89\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9a\xe8\x8a\xb1\xe8\xb4\xb9\xe3\x80\x81\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\xad\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x87\x91\xe5\xb8\x81\xe6\xb6\x88\xe8\x80\x97\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x91\xe5\xb8\x81\xe6\xb6\x88\xe8\x80\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClass_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb (\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe7\xb1\xbb (\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87 (UI\xe6\x98\xbe\xe7\xa4\xba)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87 (UI\xe6\x98\xbe\xe7\xa4\xba)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[] = {
		{ "Category", "Card Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rarity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessCardBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardName_MetaData), NewProp_CardName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, CardDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDescription_MetaData), NewProp_CardDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClass_MetaData), NewProp_UnitClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessCardBase, Rarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rarity_MetaData), NewProp_Rarity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_CardDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessCardBase_Statics::NewProp_Rarity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoChessCardBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessCardBase_Statics::ClassParams = {
	&UAutoChessCardBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessCardBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessCardBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessCardBase()
{
	if (!Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton, Z_Construct_UClass_UAutoChessCardBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessCardBase.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessCardBase>()
{
	return UAutoChessCardBase::StaticClass();
}
UAutoChessCardBase::UAutoChessCardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessCardBase);
UAutoChessCardBase::~UAutoChessCardBase() {}
// End Class UAutoChessCardBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessCardBase, UAutoChessCardBase::StaticClass, TEXT("UAutoChessCardBase"), &Z_Registration_Info_UClass_UAutoChessCardBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessCardBase), 2660816934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_1676803823(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
