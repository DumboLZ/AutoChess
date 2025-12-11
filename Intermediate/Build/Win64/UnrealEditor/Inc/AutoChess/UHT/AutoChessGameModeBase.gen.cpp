// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessGameModeBase() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGameModeBase();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGameModeBase_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_UAutoChessCardBase_NoRegister();
AUTOCHESS_API UEnum* Z_Construct_UEnum_AutoChess_EAutoChessPhase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Enum EAutoChessPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoChessPhase;
static UEnum* EAutoChessPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoChessPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoChessPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoChess_EAutoChessPhase, (UObject*)Z_Construct_UPackage__Script_AutoChess(), TEXT("EAutoChessPhase"));
	}
	return Z_Registration_Info_UEnum_EAutoChessPhase.OuterSingleton;
}
template<> AUTOCHESS_API UEnum* StaticEnum<EAutoChessPhase>()
{
	return EAutoChessPhase_StaticEnum();
}
struct Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.Comment", "// \xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5\n" },
		{ "Battle.DisplayName", "Battle Phase" },
		{ "Battle.Name", "EAutoChessPhase::Battle" },
		{ "Battle.ToolTip", "\xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\xe6\x9e\x9a\xe4\xb8\xbe\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
		{ "Preparation.DisplayName", "Preparation Phase" },
		{ "Preparation.Name", "EAutoChessPhase::Preparation" },
		{ "Settlement.Comment", "// \xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5\n" },
		{ "Settlement.DisplayName", "Settlement Phase" },
		{ "Settlement.Name", "EAutoChessPhase::Settlement" },
		{ "Settlement.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoChessPhase::Preparation", (int64)EAutoChessPhase::Preparation },
		{ "EAutoChessPhase::Battle", (int64)EAutoChessPhase::Battle },
		{ "EAutoChessPhase::Settlement", (int64)EAutoChessPhase::Settlement },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoChess,
	nullptr,
	"EAutoChessPhase",
	"EAutoChessPhase",
	Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoChess_EAutoChessPhase()
{
	if (!Z_Registration_Info_UEnum_EAutoChessPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoChessPhase.InnerSingleton, Z_Construct_UEnum_AutoChess_EAutoChessPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoChessPhase.InnerSingleton;
}
// End Enum EAutoChessPhase

// Begin Class AAutoChessGameModeBase Function BroadcastCardDisplay
struct Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics
{
	struct AutoChessGameModeBase_eventBroadcastCardDisplay_Parms
	{
		UAutoChessCardBase* Card;
		AActor* Target;
		FIntPoint TargetGridPos;
		APlayerController* Caster;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Cards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb9\xbf\xe6\x92\xad\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe5\x88\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb9\xbf\xe6\x92\xad\xe5\x8d\xa1\xe7\x89\x8c\xe5\xb1\x95\xe7\xa4\xba\xe5\x88\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGridPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventBroadcastCardDisplay_Parms, Card), Z_Construct_UClass_UAutoChessCardBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventBroadcastCardDisplay_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_TargetGridPos = { "TargetGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventBroadcastCardDisplay_Parms, TargetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventBroadcastCardDisplay_Parms, Caster), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_TargetGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::NewProp_Caster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameModeBase, nullptr, "BroadcastCardDisplay", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::AutoChessGameModeBase_eventBroadcastCardDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::AutoChessGameModeBase_eventBroadcastCardDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameModeBase::execBroadcastCardDisplay)
{
	P_GET_OBJECT(UAutoChessCardBase,Z_Param_Card);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetGridPos);
	P_GET_OBJECT(APlayerController,Z_Param_Caster);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastCardDisplay(Z_Param_Card,Z_Param_Target,Z_Param_TargetGridPos,Z_Param_Caster);
	P_NATIVE_END;
}
// End Class AAutoChessGameModeBase Function BroadcastCardDisplay

// Begin Class AAutoChessGameModeBase Function EndRound
struct Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics
{
	struct AutoChessGameModeBase_eventEndRound_Parms
	{
		int32 WinnerTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbb\x93\xe6\x9d\x9f\xe5\x9b\x9e\xe5\x90\x88\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\x9b\x9e\xe5\x90\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventEndRound_Parms, WinnerTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::NewProp_WinnerTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameModeBase, nullptr, "EndRound", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::AutoChessGameModeBase_eventEndRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::AutoChessGameModeBase_eventEndRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameModeBase_EndRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameModeBase_EndRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameModeBase::execEndRound)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndRound(Z_Param_WinnerTeamID);
	P_NATIVE_END;
}
// End Class AAutoChessGameModeBase Function EndRound

// Begin Class AAutoChessGameModeBase Function OnPhaseChanged
struct AutoChessGameModeBase_eventOnPhaseChanged_Parms
{
	EAutoChessPhase NewPhase;
};
static FName NAME_AAutoChessGameModeBase_OnPhaseChanged = FName(TEXT("OnPhaseChanged"));
void AAutoChessGameModeBase::OnPhaseChanged(EAutoChessPhase NewPhase)
{
	AutoChessGameModeBase_eventOnPhaseChanged_Parms Parms;
	Parms.NewPhase=NewPhase;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessGameModeBase_OnPhaseChanged),&Parms);
}
struct Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 (\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameModeBase_eventOnPhaseChanged_Parms, NewPhase), Z_Construct_UEnum_AutoChess_EAutoChessPhase, METADATA_PARAMS(0, nullptr) }; // 877316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameModeBase, nullptr, "OnPhaseChanged", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::PropPointers), sizeof(AutoChessGameModeBase_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessGameModeBase_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAutoChessGameModeBase Function OnPhaseChanged

// Begin Class AAutoChessGameModeBase Function StartBattle
struct Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe6\x88\x98\xe6\x96\x97\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\x88\x98\xe6\x96\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameModeBase, nullptr, "StartBattle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameModeBase::execStartBattle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBattle();
	P_NATIVE_END;
}
// End Class AAutoChessGameModeBase Function StartBattle

// Begin Class AAutoChessGameModeBase
void AAutoChessGameModeBase::StaticRegisterNativesAAutoChessGameModeBase()
{
	UClass* Class = AAutoChessGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastCardDisplay", &AAutoChessGameModeBase::execBroadcastCardDisplay },
		{ "EndRound", &AAutoChessGameModeBase::execEndRound },
		{ "StartBattle", &AAutoChessGameModeBase::execStartBattle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessGameModeBase);
UClass* Z_Construct_UClass_AAutoChessGameModeBase_NoRegister()
{
	return AAutoChessGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AAutoChessGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x9f\xba\xe7\xb1\xbb\n * \xe7\xae\xa1\xe7\x90\x86\xe6\xb8\xb8\xe6\x88\x8f\xe6\xb5\x81\xe7\xa8\x8b\xe3\x80\x81\xe5\x9b\x9e\xe5\x90\x88\xe3\x80\x81\xe9\x98\xb6\xe6\xae\xb5\xe5\x88\x87\xe6\x8d\xa2\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AutoChessGameModeBase.h" },
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x9f\xba\xe7\xb1\xbb\n\xe7\xae\xa1\xe7\x90\x86\xe6\xb8\xb8\xe6\x88\x8f\xe6\xb5\x81\xe7\xa8\x8b\xe3\x80\x81\xe5\x9b\x9e\xe5\x90\x88\xe3\x80\x81\xe9\x98\xb6\xe6\xae\xb5\xe5\x88\x87\xe6\x8d\xa2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\x9b\x9e\xe5\x90\x88\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTimer_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xb6\xe6\xae\xb5\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8 (\xe7\xa7\x92)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb6\xe6\xae\xb5\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8 (\xe7\xa7\x92)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreparationDuration_MetaData[] = {
		{ "Category", "AutoChess|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBattleDuration_MetaData[] = {
		{ "Category", "AutoChess|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5\xe6\x9c\x80\xe5\xa4\xa7\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5\xe6\x9c\x80\xe5\xa4\xa7\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreparationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBattleDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessGameModeBase_BroadcastCardDisplay, "BroadcastCardDisplay" }, // 1740321225
		{ &Z_Construct_UFunction_AAutoChessGameModeBase_EndRound, "EndRound" }, // 1549376020
		{ &Z_Construct_UFunction_AAutoChessGameModeBase_OnPhaseChanged, "OnPhaseChanged" }, // 65630250
		{ &Z_Construct_UFunction_AAutoChessGameModeBase_StartBattle, "StartBattle" }, // 3840037426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameModeBase, CurrentPhase), Z_Construct_UEnum_AutoChess_EAutoChessPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 877316103
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameModeBase, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_PhaseTimer = { "PhaseTimer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameModeBase, PhaseTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTimer_MetaData), NewProp_PhaseTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_PreparationDuration = { "PreparationDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameModeBase, PreparationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreparationDuration_MetaData), NewProp_PreparationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_MaxBattleDuration = { "MaxBattleDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameModeBase, MaxBattleDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBattleDuration_MetaData), NewProp_MaxBattleDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_PhaseTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_PreparationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameModeBase_Statics::NewProp_MaxBattleDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessGameModeBase_Statics::ClassParams = {
	&AAutoChessGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessGameModeBase()
{
	if (!Z_Registration_Info_UClass_AAutoChessGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessGameModeBase.OuterSingleton, Z_Construct_UClass_AAutoChessGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessGameModeBase.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessGameModeBase>()
{
	return AAutoChessGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessGameModeBase);
AAutoChessGameModeBase::~AAutoChessGameModeBase() {}
// End Class AAutoChessGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutoChessPhase_StaticEnum, TEXT("EAutoChessPhase"), &Z_Registration_Info_UEnum_EAutoChessPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 877316103U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessGameModeBase, AAutoChessGameModeBase::StaticClass, TEXT("AAutoChessGameModeBase"), &Z_Registration_Info_UClass_AAutoChessGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessGameModeBase), 79632077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_1074733692(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameModeBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
