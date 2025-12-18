// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessUnitBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessUnitBase() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessSkillProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessAttributeSet_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessUnitBase Function AttackTarget
struct Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics
{
	struct AutoChessUnitBase_eventAttackTarget_Parms
	{
		AAutoChessUnitBase* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x9d\xe8\xaf\x95\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x9d\xe8\xaf\x95\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventAttackTarget_Parms, Target), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "AttackTarget", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::AutoChessUnitBase_eventAttackTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::AutoChessUnitBase_eventAttackTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execAttackTarget)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function AttackTarget

// Begin Class AAutoChessUnitBase Function CheckCanFight
struct Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics
{
	struct AutoChessUnitBase_eventCheckCanFight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x88\x98\xe6\x96\x97 (\xe5\x9f\xba\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x88\x98\xe6\x96\x97 (\xe5\x9f\xba\xe4\xba\x8e\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessUnitBase_eventCheckCanFight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessUnitBase_eventCheckCanFight_Parms), &Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "CheckCanFight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::AutoChessUnitBase_eventCheckCanFight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::AutoChessUnitBase_eventCheckCanFight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execCheckCanFight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCanFight();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function CheckCanFight

// Begin Class AAutoChessUnitBase Function GetUnitVelocity
struct Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics
{
	struct AutoChessUnitBase_eventGetUnitVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\x95\xe4\xbd\x8d\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x9f\xe5\xba\xa6 (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xae\xbe\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\xaf\xe8\x83\xbd\xe5\xaf\xbc\xe8\x87\xb4 GetVelocity \xe4\xb8\xba 0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\x95\xe4\xbd\x8d\xe5\xbd\x93\xe5\x89\x8d\xe9\x80\x9f\xe5\xba\xa6 (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xae\xbe\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\xaf\xe8\x83\xbd\xe5\xaf\xbc\xe8\x87\xb4 GetVelocity \xe4\xb8\xba 0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventGetUnitVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "GetUnitVelocity", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::AutoChessUnitBase_eventGetUnitVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::AutoChessUnitBase_eventGetUnitVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execGetUnitVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetUnitVelocity();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function GetUnitVelocity

// Begin Class AAutoChessUnitBase Function InitFromUnitData
struct Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e DataAsset \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e DataAsset \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "InitFromUnitData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execInitFromUnitData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitFromUnitData();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function InitFromUnitData

// Begin Class AAutoChessUnitBase Function Multicast_PlayAttackAnimation
static FName NAME_AAutoChessUnitBase_Multicast_PlayAttackAnimation = FName(TEXT("Multicast_PlayAttackAnimation"));
void AAutoChessUnitBase::Multicast_PlayAttackAnimation()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_Multicast_PlayAttackAnimation),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x92\xad\xe6\x94\xbe\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "Multicast_PlayAttackAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execMulticast_PlayAttackAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayAttackAnimation_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function Multicast_PlayAttackAnimation

// Begin Class AAutoChessUnitBase Function Multicast_PlayDeathAnimation
static FName NAME_AAutoChessUnitBase_Multicast_PlayDeathAnimation = FName(TEXT("Multicast_PlayDeathAnimation"));
void AAutoChessUnitBase::Multicast_PlayDeathAnimation()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_Multicast_PlayDeathAnimation),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x92\xad\xe6\x94\xbe\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "Multicast_PlayDeathAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execMulticast_PlayDeathAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayDeathAnimation_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function Multicast_PlayDeathAnimation

// Begin Class AAutoChessUnitBase Function Multicast_PlaySkillAnimation
static FName NAME_AAutoChessUnitBase_Multicast_PlaySkillAnimation = FName(TEXT("Multicast_PlaySkillAnimation"));
void AAutoChessUnitBase::Multicast_PlaySkillAnimation()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_Multicast_PlaySkillAnimation),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x92\xad\xe6\x94\xbe\xe6\x8a\x80\xe8\x83\xbd\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe6\x8a\x80\xe8\x83\xbd\xe5\x8a\xa8\xe7\x94\xbb (\xe5\xa4\x9a\xe6\x92\xad)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "Multicast_PlaySkillAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execMulticast_PlaySkillAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlaySkillAnimation_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function Multicast_PlaySkillAnimation

// Begin Class AAutoChessUnitBase Function OnDeath
static FName NAME_AAutoChessUnitBase_OnDeath = FName(TEXT("OnDeath"));
void AAutoChessUnitBase::OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_OnDeath),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xad\xbb\xe4\xba\xa1\xe5\xa4\x84\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe5\xa4\x84\xe7\x90\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function OnDeath

// Begin Class AAutoChessUnitBase Function OnRep_CurrentGridPos
struct Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "OnRep_CurrentGridPos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execOnRep_CurrentGridPos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentGridPos();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function OnRep_CurrentGridPos

// Begin Class AAutoChessUnitBase Function OnRep_TeamID
struct Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "OnRep_TeamID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execOnRep_TeamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamID();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function OnRep_TeamID

// Begin Class AAutoChessUnitBase Function ReceiveDamage
struct Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics
{
	struct AutoChessUnitBase_eventReceiveDamage_Parms
	{
		float DamageAmount;
		AAutoChessUnitBase* Attacker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\xae\xb3\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x88\xb0\xe4\xbc\xa4\xe5\xae\xb3" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventReceiveDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventReceiveDamage_Parms, Attacker), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::NewProp_Attacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::AutoChessUnitBase_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::AutoChessUnitBase_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execReceiveDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Attacker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage(Z_Param_DamageAmount,Z_Param_Attacker);
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function ReceiveDamage

// Begin Class AAutoChessUnitBase Function ResetUnit
struct Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x87\x8d\xe7\xbd\xae\xe5\x8d\x95\xe4\xbd\x8d\xe7\x8a\xb6\xe6\x80\x81 (\xe5\xa4\x8d\xe6\xb4\xbb\xe5\xb9\xb6\xe5\xbd\x92\xe4\xbd\x8d)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x8d\xe7\xbd\xae\xe5\x8d\x95\xe4\xbd\x8d\xe7\x8a\xb6\xe6\x80\x81 (\xe5\xa4\x8d\xe6\xb4\xbb\xe5\xb9\xb6\xe5\xbd\x92\xe4\xbd\x8d)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "ResetUnit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execResetUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetUnit();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function ResetUnit

// Begin Class AAutoChessUnitBase Function SnapToGrid
struct Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x9e\xac\xe9\x97\xb4)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\x9e\xac\xe9\x97\xb4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "SnapToGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execSnapToGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapToGrid();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function SnapToGrid

// Begin Class AAutoChessUnitBase Function SpawnSkillProjectile
struct Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics
{
	struct AutoChessUnitBase_eventSpawnSkillProjectile_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\x91\xe5\xb0\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 (\xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe5\xb0\x84\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9 (\xe4\xbe\x9b\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessUnitBase_eventSpawnSkillProjectile_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "SpawnSkillProjectile", nullptr, nullptr, Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::AutoChessUnitBase_eventSpawnSkillProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::AutoChessUnitBase_eventSpawnSkillProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execSpawnSkillProjectile)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnSkillProjectile(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function SpawnSkillProjectile

// Begin Class AAutoChessUnitBase Function UpdateTeamColor
struct Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe5\x8a\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe9\x98\x9f\xe4\xbc\x8d\xe9\xa2\x9c\xe8\x89\xb2 (\xe7\x94\xa8\xe4\xba\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe6\x88\x96\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe9\x98\x9f\xe4\xbc\x8d\xe9\xa2\x9c\xe8\x89\xb2 (\xe7\x94\xa8\xe4\xba\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe6\x88\x96\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "UpdateTeamColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execUpdateTeamColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTeamColor();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function UpdateTeamColor

// Begin Class AAutoChessUnitBase Function UseSkill
static FName NAME_AAutoChessUnitBase_UseSkill = FName(TEXT("UseSkill"));
void AAutoChessUnitBase::UseSkill()
{
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessUnitBase_UseSkill),NULL);
}
struct Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd (C++ \xe5\xae\x9e\xe7\x8e\xb0\xe5\x9f\xba\xe7\xa1\x80\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe6\x89\xa9\xe5\xb1\x95)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8a\x80\xe8\x83\xbd (C++ \xe5\xae\x9e\xe7\x8e\xb0\xe5\x9f\xba\xe7\xa1\x80\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe6\x89\xa9\xe5\xb1\x95)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessUnitBase, nullptr, "UseSkill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessUnitBase_UseSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessUnitBase_UseSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessUnitBase::execUseSkill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseSkill_Implementation();
	P_NATIVE_END;
}
// End Class AAutoChessUnitBase Function UseSkill

// Begin Class AAutoChessUnitBase
void AAutoChessUnitBase::StaticRegisterNativesAAutoChessUnitBase()
{
	UClass* Class = AAutoChessUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackTarget", &AAutoChessUnitBase::execAttackTarget },
		{ "CheckCanFight", &AAutoChessUnitBase::execCheckCanFight },
		{ "GetUnitVelocity", &AAutoChessUnitBase::execGetUnitVelocity },
		{ "InitFromUnitData", &AAutoChessUnitBase::execInitFromUnitData },
		{ "Multicast_PlayAttackAnimation", &AAutoChessUnitBase::execMulticast_PlayAttackAnimation },
		{ "Multicast_PlayDeathAnimation", &AAutoChessUnitBase::execMulticast_PlayDeathAnimation },
		{ "Multicast_PlaySkillAnimation", &AAutoChessUnitBase::execMulticast_PlaySkillAnimation },
		{ "OnDeath", &AAutoChessUnitBase::execOnDeath },
		{ "OnRep_CurrentGridPos", &AAutoChessUnitBase::execOnRep_CurrentGridPos },
		{ "OnRep_TeamID", &AAutoChessUnitBase::execOnRep_TeamID },
		{ "ReceiveDamage", &AAutoChessUnitBase::execReceiveDamage },
		{ "ResetUnit", &AAutoChessUnitBase::execResetUnit },
		{ "SnapToGrid", &AAutoChessUnitBase::execSnapToGrid },
		{ "SpawnSkillProjectile", &AAutoChessUnitBase::execSpawnSkillProjectile },
		{ "UpdateTeamColor", &AAutoChessUnitBase::execUpdateTeamColor },
		{ "UseSkill", &AAutoChessUnitBase::execUseSkill },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessUnitBase);
UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister()
{
	return AAutoChessUnitBase::StaticClass();
}
struct Z_Construct_UClass_AAutoChessUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\x95\xe4\xbd\x8d\xe5\x9f\xba\xe7\xb1\xbb\n * \xe5\x8c\x85\xe5\x90\xab\xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AutoChessUnitBase.h" },
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe5\x8d\x95\xe4\xbd\x8d\xe5\x9f\xba\xe7\xb1\xbb\n\xe5\x8c\x85\xe5\x90\xab\xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe6\x8e\xa5\xe5\x8f\xa3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- GAS \xe7\xbb\x84\xe4\xbb\xb6 ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- GAS \xe7\xbb\x84\xe4\xbb\xb6 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetComp_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- UI \xe7\xbb\x84\xe4\xbb\xb6 ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI \xe7\xbb\x84\xe4\xbb\xb6 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "AutoChess|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\x80\xe6\x9d\xa1 Widget \xe7\xb1\xbb\xef\xbc\x88\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x80\xe6\x9d\xa1 Widget \xe7\xb1\xbb\xef\xbc\x88\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\x9f\xe4\xbc\x8dID (0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitData_MetaData[] = {
		{ "Category", "AutoChess|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae (DataAsset)\n// \xe5\xa6\x82\xe6\x9e\x9c\xe8\xae\xbe\xe7\xbd\xae\xe4\xba\x86\xe6\xad\xa4\xe9\xa1\xb9\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x98\xe5\x85\x88\xe4\xbd\xbf\xe7\x94\xa8\xe5\x85\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa3\x8b\xe5\xad\x90\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae (DataAsset)\n\xe5\xa6\x82\xe6\x9e\x9c\xe8\xae\xbe\xe7\xbd\xae\xe4\xba\x86\xe6\xad\xa4\xe9\xa1\xb9\xef\xbc\x8c\xe5\xb0\x86\xe4\xbc\x98\xe5\x85\x88\xe4\xbd\xbf\xe7\x94\xa8\xe5\x85\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa3\x8b\xe5\xad\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitDataHandle_MetaData[] = {
		{ "Category", "AutoChess|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae (\xe6\x96\xb0\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe5\xbc\x95\xe7\x94\xa8 DataTable Row)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae (\xe6\x96\xb0\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe5\xbc\x95\xe7\x94\xa8 DataTable Row)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x94\x9f\xe5\x91\xbd\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeGrid_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xac\xa1/\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xac\xa1/\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMana_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnAttack_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe5\x9b\x9e\xe8\x93\x9d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x9b\x9e\xe8\x93\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnHit_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\x97\xe5\x87\xbb\xe5\x9b\x9e\xe8\x93\x9d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x87\xbb\xe5\x9b\x9e\xe8\x93\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitAbilityClass_MetaData[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd Ability \xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd Ability \xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilityClass_MetaData[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd Ability \xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe5\x8a\xa8\xe6\x8a\x80\xe8\x83\xbd Ability \xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillVFX_MetaData[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd\xe7\x89\xb9\xe6\x95\x88 (\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\x89\xb9\xe6\x95\x88 (\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillNiagaraVFX_MetaData[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd\xe7\x89\xb9\xe6\x95\x88 (Niagara \xe7\x89\x88\xe6\x9c\xac\xef\xbc\x8c\xe5\x8f\xaf\xe9\x80\x89)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\x89\xb9\xe6\x95\x88 (Niagara \xe7\x89\x88\xe6\x9c\xac\xef\xbc\x8c\xe5\x8f\xaf\xe9\x80\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AutoChess|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb (\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba\xe5\x88\x99\xe4\xb8\xba\xe8\xbf\x91\xe6\x88\x98)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb (\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba\xe5\x88\x99\xe4\xb8\xba\xe8\xbf\x91\xe6\x88\x98)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocketName_MetaData[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe5\x90\x8d\xe7\xa7\xb0 (\xe5\xa6\x82\xe6\x9e\x9c\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe4\xbc\x98\xe5\x85\x88\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe4\xbd\x8d\xe7\xbd\xae)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe5\x90\x8d\xe7\xa7\xb0 (\xe5\xa6\x82\xe6\x9e\x9c\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe4\xbc\x98\xe5\x85\x88\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe4\xbd\x8d\xe7\xbd\xae)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnOffset_MetaData[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe5\x81\x8f\xe7\xa7\xbb (\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x8f\x92\xe6\xa7\xbd\xe6\x97\xa0\xe6\x95\x88\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x81\x8f\xe7\xa7\xbb)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe5\x81\x8f\xe7\xa7\xbb (\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\x8f\x92\xe6\xa7\xbd\xe6\x97\xa0\xe6\x95\x88\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x81\x8f\xe7\xa7\xbb)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillProjectileClass_MetaData[] = {
		{ "Category", "AutoChess|Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb (\xe5\xa4\xa7\xe7\x81\xab\xe7\x90\x83\xe7\xad\x89)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x8a\x95\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb (\xe5\xa4\xa7\xe7\x81\xab\xe7\x90\x83\xe7\xad\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGridPos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe6\xa0\xbc\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae (\xe7\x94\xa8\xe4\xba\x8e\xe5\x9b\x9e\xe5\x90\x88\xe9\x87\x8d\xe7\xbd\xae)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe6\xa0\xbc\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae (\xe7\x94\xa8\xe4\xba\x8e\xe5\x9b\x9e\xe5\x90\x88\xe9\x87\x8d\xe7\xbd\xae)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "AutoChess|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridPos_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGridPos_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xb8\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 (\xe7\xa7\xbb\xe5\x8a\xa8\xe4\xb8\xad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe7\xa7\xbb\xe5\x8a\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe7\xa7\xbb\xe5\x8a\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "AutoChess|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillMontage_MetaData[] = {
		{ "Category", "AutoChess|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "AutoChess|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xad\xbb\xe4\xba\xa1\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "AutoChess|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\xad\xbb\xe4\xba\xa1\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\xad\xbb\xe4\xba\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (Unreal Units / sec)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6 (Unreal Units / sec)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldDecayRate_MetaData[] = {
		{ "Category", "AutoChess|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\xa4\xe7\x9b\xbe\xe6\xb5\x81\xe5\xa4\xb1\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xaf\x8f\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\xa4\xe7\x9b\xbe\xe6\xb5\x81\xe5\xa4\xb1\xe9\x80\x9f\xe5\xba\xa6 (\xe6\xaf\x8f\xe7\xa7\x92)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnitDataHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackRangeGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnHit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitAbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilityClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillNiagaraVFX;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SkillProjectileClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartGridPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldDecayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessUnitBase_AttackTarget, "AttackTarget" }, // 2292515219
		{ &Z_Construct_UFunction_AAutoChessUnitBase_CheckCanFight, "CheckCanFight" }, // 1465676004
		{ &Z_Construct_UFunction_AAutoChessUnitBase_GetUnitVelocity, "GetUnitVelocity" }, // 3175086555
		{ &Z_Construct_UFunction_AAutoChessUnitBase_InitFromUnitData, "InitFromUnitData" }, // 3038107873
		{ &Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayAttackAnimation, "Multicast_PlayAttackAnimation" }, // 3318043391
		{ &Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlayDeathAnimation, "Multicast_PlayDeathAnimation" }, // 2169110577
		{ &Z_Construct_UFunction_AAutoChessUnitBase_Multicast_PlaySkillAnimation, "Multicast_PlaySkillAnimation" }, // 361902134
		{ &Z_Construct_UFunction_AAutoChessUnitBase_OnDeath, "OnDeath" }, // 1321803549
		{ &Z_Construct_UFunction_AAutoChessUnitBase_OnRep_CurrentGridPos, "OnRep_CurrentGridPos" }, // 4028093311
		{ &Z_Construct_UFunction_AAutoChessUnitBase_OnRep_TeamID, "OnRep_TeamID" }, // 3333258896
		{ &Z_Construct_UFunction_AAutoChessUnitBase_ReceiveDamage, "ReceiveDamage" }, // 2033339204
		{ &Z_Construct_UFunction_AAutoChessUnitBase_ResetUnit, "ResetUnit" }, // 979343702
		{ &Z_Construct_UFunction_AAutoChessUnitBase_SnapToGrid, "SnapToGrid" }, // 1754529632
		{ &Z_Construct_UFunction_AAutoChessUnitBase_SpawnSkillProjectile, "SpawnSkillProjectile" }, // 2698144236
		{ &Z_Construct_UFunction_AAutoChessUnitBase_UpdateTeamColor, "UpdateTeamColor" }, // 1573143582
		{ &Z_Construct_UFunction_AAutoChessUnitBase_UseSkill, "UseSkill" }, // 2863909705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttributeSet), Z_Construct_UClass_UAutoChessAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_HealthBarWidgetComp = { "HealthBarWidgetComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, HealthBarWidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetComp_MetaData), NewProp_HealthBarWidgetComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TeamID = { "TeamID", "OnRep_TeamID", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, TeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitData = { "UnitData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, UnitData), Z_Construct_UClass_UAutoChessUnitData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitData_MetaData), NewProp_UnitData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitDataHandle = { "UnitDataHandle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, UnitDataHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitDataHandle_MetaData), NewProp_UnitDataHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackRangeGrid = { "AttackRangeGrid", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackRangeGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeGrid_MetaData), NewProp_AttackRangeGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_InitialMana = { "InitialMana", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, InitialMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMana_MetaData), NewProp_InitialMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ManaRegenOnAttack = { "ManaRegenOnAttack", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ManaRegenOnAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnAttack_MetaData), NewProp_ManaRegenOnAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ManaRegenOnHit = { "ManaRegenOnHit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ManaRegenOnHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnHit_MetaData), NewProp_ManaRegenOnHit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitAbilityClass = { "UnitAbilityClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, UnitAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitAbilityClass_MetaData), NewProp_UnitAbilityClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_PassiveAbilityClass = { "PassiveAbilityClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, PassiveAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilityClass_MetaData), NewProp_PassiveAbilityClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillVFX = { "SkillVFX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, SkillVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillVFX_MetaData), NewProp_SkillVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillNiagaraVFX = { "SkillNiagaraVFX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, SkillNiagaraVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillNiagaraVFX_MetaData), NewProp_SkillNiagaraVFX_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileSocketName = { "ProjectileSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ProjectileSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocketName_MetaData), NewProp_ProjectileSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileSpawnOffset = { "ProjectileSpawnOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ProjectileSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnOffset_MetaData), NewProp_ProjectileSpawnOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillProjectileClass = { "SkillProjectileClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, SkillProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessSkillProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillProjectileClass_MetaData), NewProp_SkillProjectileClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_StartGridPos = { "StartGridPos", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, StartGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGridPos_MetaData), NewProp_StartGridPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, CurrentTarget), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentGridPos = { "CurrentGridPos", "OnRep_CurrentGridPos", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, CurrentGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridPos_MetaData), NewProp_CurrentGridPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGridPos_MetaData), NewProp_TargetGridPos_MetaData) };
void Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AAutoChessUnitBase*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessUnitBase), &Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillMontage_MetaData), NewProp_SkillMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
void Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((AAutoChessUnitBase*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessUnitBase), &Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ShieldDecayRate = { "ShieldDecayRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessUnitBase, ShieldDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldDecayRate_MetaData), NewProp_ShieldDecayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_HealthBarWidgetComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_HealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackRangeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_InitialMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ManaRegenOnAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ManaRegenOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_UnitAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_PassiveAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillNiagaraVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ProjectileSpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_StartGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_CurrentGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_SkillMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessUnitBase_Statics::NewProp_ShieldDecayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAutoChessUnitBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAutoChessUnitBase, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessUnitBase_Statics::ClassParams = {
	&AAutoChessUnitBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessUnitBase()
{
	if (!Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton, Z_Construct_UClass_AAutoChessUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessUnitBase.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessUnitBase>()
{
	return AAutoChessUnitBase::StaticClass();
}
void AAutoChessUnitBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TeamID(TEXT("TeamID"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_AttackDamage(TEXT("AttackDamage"));
	static const FName Name_AttackRangeGrid(TEXT("AttackRangeGrid"));
	static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_StartGridPos(TEXT("StartGridPos"));
	static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
	static const FName Name_CurrentGridPos(TEXT("CurrentGridPos"));
	static const FName Name_TargetGridPos(TEXT("TargetGridPos"));
	static const FName Name_bIsMoving(TEXT("bIsMoving"));
	static const FName Name_bIsDead(TEXT("bIsDead"));
	static const FName Name_MoveSpeed(TEXT("MoveSpeed"));
	const bool bIsValid = true
		&& Name_TeamID == ClassReps[(int32)ENetFields_Private::TeamID].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_AttackDamage == ClassReps[(int32)ENetFields_Private::AttackDamage].Property->GetFName()
		&& Name_AttackRangeGrid == ClassReps[(int32)ENetFields_Private::AttackRangeGrid].Property->GetFName()
		&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_StartGridPos == ClassReps[(int32)ENetFields_Private::StartGridPos].Property->GetFName()
		&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
		&& Name_CurrentGridPos == ClassReps[(int32)ENetFields_Private::CurrentGridPos].Property->GetFName()
		&& Name_TargetGridPos == ClassReps[(int32)ENetFields_Private::TargetGridPos].Property->GetFName()
		&& Name_bIsMoving == ClassReps[(int32)ENetFields_Private::bIsMoving].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAutoChessUnitBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessUnitBase);
AAutoChessUnitBase::~AAutoChessUnitBase() {}
// End Class AAutoChessUnitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessUnitBase, AAutoChessUnitBase::StaticClass, TEXT("AAutoChessUnitBase"), &Z_Registration_Info_UClass_AAutoChessUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessUnitBase), 3481284562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_1348665052(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
