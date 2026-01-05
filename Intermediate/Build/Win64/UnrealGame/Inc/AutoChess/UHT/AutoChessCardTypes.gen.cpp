// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessCardTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessCardTypes() {}

// Begin Cross Module References
AUTOCHESS_API UEnum* Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Enum EAutoChessCardTargetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoChessCardTargetType;
static UEnum* EAutoChessCardTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("EAutoChessCardTargetType"));
	}
	return Z_Registration_Info_UEnum_EAutoChessCardTargetType.OuterSingleton;
}
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessCardTargetType>()
{
	return EAutoChessCardTargetType_StaticEnum();
}
struct Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ally.DisplayName", "Ally Unit" },
		{ "Ally.Name", "EAutoChessCardTargetType::Ally" },
		{ "AnyUnit.DisplayName", "Any Unit" },
		{ "AnyUnit.Name", "EAutoChessCardTargetType::AnyUnit" },
		{ "BlueprintType", "true" },
		{ "EmptyTile.DisplayName", "Empty Grid Tile" },
		{ "EmptyTile.Name", "EAutoChessCardTargetType::EmptyTile" },
		{ "Enemy.DisplayName", "Enemy Unit" },
		{ "Enemy.Name", "EAutoChessCardTargetType::Enemy" },
		{ "ModuleRelativePath", "AutoChessCardTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAutoChessCardTargetType::None" },
		{ "Self.DisplayName", "Self (Player)" },
		{ "Self.Name", "EAutoChessCardTargetType::Self" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoChessCardTargetType::None", (int64)EAutoChessCardTargetType::None },
		{ "EAutoChessCardTargetType::Enemy", (int64)EAutoChessCardTargetType::Enemy },
		{ "EAutoChessCardTargetType::Ally", (int64)EAutoChessCardTargetType::Ally },
		{ "EAutoChessCardTargetType::Self", (int64)EAutoChessCardTargetType::Self },
		{ "EAutoChessCardTargetType::AnyUnit", (int64)EAutoChessCardTargetType::AnyUnit },
		{ "EAutoChessCardTargetType::EmptyTile", (int64)EAutoChessCardTargetType::EmptyTile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoChess,
	nullptr,
	"EAutoChessCardTargetType",
	"EAutoChessCardTargetType",
	Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType()
{
	if (!Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton, Z_Construct_UEnum_AutoChess_EAutoChessCardTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoChessCardTargetType.InnerSingleton;
}
// End Enum EAutoChessCardTargetType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutoChessCardTargetType_StaticEnum, TEXT("EAutoChessCardTargetType"), &Z_Registration_Info_UEnum_EAutoChessCardTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1280066613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardTypes_h_75220846(TEXT("/Script/AutoChess"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessCardTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
