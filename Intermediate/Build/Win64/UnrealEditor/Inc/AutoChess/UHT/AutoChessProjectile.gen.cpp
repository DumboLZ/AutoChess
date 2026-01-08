// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessProjectile() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessProjectile();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedCardEntry();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin ScriptStruct FWeightedCardEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightedCardEntry;
class UScriptStruct* FWeightedCardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedCardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightedCardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedCardEntry, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("WeightedCardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_WeightedCardEntry.OuterSingleton;
}
template<> AUTOCHESS_API UScriptStruct* StaticStruct<FWeightedCardEntry>()
{
	return FWeightedCardEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeightedCardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb8\xa6\xe6\x9d\x83\xe9\x87\x8d\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe6\x9d\xa1\xe7\x9b\xae\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xa6\xe6\x9d\x83\xe9\x87\x8d\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x8c\xe6\x9d\xa1\xe7\x9b\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardClass_MetaData[] = {
		{ "Category", "WeightedCardEntry" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "WeightedCardEntry" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedCardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::NewProp_CardClass = { "CardClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightedCardEntry, CardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardClass_MetaData), NewProp_CardClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeightedCardEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::NewProp_CardClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
	nullptr,
	&NewStructOps,
	"WeightedCardEntry",
	Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::PropPointers),
	sizeof(FWeightedCardEntry),
	alignof(FWeightedCardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeightedCardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedCardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightedCardEntry.InnerSingleton, Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeightedCardEntry.InnerSingleton;
}
// End ScriptStruct FWeightedCardEntry

// Begin Class AAutoChessProjectile Function OnOverlapBegin
struct Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics
{
	struct AutoChessProjectile_eventOnOverlapBegin_Parms
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
		{ "Comment", "// \xe7\xa2\xb0\xe6\x92\x9e\xe5\xa4\x84\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe5\xa4\x84\xe7\x90\x86" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessProjectile_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessProjectile_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessProjectile_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessProjectile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((AutoChessProjectile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessProjectile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessProjectile_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessProjectile, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::AutoChessProjectile_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::AutoChessProjectile_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessProjectile::execOnOverlapBegin)
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
// End Class AAutoChessProjectile Function OnOverlapBegin

// Begin Class AAutoChessProjectile Function OnRep_TargetUnit
struct Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessProjectile, nullptr, "OnRep_TargetUnit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessProjectile::execOnRep_TargetUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TargetUnit();
	P_NATIVE_END;
}
// End Class AAutoChessProjectile Function OnRep_TargetUnit

// Begin Class AAutoChessProjectile
void AAutoChessProjectile::StaticRegisterNativesAAutoChessProjectile()
{
	UClass* Class = AAutoChessProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &AAutoChessProjectile::execOnOverlapBegin },
		{ "OnRep_TargetUnit", &AAutoChessProjectile::execOnRep_TargetUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessProjectile);
UClass* Z_Construct_UClass_AAutoChessProjectile_NoRegister()
{
	return AAutoChessProjectile::StaticClass();
}
struct Z_Construct_UClass_AAutoChessProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutoChessProjectile.h" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUnit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorUnit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x96\xbd\xe6\xb3\x95\xe8\x80\x85\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xbd\xe6\xb3\x95\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[] = {
		{ "Category", "AutoChess|Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xa0\x87\xe7\xad\xbe (\xe7\x94\xa8\xe4\xba\x8e\xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd\xe5\x8a\xa0\xe6\x88\x90\xe5\x88\xa4\xe5\xae\x9a)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb\xe5\x9e\x8b\xe6\xa0\x87\xe7\xad\xbe (\xe7\x94\xa8\xe4\xba\x8e\xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd\xe5\x8a\xa0\xe6\x88\x90\xe5\x88\xa4\xe5\xae\x9a)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "AutoChess|Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x80\xe5\xb1\x9e\xe9\x98\x9f\xe4\xbc\x8dID (\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\xa4\xe6\x96\xad\xe6\x95\x8c\xe6\x88\x91)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x80\xe5\xb1\x9e\xe9\x98\x9f\xe4\xbc\x8dID (\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\xa4\xe6\x96\xad\xe6\x95\x8c\xe6\x88\x91)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCardOnHitFriendly_MetaData[] = {
		{ "Category", "AutoChess|CardGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x91\xbd\xe4\xb8\xad\xe5\x8f\x8b\xe6\x96\xb9\xe6\x97\xb6\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\xa1\xe7\x89\x8c (\xe4\xbb\xa3\xe6\x9b\xbf\xe4\xbc\xa4\xe5\xae\xb3)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x91\xbd\xe4\xb8\xad\xe5\x8f\x8b\xe6\x96\xb9\xe6\x97\xb6\xe7\x94\x9f\xe6\x88\x90\xe5\x8d\xa1\xe7\x89\x8c (\xe4\xbb\xa3\xe6\x9b\xbf\xe4\xbc\xa4\xe5\xae\xb3)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPool_MetaData[] = {
		{ "Category", "AutoChess|CardGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe6\xb1\xa0 (\xe5\x91\xbd\xe4\xb8\xad\xe5\x8f\x8b\xe6\x96\xb9\xe6\x97\xb6\xe6\x8c\x89\xe6\x9d\x83\xe9\x87\x8d\xe6\x8a\xbd\xe5\x8f\x96\xe4\xb8\x80\xe5\xbc\xa0)\n" },
#endif
		{ "EditCondition", "bGenerateCardOnHitFriendly" },
		{ "ModuleRelativePath", "AutoChessProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\xb1\xa0 (\xe5\x91\xbd\xe4\xb8\xad\xe5\x8f\x8b\xe6\x96\xb9\xe6\x97\xb6\xe6\x8c\x89\xe6\x9d\x83\xe9\x87\x8d\xe6\x8a\xbd\xe5\x8f\x96\xe4\xb8\x80\xe5\xbc\xa0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static void NewProp_bGenerateCardOnHitFriendly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCardOnHitFriendly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessProjectile_OnOverlapBegin, "OnOverlapBegin" }, // 2409186878
		{ &Z_Construct_UFunction_AAutoChessProjectile_OnRep_TargetUnit, "OnRep_TargetUnit" }, // 3095125238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_TargetUnit = { "TargetUnit", "OnRep_TargetUnit", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, TargetUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUnit_MetaData), NewProp_TargetUnit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_InstigatorUnit = { "InstigatorUnit", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, InstigatorUnit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorUnit_MetaData), NewProp_InstigatorUnit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, ProjectileType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileType_MetaData), NewProp_ProjectileType_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
void Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_bGenerateCardOnHitFriendly_SetBit(void* Obj)
{
	((AAutoChessProjectile*)Obj)->bGenerateCardOnHitFriendly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_bGenerateCardOnHitFriendly = { "bGenerateCardOnHitFriendly", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessProjectile), &Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_bGenerateCardOnHitFriendly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCardOnHitFriendly_MetaData), NewProp_bGenerateCardOnHitFriendly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CardPool_Inner = { "CardPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeightedCardEntry, METADATA_PARAMS(0, nullptr) }; // 3912207657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CardPool = { "CardPool", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessProjectile, CardPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPool_MetaData), NewProp_CardPool_MetaData) }; // 3912207657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_TargetUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_InstigatorUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_ProjectileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_bGenerateCardOnHitFriendly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CardPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessProjectile_Statics::NewProp_CardPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessProjectile_Statics::ClassParams = {
	&AAutoChessProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessProjectile()
{
	if (!Z_Registration_Info_UClass_AAutoChessProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessProjectile.OuterSingleton, Z_Construct_UClass_AAutoChessProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessProjectile.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessProjectile>()
{
	return AAutoChessProjectile::StaticClass();
}
void AAutoChessProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TargetUnit(TEXT("TargetUnit"));
	static const FName Name_InstigatorUnit(TEXT("InstigatorUnit"));
	static const FName Name_TeamID(TEXT("TeamID"));
	const bool bIsValid = true
		&& Name_TargetUnit == ClassReps[(int32)ENetFields_Private::TargetUnit].Property->GetFName()
		&& Name_InstigatorUnit == ClassReps[(int32)ENetFields_Private::InstigatorUnit].Property->GetFName()
		&& Name_TeamID == ClassReps[(int32)ENetFields_Private::TeamID].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAutoChessProjectile"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessProjectile);
AAutoChessProjectile::~AAutoChessProjectile() {}
// End Class AAutoChessProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeightedCardEntry::StaticStruct, Z_Construct_UScriptStruct_FWeightedCardEntry_Statics::NewStructOps, TEXT("WeightedCardEntry"), &Z_Registration_Info_UScriptStruct_WeightedCardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightedCardEntry), 3912207657U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessProjectile, AAutoChessProjectile::StaticClass, TEXT("AAutoChessProjectile"), &Z_Registration_Info_UClass_AAutoChessProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessProjectile), 1276549105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_3361586258(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessProjectile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
