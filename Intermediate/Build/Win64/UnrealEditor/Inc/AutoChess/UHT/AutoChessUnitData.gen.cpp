// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessUnitData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessUnitData() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessProjectile_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitData();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessUnitData_NoRegister();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoChessUnitRow();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin ScriptStruct FAutoChessUnitRow
static_assert(std::is_polymorphic<FAutoChessUnitRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAutoChessUnitRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoChessUnitRow;
class UScriptStruct* FAutoChessUnitRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoChessUnitRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoChessUnitRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoChessUnitRow, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("AutoChessUnitRow"));
	}
	return Z_Registration_Info_UScriptStruct_AutoChessUnitRow.OuterSingleton;
}
template<> AUTOCHESS_API UScriptStruct* StaticStruct<FAutoChessUnitRow>()
{
	return FAutoChessUnitRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\n * \xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8 DataTable \xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae\xe6\xa3\x8b\xe5\xad\x90\xe5\xb1\x9e\xe6\x80\xa7\n */" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\xe7\xbb\x93\xe6\x9e\x84\n\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8 DataTable \xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae\xe6\xa3\x8b\xe5\xad\x90\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClass_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe5\xad\x90 Blueprint \xe7\xb1\xbb (\xe7\x94\xa8\xe4\xba\x8e\xe7\x94\x9f\xe6\x88\x90)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90 Blueprint \xe7\xb1\xbb (\xe7\x94\xa8\xe4\xba\x8e\xe7\x94\x9f\xe6\x88\x90)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe4\xbb\xb7\xe6\xa0\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe4\xbb\xb7\xe6\xa0\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe5\xad\x90\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7 ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeGrid_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritRate_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritDamage_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150%)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150%)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\x8a\x80\xe8\x83\xbd\xe4\xb8\x8e\xe8\x93\x9d\xe9\x87\x8f ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\x8a\x80\xe8\x83\xbd\xe4\xb8\x8e\xe8\x93\x9d\xe9\x87\x8f ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnAttack_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnHit_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilityClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b Gameplay Tags (\xe7\xa7\x8d\xe6\x97\x8f\xe3\x80\x81\xe8\x81\x8c\xe4\xb8\x9a\xe3\x80\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xad\x89\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x8a\x80\xe8\x83\xbd\xe5\x88\xa4\xe5\xae\x9a)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b Gameplay Tags (\xe7\xa7\x8d\xe6\x97\x8f\xe3\x80\x81\xe8\x81\x8c\xe4\xb8\x9a\xe3\x80\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xad\x89\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x8a\x80\xe8\x83\xbd\xe5\x88\xa4\xe5\xae\x9a)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillVFX_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillNiagaraVFX_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnitName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimBlueprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackRangeGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CritRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CritDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnHit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilityClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillNiagaraVFX;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoChessUnitRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClass_MetaData), NewProp_UnitClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, UnitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitName_MetaData), NewProp_UnitName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, AnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimBlueprint_MetaData), NewProp_AnimBlueprint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackRangeGrid = { "AttackRangeGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, AttackRangeGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeGrid_MetaData), NewProp_AttackRangeGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_CritRate = { "CritRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, CritRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritRate_MetaData), NewProp_CritRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_CritDamage = { "CritDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, CritDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritDamage_MetaData), NewProp_CritDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_InitialMana = { "InitialMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, InitialMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMana_MetaData), NewProp_InitialMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ManaRegenOnAttack = { "ManaRegenOnAttack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, ManaRegenOnAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnAttack_MetaData), NewProp_ManaRegenOnAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ManaRegenOnHit = { "ManaRegenOnHit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, ManaRegenOnHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnHit_MetaData), NewProp_ManaRegenOnHit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_PassiveAbilityClass = { "PassiveAbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, PassiveAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilityClass_MetaData), NewProp_PassiveAbilityClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_InitialTags = { "InitialTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, InitialTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTags_MetaData), NewProp_InitialTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkillVFX = { "SkillVFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, SkillVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillVFX_MetaData), NewProp_SkillVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkillNiagaraVFX = { "SkillNiagaraVFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, SkillNiagaraVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillNiagaraVFX_MetaData), NewProp_SkillNiagaraVFX_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessUnitRow, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_UnitName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AttackRangeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_CritRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_CritDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_InitialMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ManaRegenOnAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ManaRegenOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_PassiveAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_InitialTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkillVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_SkillNiagaraVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AutoChessUnitRow",
	Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::PropPointers),
	sizeof(FAutoChessUnitRow),
	alignof(FAutoChessUnitRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoChessUnitRow()
{
	if (!Z_Registration_Info_UScriptStruct_AutoChessUnitRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoChessUnitRow.InnerSingleton, Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoChessUnitRow.InnerSingleton;
}
// End ScriptStruct FAutoChessUnitRow

// Begin Class UAutoChessUnitData
void UAutoChessUnitData::StaticRegisterNativesUAutoChessUnitData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoChessUnitData);
UClass* Z_Construct_UClass_UAutoChessUnitData_NoRegister()
{
	return UAutoChessUnitData::StaticClass();
}
struct Z_Construct_UClass_UAutoChessUnitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\n * \xe5\x8c\x85\xe5\x90\xab\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe9\x85\x8d\xe7\xbd\xae\n */" },
#endif
		{ "IncludePath", "AutoChessUnitData.h" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae\xe8\xb5\x84\xe4\xba\xa7\n\xe5\x8c\x85\xe5\x90\xab\xe6\xa3\x8b\xe5\xad\x90\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe7\xa1\x80\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\xe3\x80\x81\xe6\x8a\x80\xe8\x83\xbd\xe7\xad\x89\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xa1\xe6\x81\xaf ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe5\xad\x90\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe5\xad\x90\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7 ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\x88\x98\xe6\x96\x97\xe5\xb1\x9e\xe6\x80\xa7 ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeGrid_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritRate_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe7\x8e\x87 (0.0 - 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritDamage_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150%)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\xb4\xe5\x87\xbb\xe4\xbc\xa4\xe5\xae\xb3\xe5\x80\x8d\xe7\x8e\x87 (\xe4\xbe\x8b\xe5\xa6\x82 1.5 \xe8\xa1\xa8\xe7\xa4\xba 150%)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xe6\x8a\x80\xe8\x83\xbd\xe4\xb8\x8e\xe8\x93\x9d\xe9\x87\x8f ---\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xe6\x8a\x80\xe8\x83\xbd\xe4\xb8\x8e\xe8\x93\x9d\xe9\x87\x8f ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnAttack_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenOnHit_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilityClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b Gameplay Tags (\xe7\xa7\x8d\xe6\x97\x8f\xe3\x80\x81\xe8\x81\x8c\xe4\xb8\x9a\xe3\x80\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xad\x89\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x8a\x80\xe8\x83\xbd\xe5\x88\xa4\xe5\xae\x9a)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b Gameplay Tags (\xe7\xa7\x8d\xe6\x97\x8f\xe3\x80\x81\xe8\x81\x8c\xe4\xb8\x9a\xe3\x80\x81\xe7\xb1\xbb\xe5\x9e\x8b\xe7\xad\x89\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x8a\x80\xe8\x83\xbd\xe5\x88\xa4\xe5\xae\x9a)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillVFX_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillNiagaraVFX_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AutoChessUnitData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnitName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AnimBlueprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackRangeGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CritRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CritDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenOnHit;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilityClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillNiagaraVFX;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoChessUnitData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, UnitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitName_MetaData), NewProp_UnitName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, AnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimBlueprint_MetaData), NewProp_AnimBlueprint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackRangeGrid = { "AttackRangeGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, AttackRangeGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeGrid_MetaData), NewProp_AttackRangeGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_CritRate = { "CritRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, CritRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritRate_MetaData), NewProp_CritRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_CritDamage = { "CritDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, CritDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritDamage_MetaData), NewProp_CritDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_InitialMana = { "InitialMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, InitialMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMana_MetaData), NewProp_InitialMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ManaRegenOnAttack = { "ManaRegenOnAttack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, ManaRegenOnAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnAttack_MetaData), NewProp_ManaRegenOnAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ManaRegenOnHit = { "ManaRegenOnHit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, ManaRegenOnHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenOnHit_MetaData), NewProp_ManaRegenOnHit_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_PassiveAbilityClass = { "PassiveAbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, PassiveAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilityClass_MetaData), NewProp_PassiveAbilityClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_InitialTags = { "InitialTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, InitialTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTags_MetaData), NewProp_InitialTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkillVFX = { "SkillVFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, SkillVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillVFX_MetaData), NewProp_SkillVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkillNiagaraVFX = { "SkillNiagaraVFX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, SkillNiagaraVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillNiagaraVFX_MetaData), NewProp_SkillNiagaraVFX_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoChessUnitData, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAutoChessProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoChessUnitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_UnitName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AttackRangeGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_CritRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_CritDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_InitialMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ManaRegenOnAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ManaRegenOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_PassiveAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_InitialTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkillVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_SkillNiagaraVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoChessUnitData_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoChessUnitData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoChessUnitData_Statics::ClassParams = {
	&UAutoChessUnitData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoChessUnitData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoChessUnitData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoChessUnitData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoChessUnitData()
{
	if (!Z_Registration_Info_UClass_UAutoChessUnitData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoChessUnitData.OuterSingleton, Z_Construct_UClass_UAutoChessUnitData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoChessUnitData.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<UAutoChessUnitData>()
{
	return UAutoChessUnitData::StaticClass();
}
UAutoChessUnitData::UAutoChessUnitData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoChessUnitData);
UAutoChessUnitData::~UAutoChessUnitData() {}
// End Class UAutoChessUnitData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoChessUnitRow::StaticStruct, Z_Construct_UScriptStruct_FAutoChessUnitRow_Statics::NewStructOps, TEXT("AutoChessUnitRow"), &Z_Registration_Info_UScriptStruct_AutoChessUnitRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoChessUnitRow), 4155381071U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoChessUnitData, UAutoChessUnitData::StaticClass, TEXT("UAutoChessUnitData"), &Z_Registration_Info_UClass_UAutoChessUnitData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoChessUnitData), 1202759214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_1130877892(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessUnitData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
