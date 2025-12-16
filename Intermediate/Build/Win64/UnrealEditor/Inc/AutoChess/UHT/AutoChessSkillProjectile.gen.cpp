// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessSkillProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessSkillProjectile() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessSkillProjectile();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessSkillProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessSkillProjectile Function InitSkillProjectile
struct Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics
{
	struct AutoChessSkillProjectile_eventInitSkillProjectile_Parms
	{
		AAutoChessUnitBase* InInstigator;
		FVector InDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventInitSkillProjectile_Parms, InInstigator), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventInitSkillProjectile_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::NewProp_InInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessSkillProjectile, nullptr, "InitSkillProjectile", nullptr, nullptr, Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::AutoChessSkillProjectile_eventInitSkillProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::AutoChessSkillProjectile_eventInitSkillProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessSkillProjectile::execInitSkillProjectile)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_InInstigator);
	P_GET_STRUCT(FVector,Z_Param_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitSkillProjectile(Z_Param_InInstigator,Z_Param_InDirection);
	P_NATIVE_END;
}
// End Class AAutoChessSkillProjectile Function InitSkillProjectile

// Begin Class AAutoChessSkillProjectile Function OnOverlapBegin
struct Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics
{
	struct AutoChessSkillProjectile_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\x84\xe7\x90\x86\xe9\x87\x8d\xe5\x8f\xa0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x84\xe7\x90\x86\xe9\x87\x8d\xe5\x8f\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((AutoChessSkillProjectile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessSkillProjectile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessSkillProjectile_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessSkillProjectile, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::AutoChessSkillProjectile_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::AutoChessSkillProjectile_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessSkillProjectile::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AAutoChessSkillProjectile Function OnOverlapBegin

// Begin Class AAutoChessSkillProjectile
void AAutoChessSkillProjectile::StaticRegisterNativesAAutoChessSkillProjectile()
{
	UClass* Class = AAutoChessSkillProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitSkillProjectile", &AAutoChessSkillProjectile::execInitSkillProjectile },
		{ "OnOverlapBegin", &AAutoChessSkillProjectile::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessSkillProjectile);
UClass* Z_Construct_UClass_AAutoChessSkillProjectile_NoRegister()
{
	return AAutoChessSkillProjectile::StaticClass();
}
struct Z_Construct_UClass_AAutoChessSkillProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x9f\xba\xe7\xb1\xbb\n * \xe6\x94\xaf\xe6\x8c\x81\xef\xbc\x9a\xe7\x9b\xb4\xe7\xba\xbf\xe9\xa3\x9e\xe8\xa1\x8c\xe3\x80\x81\xe7\xa9\xbf\xe9\x80\x8f\xe3\x80\x81""AOE\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe9\x80\x9f\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x81\xe5\xa4\xa7\xe5\xb0\x8f\xe5\x8f\x98\xe5\x8c\x96\n */" },
#endif
		{ "IncludePath", "AutoChessSkillProjectile.h" },
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x9f\xba\xe7\xb1\xbb\n\xe6\x94\xaf\xe6\x8c\x81\xef\xbc\x9a\xe7\x9b\xb4\xe7\xba\xbf\xe9\xa3\x9e\xe8\xa1\x8c\xe3\x80\x81\xe7\xa9\xbf\xe9\x80\x8f\xe3\x80\x81""AOE\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe9\x80\x9f\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe3\x80\x81\xe5\xa4\xa7\xe5\xb0\x8f\xe5\x8f\x98\xe5\x8c\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6 (\xe5\x8f\xaf\xe9\x80\x89)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6 (\xe5\x8f\xaf\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Niagara \xe7\x89\xb9\xe6\x95\x88\xe7\xbb\x84\xe4\xbb\xb6 (\xe5\x8f\xaf\xe9\x80\x89)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara \xe7\x89\xb9\xe6\x95\x88\xe7\xbb\x84\xe4\xbb\xb6 (\xe5\x8f\xaf\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifeTime_MetaData[] = {
		{ "Category", "Config|Lifetime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\xad\x98\xe6\x97\xb6\xe9\x97\xb4 (\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\xad\x98\xe6\x97\xb6\xe9\x97\xb4 (\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Config|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalSpeed_MetaData[] = {
		{ "Category", "Config|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe7\xbb\x88\xe9\x80\x9f\xe5\xba\xa6 (\xe5\xa6\x82\xe6\x9e\x9c < 0 \xe5\x88\x99\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe7\xbb\x88\xe9\x80\x9f\xe5\xba\xa6 (\xe5\xa6\x82\xe6\x9e\x9c < 0 \xe5\x88\x99\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurve_MetaData[] = {
		{ "Category", "Config|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x9f\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe6\x9b\xb2\xe7\xba\xbf (0-1)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9f\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe6\x9b\xb2\xe7\xba\xbf (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialScale_MetaData[] = {
		{ "Category", "Config|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe7\xbc\xa9\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe7\xbc\xa9\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalScale_MetaData[] = {
		{ "Category", "Config|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe7\xbb\x88\xe7\xbc\xa9\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe7\xbb\x88\xe7\xbc\xa9\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleGrowthRate_MetaData[] = {
		{ "Category", "Config|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbc\xa9\xe6\x94\xbe\xe5\x8f\x98\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbc\xa9\xe6\x94\xbe\xe5\x8f\x98\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AOERadiusGrid_MetaData[] = {
		{ "Category", "Config|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AOE \xe5\x8d\x8a\xe5\xbe\x84 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AOE \xe5\x8d\x8a\xe5\xbe\x84 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Config|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbc\xa4\xe5\xae\xb3 GameplayEffect \xe7\xb1\xbb (\xe6\x9b\xbf\xe4\xbb\xa3\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbc\xa4\xe5\xae\xb3)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3 GameplayEffect \xe7\xb1\xbb (\xe6\x9b\xbf\xe4\xbb\xa3\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbc\xa4\xe5\xae\xb3)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitVFX_MetaData[] = {
		{ "Category", "Config|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\xbb\xe4\xb8\xad\xe7\x89\xb9\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\xbb\xe4\xb8\xad\xe7\x89\xb9\xe6\x95\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorUnit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe7\x8a\xb6\xe6\x80\x81 ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe7\x8a\xb6\xe6\x80\x81 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb7\xb2\xe5\xa4\x84\xe7\x90\x86\xe8\xbf\x87\xe7\x9a\x84 Actor (\xe9\x98\xb2\xe6\xad\xa2\xe5\x90\x8c\xe4\xb8\x80\xe5\x8d\x95\xe4\xbd\x8d\xe7\x9a\x84\xe5\xa4\x9a\xe4\xb8\xaa\xe7\xbb\x84\xe4\xbb\xb6\xe9\x87\x8d\xe5\xa4\x8d\xe8\xa7\xa6\xe5\x8f\x91)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessSkillProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb7\xb2\xe5\xa4\x84\xe7\x90\x86\xe8\xbf\x87\xe7\x9a\x84 Actor (\xe9\x98\xb2\xe6\xad\xa2\xe5\x90\x8c\xe4\xb8\x80\xe5\x8d\x95\xe4\xbd\x8d\xe7\x9a\x84\xe5\xa4\x9a\xe4\xb8\xaa\xe7\xbb\x84\xe4\xbb\xb6\xe9\x87\x8d\xe5\xa4\x8d\xe8\xa7\xa6\xe5\x8f\x91)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleGrowthRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AOERadiusGrid;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcessedActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ProcessedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessSkillProjectile_InitSkillProjectile, "InitSkillProjectile" }, // 3044511956
		{ &Z_Construct_UFunction_AAutoChessSkillProjectile_OnOverlapBegin, "OnOverlapBegin" }, // 3854918874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessSkillProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComp_MetaData), NewProp_NiagaraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MaxLifeTime = { "MaxLifeTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, MaxLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLifeTime_MetaData), NewProp_MaxLifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpeed_MetaData), NewProp_InitialSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_FinalSpeed = { "FinalSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, FinalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalSpeed_MetaData), NewProp_FinalSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_SpeedCurve = { "SpeedCurve", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, SpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedCurve_MetaData), NewProp_SpeedCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InitialScale = { "InitialScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, InitialScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialScale_MetaData), NewProp_InitialScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_FinalScale = { "FinalScale", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, FinalScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalScale_MetaData), NewProp_FinalScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ScaleGrowthRate = { "ScaleGrowthRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, ScaleGrowthRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleGrowthRate_MetaData), NewProp_ScaleGrowthRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_AOERadiusGrid = { "AOERadiusGrid", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, AOERadiusGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AOERadiusGrid_MetaData), NewProp_AOERadiusGrid_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_HitVFX = { "HitVFX", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, HitVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitVFX_MetaData), NewProp_HitVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InstigatorUnit = { "InstigatorUnit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, InstigatorUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorUnit_MetaData), NewProp_InstigatorUnit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ProcessedActors_ElementProp = { "ProcessedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ProcessedActors = { "ProcessedActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessSkillProjectile, ProcessedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedActors_MetaData), NewProp_ProcessedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessSkillProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_NiagaraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_MaxLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InitialSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_FinalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_SpeedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InitialScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_FinalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ScaleGrowthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_AOERadiusGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_HitVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_InstigatorUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ProcessedActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessSkillProjectile_Statics::NewProp_ProcessedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessSkillProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessSkillProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessSkillProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessSkillProjectile_Statics::ClassParams = {
	&AAutoChessSkillProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessSkillProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessSkillProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessSkillProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessSkillProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessSkillProjectile()
{
	if (!Z_Registration_Info_UClass_AAutoChessSkillProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessSkillProjectile.OuterSingleton, Z_Construct_UClass_AAutoChessSkillProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessSkillProjectile.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessSkillProjectile>()
{
	return AAutoChessSkillProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessSkillProjectile);
AAutoChessSkillProjectile::~AAutoChessSkillProjectile() {}
// End Class AAutoChessSkillProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessSkillProjectile, AAutoChessSkillProjectile::StaticClass, TEXT("AAutoChessSkillProjectile"), &Z_Registration_Info_UClass_AAutoChessSkillProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessSkillProjectile), 2616874727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_4289487668(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessSkillProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
