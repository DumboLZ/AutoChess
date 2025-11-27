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
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessUnitBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

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
		{ "Category", "AutoChess|Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe6\xa0\xbc\xe5\xad\x90\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\xa0\xbc\xe5\xad\x90\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe6\x8d\xae" },
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
		{ "GetUnitAtGrid", &AAutoChessGameState::execGetUnitAtGrid },
		{ "GetUnitsByTeam", &AAutoChessGameState::execGetUnitsByTeam },
		{ "IsGridOccupied", &AAutoChessGameState::execIsGridOccupied },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player1Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player2Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player1Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player2Gold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllUnits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUnits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessGameState_GetUnitAtGrid, "GetUnitAtGrid" }, // 246306590
		{ &Z_Construct_UFunction_AAutoChessGameState_GetUnitsByTeam, "GetUnitsByTeam" }, // 462591683
		{ &Z_Construct_UFunction_AAutoChessGameState_IsGridOccupied, "IsGridOccupied" }, // 1685114244
		{ &Z_Construct_UFunction_AAutoChessGameState_RegisterUnit, "RegisterUnit" }, // 147410819
		{ &Z_Construct_UFunction_AAutoChessGameState_UnregisterUnit, "UnregisterUnit" }, // 2819651692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Health = { "Player1Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player1Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player1Health_MetaData), NewProp_Player1Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Health = { "Player2Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player2Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player2Health_MetaData), NewProp_Player2Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Gold = { "Player1Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player1Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player1Gold_MetaData), NewProp_Player1Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Gold = { "Player2Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, Player2Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player2Gold_MetaData), NewProp_Player2Gold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, GameGrid), Z_Construct_UClass_AAutoChessGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameGrid_MetaData), NewProp_GameGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits_Inner = { "AllUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAutoChessUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits = { "AllUnits", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGameState, AllUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUnits_MetaData), NewProp_AllUnits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player1Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_Player2Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_GameGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGameState_Statics::NewProp_AllUnits,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessGameState);
AAutoChessGameState::~AAutoChessGameState() {}
// End Class AAutoChessGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessGameState, AAutoChessGameState::StaticClass, TEXT("AAutoChessGameState"), &Z_Registration_Info_UClass_AAutoChessGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessGameState), 3919836011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_2711738005(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
