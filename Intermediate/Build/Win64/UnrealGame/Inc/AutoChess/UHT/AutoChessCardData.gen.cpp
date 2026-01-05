// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCardData.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCardData() {}

// Begin Cross Module References
AUTOCHESS_API UEnum* Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType();
AUTOCHESS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoChessCardRow();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin ScriptStruct FAutoChessCardRow
static_assert(std::is_polymorphic<FAutoChessCardRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAutoChessCardRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoChessCardRow;
class UScriptStruct* FAutoChessCardRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoChessCardRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoChessCardRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoChessCardRow, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("AutoChessCardRow"));
	}
	return Z_Registration_Info_UScriptStruct_AutoChessCardRow.OuterSingleton;
}
template<> AUTOCHESS_API UScriptStruct* StaticStruct<FAutoChessCardRow>()
{
	return FAutoChessCardRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoChessCardRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\x8c\xe7\xbb\x93\xe6\x9e\x84\n */" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\x8c\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeAllMana_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xb6\x88\xe8\x80\x97\xe6\x89\x80\xe6\x9c\x89\xe6\xb3\x95\xe5\x8a\x9b\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9f\xba\xe7\xa1\x80\xe8\xb4\xb9\xe7\x94\xa8 (\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\xb3\x95\xe5\x8a\x9b/\xe8\x83\xbd\xe9\x87\x8f)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe8\xb4\xb9\xe7\x94\xa8 (\xe6\x89\x93\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe6\xb3\x95\xe5\x8a\x9b/\xe8\x83\xbd\xe9\x87\x8f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyPrice_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe4\xbb\xb7\xe6\xa0\xbc (\xe5\x95\x86\xe5\xba\x97\xe8\xb4\xad\xe4\xb9\xb0\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe9\x87\x91\xe5\xb8\x81)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe4\xbb\xb7\xe6\xa0\xbc (\xe5\x95\x86\xe5\xba\x97\xe8\xb4\xad\xe4\xb9\xb0\xe6\xb6\x88\xe8\x80\x97\xe7\x9a\x84\xe9\x87\x91\xe5\xb8\x81)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellPrice_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x96\xe5\x87\xba\xe4\xbb\xb7\xe6\xa0\xbc (\xe5\x8d\x96\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe9\x87\x91\xe5\xb8\x81)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x96\xe5\x87\xba\xe4\xbb\xb7\xe6\xa0\xbc (\xe5\x8d\x96\xe5\x87\xba\xe5\x8d\xa1\xe7\x89\x8c\xe8\x8e\xb7\xe5\xbe\x97\xe7\x9a\x84\xe9\x87\x91\xe5\xb8\x81)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitRow_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\x8c (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\xac\xe5\x94\xa4\xe7\xb1\xbb\xe5\x8d\xa1\xe7\x89\x8c\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\x8b\xe6\x8b\x89\xe6\xa1\x86)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa3\x8b\xe5\xad\x90\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\x8c (\xe7\x94\xa8\xe4\xba\x8e\xe5\x8f\xac\xe5\x94\xa4\xe7\xb1\xbb\xe5\x8d\xa1\xe7\x89\x8c\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\x8b\xe6\x8b\x89\xe6\xa1\x86)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xa1\xe7\x89\x8c\xe5\x9b\xbe\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa8\x80\xe6\x9c\x89\xe5\xba\xa6 (1-5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardAbilityClass_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Gameplay Ability\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84 Gameplay Ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe9\x99\x90\xe5\x88\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe9\x99\x90\xe5\x88\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AOERadius_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\x9c\xe7\x94\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8d\x8a\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x9c\xe7\x94\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8d\x8a\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTag_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa6\xe5\x8f\x91\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x95\xbf\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x95\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipDisplay_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe8\xb7\xb3\xe8\xbf\x87\xe5\xb1\x95\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "AutoChessCardData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xb7\xb3\xe8\xbf\x87\xe5\xb1\x95\xe7\xa4\xba" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CardDescription;
	static void NewProp_bConsumeAllMana_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeAllMana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuyPrice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnitRow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rarity;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardAbilityClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AOERadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static void NewProp_bSkipDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoChessCardRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, CardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardName_MetaData), NewProp_CardName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, CardDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDescription_MetaData), NewProp_CardDescription_MetaData) };
void Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bConsumeAllMana_SetBit(void* Obj)
{
	((FAutoChessCardRow*)Obj)->bConsumeAllMana = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bConsumeAllMana = { "bConsumeAllMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoChessCardRow), &Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bConsumeAllMana_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeAllMana_MetaData), NewProp_bConsumeAllMana_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, BuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyPrice_MetaData), NewProp_BuyPrice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, SellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellPrice_MetaData), NewProp_SellPrice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_UnitRow = { "UnitRow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, UnitRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitRow_MetaData), NewProp_UnitRow_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, Rarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rarity_MetaData), NewProp_Rarity_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardAbilityClass = { "CardAbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, CardAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardAbilityClass_MetaData), NewProp_CardAbilityClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, TargetType), Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 1280066613
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_AOERadius = { "AOERadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, AOERadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AOERadius_MetaData), NewProp_AOERadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TriggerTag = { "TriggerTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, TriggerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerTag_MetaData), NewProp_TriggerTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoChessCardRow, DisplayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDuration_MetaData), NewProp_DisplayDuration_MetaData) };
void Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bSkipDisplay_SetBit(void* Obj)
{
	((FAutoChessCardRow*)Obj)->bSkipDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bSkipDisplay = { "bSkipDisplay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoChessCardRow), &Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bSkipDisplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipDisplay_MetaData), NewProp_bSkipDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bConsumeAllMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_SellPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_UnitRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_Rarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_CardAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_AOERadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_TriggerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_DisplayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewProp_bSkipDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AutoChessCardRow",
	Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::PropPointers),
	sizeof(FAutoChessCardRow),
	alignof(FAutoChessCardRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoChessCardRow()
{
	if (!Z_Registration_Info_UScriptStruct_AutoChessCardRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoChessCardRow.InnerSingleton, Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoChessCardRow.InnerSingleton;
}
// End ScriptStruct FAutoChessCardRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoChessCardRow::StaticStruct, Z_Construct_UScriptStruct_FAutoChessCardRow_Statics::NewStructOps, TEXT("AutoChessCardRow"), &Z_Registration_Info_UScriptStruct_AutoChessCardRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoChessCardRow), 1802650439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardData_h_3279325086(TEXT("/Script/AutoChess"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
