// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessGameState() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGameState();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGameState_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGrid_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessHighlightActor_NoRegister();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature();
AUTOCHESS_API UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Delegate FOnHealthUpdate
struct Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics
{
	struct AutoChessGameState_eventOnHealthUpdate_Parms
	{
		int32 NewHealth;
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89\xe8\xa1\x80\xe9\x87\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe8\xa1\x80\xe9\x87\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventOnHealthUpdate_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventOnHealthUpdate_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnHealthUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::AutoChessGameState_eventOnHealthUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::AutoChessGameState_eventOnHealthUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AAutoChessGameState::FOnHealthUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdate, int32 NewHealth, int32 PlayerIndex)
{
	struct AutoChessGameState_eventOnHealthUpdate_Parms
	{
		int32 NewHealth;
		int32 PlayerIndex;
	};
	AutoChessGameState_eventOnHealthUpdate_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.PlayerIndex=PlayerIndex;
	OnHealthUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthUpdate

// Begin Delegate FOnPhaseChanged
struct Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics
{
	struct AutoChessGameState_eventOnPhaseChanged_Parms
	{
		int32 NewPhaseIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89\xe9\x98\xb6\xe6\xae\xb5\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe9\x98\xb6\xe6\xae\xb5\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPhaseIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhaseIndex = { "NewPhaseIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventOnPhaseChanged_Parms, NewPhaseIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhaseIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnPhaseChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::AutoChessGameState_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::AutoChessGameState_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AAutoChessGameState::FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, int32 NewPhaseIndex)
{
	struct AutoChessGameState_eventOnPhaseChanged_Parms
	{
		int32 NewPhaseIndex;
	};
	AutoChessGameState_eventOnPhaseChanged_Parms Parms;
	Parms.NewPhaseIndex=NewPhaseIndex;
	OnPhaseChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPhaseChanged

// Begin Delegate FOnWinnerChanged
struct Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics
{
	struct AutoChessGameState_eventOnWinnerChanged_Parms
	{
		int32 WinnerTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89\xe8\x8e\xb7\xe8\x83\x9c\xe8\x80\x85\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe8\x8e\xb7\xe8\x83\x9c\xe8\x80\x85\xe5\x8f\x98\xe5\x8c\x96\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventOnWinnerChanged_Parms, WinnerTeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::NewProp_WinnerTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnWinnerChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::AutoChessGameState_eventOnWinnerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::AutoChessGameState_eventOnWinnerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AAutoChessGameState::FOnWinnerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWinnerChanged, int32 WinnerTeamID)
{
	struct AutoChessGameState_eventOnWinnerChanged_Parms
	{
		int32 WinnerTeamID;
	};
	AutoChessGameState_eventOnWinnerChanged_Parms Parms;
	Parms.WinnerTeamID=WinnerTeamID;
	OnWinnerChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWinnerChanged

// Begin Class AAutoChessGameState Function FindEmptyBenchSlot
struct Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics
{
	struct AutoChessGameState_eventFindEmptyBenchSlot_Parms
	{
		int32 TeamID;
		FIntPoint OutGridPos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9f\xa5\xe6\x89\xbe\xe7\xa9\xba\xe9\x97\xb2\xe7\x9a\x84\xe5\xa4\x87\xe6\x88\x98\xe5\x8c\xba\xe6\xa0\xbc\xe5\xad\x90\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe7\xa9\xba\xe9\x97\xb2\xe7\x9a\x84\xe5\xa4\x87\xe6\x88\x98\xe5\x8c\xba\xe6\xa0\xbc\xe5\xad\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGridPos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventFindEmptyBenchSlot_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_OutGridPos = { "OutGridPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventFindEmptyBenchSlot_Parms, OutGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessGameState_eventFindEmptyBenchSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessGameState_eventFindEmptyBenchSlot_Parms), &Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_OutGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "FindEmptyBenchSlot", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::AutoChessGameState_eventFindEmptyBenchSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::AutoChessGameState_eventFindEmptyBenchSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execFindEmptyBenchSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_OutGridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindEmptyBenchSlot(Z_Param_TeamID,Z_Param_Out_OutGridPos);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function FindEmptyBenchSlot

// Begin Class AAutoChessGameState Function GetUnitAtGrid
struct Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics
{
	struct AutoChessGameState_eventGetUnitAtGrid_Parms
	{
		int32 GridX;
		int32 GridY;
		AAutoChessUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\xa0\xe6\x8d\xae\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\xa0\xe6\x8d\xae\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventGetUnitAtGrid_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventGetUnitAtGrid_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventGetUnitAtGrid_Parms, ReturnValue), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "GetUnitAtGrid", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::AutoChessGameState_eventGetUnitAtGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::AutoChessGameState_eventGetUnitAtGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execGetUnitAtGrid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAutoChessUnitBase**)Z_Param__Result=P_THIS->GetUnitAtGrid(Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function GetUnitAtGrid

// Begin Class AAutoChessGameState Function GetUnitsByTeam
struct Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics
{
	struct AutoChessGameState_eventGetUnitsByTeam_Parms
	{
		int32 TeamID;
		TArray<AAutoChessUnitBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe9\x98\x9f\xe4\xbc\x8d\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe9\x98\x9f\xe4\xbc\x8d\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventGetUnitsByTeam_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventGetUnitsByTeam_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "GetUnitsByTeam", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::AutoChessGameState_eventGetUnitsByTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::AutoChessGameState_eventGetUnitsByTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execGetUnitsByTeam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AAutoChessUnitBase*>*)Z_Param__Result=P_THIS->GetUnitsByTeam(Z_Param_TeamID);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function GetUnitsByTeam

// Begin Class AAutoChessGameState Function IsGridOccupied
struct Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics
{
	struct AutoChessGameState_eventIsGridOccupied_Parms
	{
		int32 GridX;
		int32 GridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe7\xbd\x91\xe6\xa0\xbc\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe7\xbd\x91\xe6\xa0\xbc\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventIsGridOccupied_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventIsGridOccupied_Parms, GridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessGameState_eventIsGridOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessGameState_eventIsGridOccupied_Parms), &Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "IsGridOccupied", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::AutoChessGameState_eventIsGridOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::AutoChessGameState_eventIsGridOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execIsGridOccupied)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGridOccupied(Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function IsGridOccupied

// Begin Class AAutoChessGameState Function Multicast_HideSpellHighlight
struct AutoChessGameState_eventMulticast_HideSpellHighlight_Parms
{
	int32 TeamID;
};
static FName NAME_AAutoChessGameState_Multicast_HideSpellHighlight = FName(TEXT("Multicast_HideSpellHighlight"));
void AAutoChessGameState::Multicast_HideSpellHighlight(int32 TeamID)
{
	AutoChessGameState_eventMulticast_HideSpellHighlight_Parms Parms;
	Parms.TeamID=TeamID;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessGameState_Multicast_HideSpellHighlight),&Parms);
}
struct Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Spell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9a\x90\xe8\x97\x8f\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae (\xe5\xa4\x9a\xe6\x92\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae (\xe5\xa4\x9a\xe6\x92\xad)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventMulticast_HideSpellHighlight_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "Multicast_HideSpellHighlight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::PropPointers), sizeof(AutoChessGameState_eventMulticast_HideSpellHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessGameState_eventMulticast_HideSpellHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execMulticast_HideSpellHighlight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_HideSpellHighlight_Implementation(Z_Param_TeamID);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function Multicast_HideSpellHighlight

// Begin Class AAutoChessGameState Function Multicast_ShowSpellHighlight
struct AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms
{
	TArray<FIntPoint> GridPositions;
	int32 TeamID;
};
static FName NAME_AAutoChessGameState_Multicast_ShowSpellHighlight = FName(TEXT("Multicast_ShowSpellHighlight"));
void AAutoChessGameState::Multicast_ShowSpellHighlight(TArray<FIntPoint> const& GridPositions, int32 TeamID)
{
	AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms Parms;
	Parms.GridPositions=GridPositions;
	Parms.TeamID=TeamID;
	ProcessEvent(FindFunctionChecked(NAME_AAutoChessGameState_Multicast_ShowSpellHighlight),&Parms);
}
struct Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Spell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xbe\xe7\xa4\xba\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae (\xe5\xa4\x9a\xe6\x92\xad)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae (\xe5\xa4\x9a\xe6\x92\xad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridPositions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_GridPositions_Inner = { "GridPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_GridPositions = { "GridPositions", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms, GridPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPositions_MetaData), NewProp_GridPositions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_GridPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_GridPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "Multicast_ShowSpellHighlight", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::PropPointers), sizeof(AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoChessGameState_eventMulticast_ShowSpellHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execMulticast_ShowSpellHighlight)
{
	P_GET_TARRAY(FIntPoint,Z_Param_GridPositions);
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ShowSpellHighlight_Implementation(Z_Param_GridPositions,Z_Param_TeamID);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function Multicast_ShowSpellHighlight

// Begin Class AAutoChessGameState Function OnRep_CurrentPhaseIndex
struct Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnRep_CurrentPhaseIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execOnRep_CurrentPhaseIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentPhaseIndex();
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function OnRep_CurrentPhaseIndex

// Begin Class AAutoChessGameState Function OnRep_InitialGold
struct Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnRep_InitialGold", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execOnRep_InitialGold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InitialGold();
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function OnRep_InitialGold

// Begin Class AAutoChessGameState Function OnRep_Player1Health
struct Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnRep_Player1Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execOnRep_Player1Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Player1Health();
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function OnRep_Player1Health

// Begin Class AAutoChessGameState Function OnRep_Player2Health
struct Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnRep_Player2Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execOnRep_Player2Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Player2Health();
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function OnRep_Player2Health

// Begin Class AAutoChessGameState Function OnRep_WinnerTeamID
struct Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "OnRep_WinnerTeamID", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execOnRep_WinnerTeamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WinnerTeamID();
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function OnRep_WinnerTeamID

// Begin Class AAutoChessGameState Function RegisterUnit
struct Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics
{
	struct AutoChessGameState_eventRegisterUnit_Parms
	{
		AAutoChessUnitBase* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\xa8\xe5\x86\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe5\x88\xb0\xe5\x9c\xba\xe4\xb8\x8a\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa8\xe5\x86\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe5\x88\xb0\xe5\x9c\xba\xe4\xb8\x8a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventRegisterUnit_Parms, Unit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "RegisterUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::AutoChessGameState_eventRegisterUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::AutoChessGameState_eventRegisterUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_RegisterUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_RegisterUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execRegisterUnit)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function RegisterUnit

// Begin Class AAutoChessGameState Function UnregisterUnit
struct Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics
{
	struct AutoChessGameState_eventUnregisterUnit_Parms
	{
		AAutoChessUnitBase* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x8e\xe5\x9c\xba\xe4\xb8\x8a\xe7\xa7\xbb\xe9\x99\xa4\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe5\x9c\xba\xe4\xb8\x8a\xe7\xa7\xbb\xe9\x99\xa4\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGameState_eventUnregisterUnit_Parms, Unit), Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGameState, nullptr, "UnregisterUnit", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::AutoChessGameState_eventUnregisterUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::AutoChessGameState_eventUnregisterUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGameState::execUnregisterUnit)
{
	P_GET_OBJECT(AAutoChessUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AAutoChessGameState Function UnregisterUnit

// Begin Class AAutoChessGameState
void AAutoChessGameState::StaticRegisterNativesAAutoChessGameState()
{
	UClass* Class = AAutoChessGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindEmptyBenchSlot", &AAutoChessGameState::execFindEmptyBenchSlot },
		{ "GetUnitAtGrid", &AAutoChessGameState::execGetUnitAtGrid },
		{ "GetUnitsByTeam", &AAutoChessGameState::execGetUnitsByTeam },
		{ "IsGridOccupied", &AAutoChessGameState::execIsGridOccupied },
		{ "Multicast_HideSpellHighlight", &AAutoChessGameState::execMulticast_HideSpellHighlight },
		{ "Multicast_ShowSpellHighlight", &AAutoChessGameState::execMulticast_ShowSpellHighlight },
		{ "OnRep_CurrentPhaseIndex", &AAutoChessGameState::execOnRep_CurrentPhaseIndex },
		{ "OnRep_InitialGold", &AAutoChessGameState::execOnRep_InitialGold },
		{ "OnRep_Player1Health", &AAutoChessGameState::execOnRep_Player1Health },
		{ "OnRep_Player2Health", &AAutoChessGameState::execOnRep_Player2Health },
		{ "OnRep_WinnerTeamID", &AAutoChessGameState::execOnRep_WinnerTeamID },
		{ "RegisterUnit", &AAutoChessGameState::execRegisterUnit },
		{ "UnregisterUnit", &AAutoChessGameState::execUnregisterUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessGameState);
UClass* Z_Construct_UClass_AAutoChessGameState_NoRegister()
{
	return AAutoChessGameState::StaticClass();
}
struct Z_Construct_UClass_AAutoChessGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xb8\xb8\xe6\x88\x8f\xe7\x8a\xb6\xe6\x80\x81\n * \xe5\xad\x98\xe5\x82\xa8\xe5\x85\xa8\xe5\xb1\x80\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe7\x8e\xa9\xe5\xae\xb6\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x81\xe9\x87\x91\xe5\xb8\x81\xe3\x80\x81\xe5\x9c\xa8\xe5\x9c\xba\xe5\x8d\x95\xe4\xbd\x8d\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AutoChessGameState.h" },
		{ "ModuleRelativePath", "AutoChessGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xb8\xb8\xe6\x88\x8f\xe7\x8a\xb6\xe6\x80\x81\n\xe5\xad\x98\xe5\x82\xa8\xe5\x85\xa8\xe5\xb1\x80\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe7\x8e\xa9\xe5\xae\xb6\xe8\xa1\x80\xe9\x87\x8f\xe3\x80\x81\xe9\x87\x91\xe5\xb8\x81\xe3\x80\x81\xe5\x9c\xa8\xe5\x9c\xba\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdated_MetaData[] = {
		{ "Category", "AutoChess|Events" },
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreparationPhaseStarted_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x86\xe5\xa4\x87\xe9\x98\xb6\xe6\xae\xb5\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatPhaseStarted_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe9\x98\xb6\xe6\xae\xb5\xe5\xbc\x80\xe5\xa7\x8b\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x9a\xe7\x94\xa8\xe9\x98\xb6\xe6\xae\xb5\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8\xe9\x98\xb6\xe6\xae\xb5\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWinnerChanged_MetaData[] = {
		{ "Category", "AutoChess|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe8\x83\x9c\xe8\x80\x85\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe8\x83\x9c\xe8\x80\x85\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player1Health_MetaData[] = {
		{ "Category", "AutoChess|PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""1 \xe8\xa1\x80\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""1 \xe8\xa1\x80\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player2Health_MetaData[] = {
		{ "Category", "AutoChess|PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""2 \xe8\xa1\x80\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""2 \xe8\xa1\x80\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player1Gold_MetaData[] = {
		{ "Category", "AutoChess|PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""1 \xe9\x87\x91\xe5\xb8\x81\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""1 \xe9\x87\x91\xe5\xb8\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player2Gold_MetaData[] = {
		{ "Category", "AutoChess|PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""2 \xe9\x87\x91\xe5\xb8\x81\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""2 \xe9\x87\x91\xe5\xb8\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGold_MetaData[] = {
		{ "Category", "AutoChess|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x88\x9d\xe5\xa7\x8b\xe9\x87\x91\xe5\xb8\x81\xe8\xae\xbe\xe7\xbd\xae (\xe7\x94\xb1\xe6\x88\xbf\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\xad\xa5\xe7\xbb\x99\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe9\x87\x91\xe5\xb8\x81\xe8\xae\xbe\xe7\xbd\xae (\xe7\x94\xb1\xe6\x88\xbf\xe4\xb8\xbb\xe8\xae\xbe\xe7\xbd\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\xad\xa5\xe7\xbb\x99\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayer1Ready_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""1 \xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""1 \xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayer2Ready_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""2 \xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""2 \xe5\x87\x86\xe5\xa4\x87\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayer1Rematch_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""1 \xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80\xe8\xaf\xb7\xe6\xb1\x82\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""1 \xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80\xe8\xaf\xb7\xe6\xb1\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayer2Rematch_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8e\xa9\xe5\xae\xb6""2 \xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80\xe8\xaf\xb7\xe6\xb1\x82\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6""2 \xe5\x86\x8d\xe6\x9d\xa5\xe4\xb8\x80\xe5\xb1\x80\xe8\xaf\xb7\xe6\xb1\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinnerTeamID_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe8\x83\x9c\xe9\x98\x9f\xe4\xbc\x8dID (-1: \xe5\xb9\xb3\xe5\xb1\x80/\xe6\x97\xa0, 0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe8\x83\x9c\xe9\x98\x9f\xe4\xbc\x8dID (-1: \xe5\xb9\xb3\xe5\xb1\x80/\xe6\x97\xa0, 0: \xe7\x8e\xa9\xe5\xae\xb6""1, 1: \xe7\x8e\xa9\xe5\xae\xb6""2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhaseIndex_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5 (\xe9\x9c\x80\xe8\xa6\x81\xe5\x8c\x85\xe5\x90\xab AutoChessGameModeBase.h \xe6\x88\x96\xe7\xa7\xbb\xe5\x8a\xa8 Enum \xe5\xae\x9a\xe4\xb9\x89)\n// \xe4\xb8\xba\xe4\xba\x86\xe9\x81\xbf\xe5\x85\x8d\xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe5\xbe\xaa\xe7\x8e\xaf\xe4\xbe\x9d\xe8\xb5\x96\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe6\x88\x91\xe4\xbb\xac\xe6\x9a\x82\xe6\x97\xb6\xe7\x94\xa8 uint8 \xe5\xad\x98\xe5\x82\xa8\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe5\x9c\xa8 cpp \xe4\xb8\xad\xe8\xbd\xac\xe6\x8d\xa2\n// \xe4\xbd\x86\xe4\xb8\xba\xe4\xba\x86\xe8\x93\x9d\xe5\x9b\xbe\xe6\x96\xb9\xe4\xbe\xbf\xef\xbc\x8c\xe6\x9c\x80\xe5\xa5\xbd\xe8\xbf\x98\xe6\x98\xaf\xe7\x94\xa8 Enum\xe3\x80\x82\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe5\xb0\x9d\xe8\xaf\x95\xe5\x89\x8d\xe5\x90\x91\xe5\xa3\xb0\xe6\x98\x8e\xe6\x88\x96\xe5\x81\x87\xe8\xae\xbe\xe5\xb7\xb2\xe5\x8c\x85\xe5\x90\xab\xe3\x80\x82\n// \xe6\x9b\xb4\xe5\xa5\xbd\xe7\x9a\x84\xe5\x81\x9a\xe6\xb3\x95\xe6\x98\xaf\xe5\xb0\x86 Enum \xe7\xa7\xbb\xe5\x88\xb0\xe5\x8d\x95\xe7\x8b\xac\xe7\x9a\x84 Types \xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n// \xe8\xbf\x99\xe9\x87\x8c\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe7\x94\xa8 int32 \xe6\x9b\xbf\xe4\xbb\xa3\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe5\x9c\xa8 cpp \xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab\xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n// \xe5\xae\x9e\xe9\x99\x85\xe4\xb8\x8a\xef\xbc\x8cGameMode \xe4\xbe\x9d\xe8\xb5\x96 GameState\xef\xbc\x8cGameState \xe4\xbe\x9d\xe8\xb5\x96 GameMode \xe7\x9a\x84 Enum...\n// \xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe6\x8a\x8a Enum \xe7\xa7\xbb\xe5\x8a\xa8\xe5\x88\xb0 GameState \xe6\x88\x96\xe8\x80\x85\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84 Types \xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n// \xe6\x9a\x82\xe6\x97\xb6\xe5\x85\x88\xe7\x94\xa8 uint8 \xe5\xad\x98\xe5\x82\xa8\xe9\x98\xb6\xe6\xae\xb5\xe7\xb4\xa2\xe5\xbc\x95\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x86\x8d\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe6\x88\x91\xe4\xbb\xac\xe6\x8a\x8a Enum \xe6\x90\xac\xe8\xbf\x87\xe6\x9d\xa5\xef\xbc\x9f\n// \xe4\xb8\x8d\xef\xbc\x8c\xe6\x9c\x80\xe7\xae\x80\xe5\x8d\x95\xe7\x9a\x84\xe6\x98\xaf\xef\xbc\x9a\xe5\x9c\xa8 AutoChessGameState.h \xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab AutoChessGameModeBase.h \xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe5\xbe\xaa\xe7\x8e\xaf\xe3\x80\x82\n// \xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe5\x8f\xaa\xe5\xa4\x8d\xe5\x88\xb6\xe5\x9f\xba\xe6\x9c\xac\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xb8\xb8\xe6\x88\x8f\xe9\x98\xb6\xe6\xae\xb5 (\xe9\x9c\x80\xe8\xa6\x81\xe5\x8c\x85\xe5\x90\xab AutoChessGameModeBase.h \xe6\x88\x96\xe7\xa7\xbb\xe5\x8a\xa8 Enum \xe5\xae\x9a\xe4\xb9\x89)\n\xe4\xb8\xba\xe4\xba\x86\xe9\x81\xbf\xe5\x85\x8d\xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe5\xbe\xaa\xe7\x8e\xaf\xe4\xbe\x9d\xe8\xb5\x96\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe6\x88\x91\xe4\xbb\xac\xe6\x9a\x82\xe6\x97\xb6\xe7\x94\xa8 uint8 \xe5\xad\x98\xe5\x82\xa8\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe5\x9c\xa8 cpp \xe4\xb8\xad\xe8\xbd\xac\xe6\x8d\xa2\n\xe4\xbd\x86\xe4\xb8\xba\xe4\xba\x86\xe8\x93\x9d\xe5\x9b\xbe\xe6\x96\xb9\xe4\xbe\xbf\xef\xbc\x8c\xe6\x9c\x80\xe5\xa5\xbd\xe8\xbf\x98\xe6\x98\xaf\xe7\x94\xa8 Enum\xe3\x80\x82\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe5\xb0\x9d\xe8\xaf\x95\xe5\x89\x8d\xe5\x90\x91\xe5\xa3\xb0\xe6\x98\x8e\xe6\x88\x96\xe5\x81\x87\xe8\xae\xbe\xe5\xb7\xb2\xe5\x8c\x85\xe5\x90\xab\xe3\x80\x82\n\xe6\x9b\xb4\xe5\xa5\xbd\xe7\x9a\x84\xe5\x81\x9a\xe6\xb3\x95\xe6\x98\xaf\xe5\xb0\x86 Enum \xe7\xa7\xbb\xe5\x88\xb0\xe5\x8d\x95\xe7\x8b\xac\xe7\x9a\x84 Types \xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n\xe8\xbf\x99\xe9\x87\x8c\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe7\x94\xa8 int32 \xe6\x9b\xbf\xe4\xbb\xa3\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe5\x9c\xa8 cpp \xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab\xe5\xa4\xb4\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n\xe5\xae\x9e\xe9\x99\x85\xe4\xb8\x8a\xef\xbc\x8cGameMode \xe4\xbe\x9d\xe8\xb5\x96 GameState\xef\xbc\x8cGameState \xe4\xbe\x9d\xe8\xb5\x96 GameMode \xe7\x9a\x84 Enum...\n\xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe6\x8a\x8a Enum \xe7\xa7\xbb\xe5\x8a\xa8\xe5\x88\xb0 GameState \xe6\x88\x96\xe8\x80\x85\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84 Types \xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\n\xe6\x9a\x82\xe6\x97\xb6\xe5\x85\x88\xe7\x94\xa8 uint8 \xe5\xad\x98\xe5\x82\xa8\xe9\x98\xb6\xe6\xae\xb5\xe7\xb4\xa2\xe5\xbc\x95\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x86\x8d\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe6\x88\x96\xe8\x80\x85\xe6\x88\x91\xe4\xbb\xac\xe6\x8a\x8a Enum \xe6\x90\xac\xe8\xbf\x87\xe6\x9d\xa5\xef\xbc\x9f\n\xe4\xb8\x8d\xef\xbc\x8c\xe6\x9c\x80\xe7\xae\x80\xe5\x8d\x95\xe7\x9a\x84\xe6\x98\xaf\xef\xbc\x9a\xe5\x9c\xa8 AutoChessGameState.h \xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab AutoChessGameModeBase.h \xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe5\xbe\xaa\xe7\x8e\xaf\xe3\x80\x82\n\xe8\xae\xa9\xe6\x88\x91\xe4\xbb\xac\xe5\x85\x88\xe5\x8f\xaa\xe5\xa4\x8d\xe5\x88\xb6\xe5\x9f\xba\xe6\x9c\xac\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTimer_MetaData[] = {
		{ "Category", "AutoChess|GameFlow" },
		{ "ModuleRelativePath", "AutoChessGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameGrid_MetaData[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe7\x9b\x98\xe5\xbc\x95\xe7\x94\xa8 (\xe5\x85\xa8\xe5\xb1\x80\xe5\x94\xaf\xe4\xb8\x80)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe7\x9b\x98\xe5\xbc\x95\xe7\x94\xa8 (\xe5\x85\xa8\xe5\xb1\x80\xe5\x94\xaf\xe4\xb8\x80)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllUnits_MetaData[] = {
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xba\xe4\xb8\x8a\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xba\xe4\xb8\x8a\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellHighlightActor_Team0_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae Actor - \xe9\x98\x9f\xe4\xbc\x8d 0\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae Actor - \xe9\x98\x9f\xe4\xbc\x8d 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellHighlightActor_Team1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae Actor - \xe9\x98\x9f\xe4\xbc\x8d 1\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\x95\xe6\x9c\xaf\xe9\xab\x98\xe4\xba\xae Actor - \xe9\x98\x9f\xe4\xbc\x8d 1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreparationPhaseStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatPhaseStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWinnerChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player1Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player2Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player1Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player2Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialGold;
	static void NewProp_bPlayer1Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayer1Ready;
	static void NewProp_bPlayer2Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayer2Ready;
	static void NewProp_bPlayer1Rematch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayer1Rematch;
	static void NewProp_bPlayer2Rematch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayer2Rematch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinnerTeamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhaseIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllUnits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUnits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellHighlightActor_Team0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellHighlightActor_Team1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessGameState_FindEmptyBenchSlot, "FindEmptyBenchSlot" }, // 2042908247
		{ &Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid, "GetUnitAtGrid" }, // 246306590
		{ &Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam, "GetUnitsByTeam" }, // 462591683
		{ &Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied, "IsGridOccupied" }, // 588425901
		{ &Z_Construct_UFunction_AAutoChessGameState_Multicast_HideSpellHighlight, "Multicast_HideSpellHighlight" }, // 3848971725
		{ &Z_Construct_UFunction_AAutoChessGameState_Multicast_ShowSpellHighlight, "Multicast_ShowSpellHighlight" }, // 959181873
		{ &Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature, "OnHealthUpdate__DelegateSignature" }, // 3741940162
		{ &Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature, "OnPhaseChanged__DelegateSignature" }, // 3601698354
		{ &Z_Construct_UFunction_AAutoChessGameState_OnRep_CurrentPhaseIndex, "OnRep_CurrentPhaseIndex" }, // 1433467648
		{ &Z_Construct_UFunction_AAutoChessGameState_OnRep_InitialGold, "OnRep_InitialGold" }, // 2233297636
		{ &Z_Construct_UFunction_AAutoChessGameState_OnRep_Player1Health, "OnRep_Player1Health" }, // 2342209657
		{ &Z_Construct_UFunction_AAutoChessGameState_OnRep_Player2Health, "OnRep_Player2Health" }, // 1264891542
		{ &Z_Construct_UFunction_AAutoChessGameState_OnRep_WinnerTeamID, "OnRep_WinnerTeamID" }, // 3970199561
		{ &Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature, "OnWinnerChanged__DelegateSignature" }, // 1857475496
		{ &Z_Construct_UFunction_AAutoChessGameState_RegisterUnit, "RegisterUnit" }, // 147410819
		{ &Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit, "UnregisterUnit" }, // 2819651692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnHealthUpdated = { "OnHealthUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, OnHealthUpdated), Z_Construct_UDelegateFunction_AAutoChessGameState_OnHealthUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthUpdated_MetaData), NewProp_OnHealthUpdated_MetaData) }; // 3741940162
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnPreparationPhaseStarted = { "OnPreparationPhaseStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, OnPreparationPhaseStarted), Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreparationPhaseStarted_MetaData), NewProp_OnPreparationPhaseStarted_MetaData) }; // 3601698354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnCombatPhaseStarted = { "OnCombatPhaseStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, OnCombatPhaseStarted), Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatPhaseStarted_MetaData), NewProp_OnCombatPhaseStarted_MetaData) }; // 3601698354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, OnPhaseChanged), Z_Construct_UDelegateFunction_AAutoChessGameState_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 3601698354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnWinnerChanged = { "OnWinnerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, OnWinnerChanged), Z_Construct_UDelegateFunction_AAutoChessGameState_OnWinnerChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWinnerChanged_MetaData), NewProp_OnWinnerChanged_MetaData) }; // 1857475496
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Health = { "Player1Health", "OnRep_Player1Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player1Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player1Health_MetaData), NewProp_Player1Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Health = { "Player2Health", "OnRep_Player2Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player2Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player2Health_MetaData), NewProp_Player2Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Gold = { "Player1Gold", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player1Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player1Gold_MetaData), NewProp_Player1Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Gold = { "Player2Gold", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player2Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player2Gold_MetaData), NewProp_Player2Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_InitialGold = { "InitialGold", "OnRep_InitialGold", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, InitialGold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGold_MetaData), NewProp_InitialGold_MetaData) };
void Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Ready_SetBit(void* Obj)
{
	((AAutoChessGameState*)Obj)->bPlayer1Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Ready = { "bPlayer1Ready", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessGameState), &Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayer1Ready_MetaData), NewProp_bPlayer1Ready_MetaData) };
void Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Ready_SetBit(void* Obj)
{
	((AAutoChessGameState*)Obj)->bPlayer2Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Ready = { "bPlayer2Ready", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessGameState), &Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayer2Ready_MetaData), NewProp_bPlayer2Ready_MetaData) };
void Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Rematch_SetBit(void* Obj)
{
	((AAutoChessGameState*)Obj)->bPlayer1Rematch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Rematch = { "bPlayer1Rematch", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessGameState), &Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Rematch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayer1Rematch_MetaData), NewProp_bPlayer1Rematch_MetaData) };
void Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Rematch_SetBit(void* Obj)
{
	((AAutoChessGameState*)Obj)->bPlayer2Rematch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Rematch = { "bPlayer2Rematch", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutoChessGameState), &Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Rematch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayer2Rematch_MetaData), NewProp_bPlayer2Rematch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_WinnerTeamID = { "WinnerTeamID", "OnRep_WinnerTeamID", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, WinnerTeamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinnerTeamID_MetaData), NewProp_WinnerTeamID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_CurrentPhaseIndex = { "CurrentPhaseIndex", "OnRep_CurrentPhaseIndex", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, CurrentPhaseIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhaseIndex_MetaData), NewProp_CurrentPhaseIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_PhaseTimer = { "PhaseTimer", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, PhaseTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTimer_MetaData), NewProp_PhaseTimer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, GameGrid), Z_Construct_UClass_AAutoChessGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameGrid_MetaData), NewProp_GameGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits_Inner = { "AllUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits = { "AllUnits", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, AllUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUnits_MetaData), NewProp_AllUnits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_SpellHighlightActor_Team0 = { "SpellHighlightActor_Team0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, SpellHighlightActor_Team0), Z_Construct_UClass_AAutoChessHighlightActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellHighlightActor_Team0_MetaData), NewProp_SpellHighlightActor_Team0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_SpellHighlightActor_Team1 = { "SpellHighlightActor_Team1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, SpellHighlightActor_Team1), Z_Construct_UClass_AAutoChessHighlightActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellHighlightActor_Team1_MetaData), NewProp_SpellHighlightActor_Team1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnHealthUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnPreparationPhaseStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnCombatPhaseStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_OnWinnerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_InitialGold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer1Rematch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_bPlayer2Rematch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_WinnerTeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_CurrentPhaseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_PhaseTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_GameGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_SpellHighlightActor_Team0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_SpellHighlightActor_Team1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessGameState_Statics::ClassParams = {
	&AAutoChessGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessGameState()
{
	if (!Z_Registration_Info_UClass_AAutoChessGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessGameState.OuterSingleton, Z_Construct_UClass_AAutoChessGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessGameState.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessGameState>()
{
	return AAutoChessGameState::StaticClass();
}
void AAutoChessGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Player1Health(TEXT("Player1Health"));
	static const FName Name_Player2Health(TEXT("Player2Health"));
	static const FName Name_Player1Gold(TEXT("Player1Gold"));
	static const FName Name_Player2Gold(TEXT("Player2Gold"));
	static const FName Name_InitialGold(TEXT("InitialGold"));
	static const FName Name_bPlayer1Ready(TEXT("bPlayer1Ready"));
	static const FName Name_bPlayer2Ready(TEXT("bPlayer2Ready"));
	static const FName Name_bPlayer1Rematch(TEXT("bPlayer1Rematch"));
	static const FName Name_bPlayer2Rematch(TEXT("bPlayer2Rematch"));
	static const FName Name_WinnerTeamID(TEXT("WinnerTeamID"));
	static const FName Name_CurrentPhaseIndex(TEXT("CurrentPhaseIndex"));
	static const FName Name_CurrentRound(TEXT("CurrentRound"));
	static const FName Name_PhaseTimer(TEXT("PhaseTimer"));
	static const FName Name_GameGrid(TEXT("GameGrid"));
	static const FName Name_AllUnits(TEXT("AllUnits"));
	const bool bIsValid = true
		&& Name_Player1Health == ClassReps[(int32)ENetFields_Private::Player1Health].Property->GetFName()
		&& Name_Player2Health == ClassReps[(int32)ENetFields_Private::Player2Health].Property->GetFName()
		&& Name_Player1Gold == ClassReps[(int32)ENetFields_Private::Player1Gold].Property->GetFName()
		&& Name_Player2Gold == ClassReps[(int32)ENetFields_Private::Player2Gold].Property->GetFName()
		&& Name_InitialGold == ClassReps[(int32)ENetFields_Private::InitialGold].Property->GetFName()
		&& Name_bPlayer1Ready == ClassReps[(int32)ENetFields_Private::bPlayer1Ready].Property->GetFName()
		&& Name_bPlayer2Ready == ClassReps[(int32)ENetFields_Private::bPlayer2Ready].Property->GetFName()
		&& Name_bPlayer1Rematch == ClassReps[(int32)ENetFields_Private::bPlayer1Rematch].Property->GetFName()
		&& Name_bPlayer2Rematch == ClassReps[(int32)ENetFields_Private::bPlayer2Rematch].Property->GetFName()
		&& Name_WinnerTeamID == ClassReps[(int32)ENetFields_Private::WinnerTeamID].Property->GetFName()
		&& Name_CurrentPhaseIndex == ClassReps[(int32)ENetFields_Private::CurrentPhaseIndex].Property->GetFName()
		&& Name_CurrentRound == ClassReps[(int32)ENetFields_Private::CurrentRound].Property->GetFName()
		&& Name_PhaseTimer == ClassReps[(int32)ENetFields_Private::PhaseTimer].Property->GetFName()
		&& Name_GameGrid == ClassReps[(int32)ENetFields_Private::GameGrid].Property->GetFName()
		&& Name_AllUnits == ClassReps[(int32)ENetFields_Private::AllUnits].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAutoChessGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessGameState);
AAutoChessGameState::~AAutoChessGameState() {}
// End Class AAutoChessGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessGameState, AAutoChessGameState::StaticClass, TEXT("AAutoChessGameState"), &Z_Registration_Info_UClass_AAutoChessGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessGameState), 2756032179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_2400979510(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
