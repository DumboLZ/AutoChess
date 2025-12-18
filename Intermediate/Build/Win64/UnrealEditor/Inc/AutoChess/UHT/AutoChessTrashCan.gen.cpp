// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessTrashCan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessTrashCan() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessTrashCan();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessTrashCan_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessTrashCan Function SetHighlight
struct AutoChessTrashCan_eventSetHighlight_Parms
{
	bool bHighlight;
};
static FName NAME_AAutoChessTrashCan_SetHighlight = FName(TEXT("SetHighlight"));
void AAutoChessTrashCan::SetHighlight(bool bHighlight)
{
	AutoChessTrashCan_eventSetHighlight_Parms Parms;
	Parms.bHighlight=bHighlight ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessTrashCan_SetHighlight),&Parms);
}
struct Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe7\x8a\xb6\xe6\x80\x81 (\xe5\xbd\x93\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\xe6\x8b\x96\xe6\x8b\xbd\xe5\x88\xb0\xe4\xb8\x8a\xe6\x96\xb9\xe6\x97\xb6)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessTrashCan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe7\x8a\xb6\xe6\x80\x81 (\xe5\xbd\x93\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\xe6\x8b\x96\xe6\x8b\xbd\xe5\x88\xb0\xe4\xb8\x8a\xe6\x96\xb9\xe6\x97\xb6)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHighlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::NewProp_bHighlight_SetBit(void* Obj)
{
	((AutoChessTrashCan_eventSetHighlight_Parms*)Obj)->bHighlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::NewProp_bHighlight = { "bHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessTrashCan_eventSetHighlight_Parms), &Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::NewProp_bHighlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::NewProp_bHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessTrashCan, nullptr, "SetHighlight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::PropPointers), sizeof(AutoChessTrashCan_eventSetHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessTrashCan_eventSetHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessTrashCan::execSetHighlight)
{
	P_GET_UBOOL(Z_Param_bHighlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlight_Implementation(Z_Param_bHighlight);
	P_NATIVE_END;
}
// End Class AAutoChessTrashCan Function SetHighlight

// Begin Class AAutoChessTrashCan
void AAutoChessTrashCan::StaticRegisterNativesAAutoChessTrashCan()
{
	UClass* Class = AAutoChessTrashCan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHighlight", &AAutoChessTrashCan::execSetHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessTrashCan);
UClass* Z_Construct_UClass_AAutoChessTrashCan_NoRegister()
{
	return AAutoChessTrashCan::StaticClass();
}
struct Z_Construct_UClass_AAutoChessTrashCan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x9e\x83\xe5\x9c\xbe\xe6\xa1\xb6 Actor\n * \xe5\xbd\x93\xe7\x8e\xa9\xe5\xae\xb6\xe5\xb0\x86\xe6\xa3\x8b\xe5\xad\x90\xe6\x8b\x96\xe6\x8b\xbd\xe5\x88\xb0\xe6\xad\xa4 Actor \xe4\xb8\x8a\xe5\xb9\xb6\xe9\x87\x8a\xe6\x94\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\xa3\x8b\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe5\x8d\x96\xe5\x87\xba\n */" },
#endif
		{ "IncludePath", "AutoChessTrashCan.h" },
		{ "ModuleRelativePath", "AutoChessTrashCan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9e\x83\xe5\x9c\xbe\xe6\xa1\xb6 Actor\n\xe5\xbd\x93\xe7\x8e\xa9\xe5\xae\xb6\xe5\xb0\x86\xe6\xa3\x8b\xe5\xad\x90\xe6\x8b\x96\xe6\x8b\xbd\xe5\x88\xb0\xe6\xad\xa4 Actor \xe4\xb8\x8a\xe5\xb9\xb6\xe9\x87\x8a\xe6\x94\xbe\xe6\x97\xb6\xef\xbc\x8c\xe6\xa3\x8b\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe5\x8d\x96\xe5\x87\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa3\x80\xe6\xb5\x8b\xe6\x8b\x96\xe6\x8b\xbd\xe9\x87\x8a\xe6\x94\xbe\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessTrashCan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa3\x80\xe6\xb5\x8b\xe6\x8b\x96\xe6\x8b\xbd\xe9\x87\x8a\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x86\xe8\xa7\x89\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessTrashCan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe8\xa7\x89\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessTrashCan_SetHighlight, "SetHighlight" }, // 1044493173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessTrashCan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessTrashCan_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessTrashCan, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessTrashCan_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessTrashCan, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessTrashCan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessTrashCan_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessTrashCan_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessTrashCan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessTrashCan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessTrashCan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessTrashCan_Statics::ClassParams = {
	&AAutoChessTrashCan::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessTrashCan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessTrashCan_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessTrashCan_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessTrashCan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessTrashCan()
{
	if (!Z_Registration_Info_UClass_AAutoChessTrashCan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessTrashCan.OuterSingleton, Z_Construct_UClass_AAutoChessTrashCan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessTrashCan.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessTrashCan>()
{
	return AAutoChessTrashCan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessTrashCan);
AAutoChessTrashCan::~AAutoChessTrashCan() {}
// End Class AAutoChessTrashCan

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessTrashCan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessTrashCan, AAutoChessTrashCan::StaticClass, TEXT("AAutoChessTrashCan"), &Z_Registration_Info_UClass_AAutoChessTrashCan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessTrashCan), 2540169320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessTrashCan_h_2046246746(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessTrashCan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessTrashCan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
