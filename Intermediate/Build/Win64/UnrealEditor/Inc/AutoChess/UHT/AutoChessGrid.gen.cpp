// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoChess/AutoChessGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChessGrid() {}

// Begin Cross Module References
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGrid();
AUTOCHESS_API UClass* Z_Construct_UClass_AAutoChessGrid_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoChess();
// End Cross Module References

// Begin Class AAutoChessGrid Function ClearHighlights
struct Z_Construct_UFunction_AAutoChessGrid_ClearHighlights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb8\x85\xe9\x99\xa4\xe9\xab\x98\xe4\xba\xae\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe9\x99\xa4\xe9\xab\x98\xe4\xba\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_ClearHighlights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "ClearHighlights", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_ClearHighlights_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_ClearHighlights_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGrid_ClearHighlights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_ClearHighlights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execClearHighlights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHighlights();
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function ClearHighlights

// Begin Class AAutoChessGrid Function FindPath
struct Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics
{
	struct AutoChessGrid_eventFindPath_Parms
	{
		FIntPoint StartGridPos;
		FIntPoint EndGridPos;
		TArray<FIntPoint> OutPathPoints;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xbb\xe6\x89\xbe\xe8\xb7\xaf\xe5\xbe\x84 (BFS)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xbb\xe6\x89\xbe\xe8\xb7\xaf\xe5\xbe\x84 (BFS)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPathPoints;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_StartGridPos = { "StartGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventFindPath_Parms, StartGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_EndGridPos = { "EndGridPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventFindPath_Parms, EndGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_OutPathPoints_Inner = { "OutPathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_OutPathPoints = { "OutPathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventFindPath_Parms, OutPathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessGrid_eventFindPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessGrid_eventFindPath_Parms), &Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_StartGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_EndGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_OutPathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_OutPathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "FindPath", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::AutoChessGrid_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::AutoChessGrid_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGrid_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execFindPath)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartGridPos);
	P_GET_STRUCT(FIntPoint,Z_Param_EndGridPos);
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_OutPathPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartGridPos,Z_Param_EndGridPos,Z_Param_Out_OutPathPoints);
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function FindPath

// Begin Class AAutoChessGrid Function GenerateGrid
struct Z_Construct_UFunction_AAutoChessGrid_GenerateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe6\xa3\x8b\xe7\x9b\x98\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_GenerateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "GenerateGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_GenerateGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAutoChessGrid_GenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_GenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execGenerateGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGrid();
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function GenerateGrid

// Begin Class AAutoChessGrid Function GridToWorld
struct Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics
{
	struct AutoChessGrid_eventGridToWorld_Parms
	{
		int32 GridX;
		int32 GridY;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x86\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87 (\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87 (\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventGridToWorld_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventGridToWorld_Parms, GridY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "GridToWorld", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::AutoChessGrid_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::AutoChessGrid_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGrid_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execGridToWorld)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function GridToWorld

// Begin Class AAutoChessGrid Function HighlightTiles
struct Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics
{
	struct AutoChessGrid_eventHighlightTiles_Parms
	{
		TArray<FIntPoint> GridPositions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe6\x8c\x87\xe5\xae\x9a\xe6\xa0\xbc\xe5\xad\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridPositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::NewProp_GridPositions_Inner = { "GridPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::NewProp_GridPositions = { "GridPositions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventHighlightTiles_Parms, GridPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPositions_MetaData), NewProp_GridPositions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::NewProp_GridPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::NewProp_GridPositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "HighlightTiles", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::AutoChessGrid_eventHighlightTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::AutoChessGrid_eventHighlightTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGrid_HighlightTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_HighlightTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execHighlightTiles)
{
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_GridPositions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightTiles(Z_Param_Out_GridPositions);
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function HighlightTiles

// Begin Class AAutoChessGrid Function IsValidGridPosition
struct Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics
{
	struct AutoChessGrid_eventIsValidGridPosition_Parms
	{
		int32 GridX;
		int32 GridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe6\x95\x88" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventIsValidGridPosition_Parms, GridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventIsValidGridPosition_Parms, GridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessGrid_eventIsValidGridPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessGrid_eventIsValidGridPosition_Parms), &Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "IsValidGridPosition", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::AutoChessGrid_eventIsValidGridPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::AutoChessGrid_eventIsValidGridPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execIsValidGridPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidGridPosition(Z_Param_GridX,Z_Param_GridY);
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function IsValidGridPosition

// Begin Class AAutoChessGrid Function WorldToGrid
struct Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics
{
	struct AutoChessGrid_eventWorldToGrid_Parms
	{
		FVector WorldLocation;
		int32 OutGridX;
		int32 OutGridY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb0\x86\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87 (X, Y)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86\xe4\xb8\x96\xe7\x95\x8c\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87 (X, Y)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGridY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventWorldToGrid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_OutGridX = { "OutGridX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventWorldToGrid_Parms, OutGridX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_OutGridY = { "OutGridY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoChessGrid_eventWorldToGrid_Parms, OutGridY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoChessGrid_eventWorldToGrid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoChessGrid_eventWorldToGrid_Parms), &Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_OutGridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_OutGridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoChessGrid, nullptr, "WorldToGrid", nullptr, nullptr, Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::AutoChessGrid_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::AutoChessGrid_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAutoChessGrid_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoChessGrid_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAutoChessGrid::execWorldToGrid)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGridX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGridY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_WorldLocation,Z_Param_Out_OutGridX,Z_Param_Out_OutGridY);
	P_NATIVE_END;
}
// End Class AAutoChessGrid Function WorldToGrid

// Begin Class AAutoChessGrid
void AAutoChessGrid::StaticRegisterNativesAAutoChessGrid()
{
	UClass* Class = AAutoChessGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearHighlights", &AAutoChessGrid::execClearHighlights },
		{ "FindPath", &AAutoChessGrid::execFindPath },
		{ "GenerateGrid", &AAutoChessGrid::execGenerateGrid },
		{ "GridToWorld", &AAutoChessGrid::execGridToWorld },
		{ "HighlightTiles", &AAutoChessGrid::execHighlightTiles },
		{ "IsValidGridPosition", &AAutoChessGrid::execIsValidGridPosition },
		{ "WorldToGrid", &AAutoChessGrid::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoChessGrid);
UClass* Z_Construct_UClass_AAutoChessGrid_NoRegister()
{
	return AAutoChessGrid::StaticClass();
}
struct Z_Construct_UClass_AAutoChessGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xa3\x8b\xe7\x9b\x98\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n * \xe8\xb4\x9f\xe8\xb4\xa3\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe3\x80\x81\xe6\xa3\x8b\xe5\xad\x90\xe6\x94\xbe\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x81\xe4\xbb\xa5\xe5\x8f\x8a\xe6\xa3\x8b\xe7\x9b\x98\xe5\x8f\xaf\xe8\xa7\x86\xe5\x8c\x96\n */" },
#endif
		{ "IncludePath", "AutoChessGrid.h" },
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb5\xb0\xe6\xa3\x8b\xe6\xa3\x8b\xe7\x9b\x98\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\n\xe8\xb4\x9f\xe8\xb4\xa3\xe7\xbd\x91\xe6\xa0\xbc\xe5\x9d\x90\xe6\xa0\x87\xe8\xbd\xac\xe6\x8d\xa2\xe3\x80\x81\xe6\xa3\x8b\xe5\xad\x90\xe6\x94\xbe\xe7\xbd\xae\xe4\xbd\x8d\xe7\xbd\xae\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x81\xe4\xbb\xa5\xe5\x8f\x8a\xe6\xa3\x8b\xe7\x9b\x98\xe5\x8f\xaf\xe8\xa7\x86\xe5\x8c\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe7\x9b\x98\xe5\xae\xbd\xe5\xba\xa6 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe7\x9b\x98\xe5\xae\xbd\xe5\xba\xa6 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe7\x9b\x98\xe9\xab\x98\xe5\xba\xa6 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe7\x9b\x98\xe9\xab\x98\xe5\xba\xa6 (\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f (Unreal Units)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f (Unreal Units)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xad\x90\xe9\xab\x98\xe5\xba\xa6 (Z\xe8\xbd\xb4\xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe5\x88\xb6)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe9\xab\x98\xe5\xba\xa6 (Z\xe8\xbd\xb4\xe7\xbc\xa9\xe6\x94\xbe\xe6\x8e\xa7\xe5\x88\xb6)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOrigin_MetaData[] = {
		{ "Category", "AutoChess|Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x8b\xe7\x9b\x98\xe5\x8e\x9f\xe7\x82\xb9\xe5\x81\x8f\xe7\xa7\xbb\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x8b\xe7\x9b\x98\xe5\x8e\x9f\xe7\x82\xb9\xe5\x81\x8f\xe7\xa7\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualOffset_MetaData[] = {
		{ "Category", "AutoChess|Visuals|Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\x8b\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb (\xe7\x94\xa8\xe4\xba\x8e\xe5\xbe\xae\xe8\xb0\x83\xe5\xaf\xb9\xe9\xbd\x90)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb (\xe7\x94\xa8\xe4\xba\x8e\xe5\xbe\xae\xe8\xb0\x83\xe5\xaf\xb9\xe9\xbd\x90)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalePadding_MetaData[] = {
		{ "Category", "AutoChess|Visuals|Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xbc\xa9\xe6\x94\xbe\xe8\xa1\xa5\xe5\x81\xbf (\xe9\xbb\x98\xe8\xae\xa4""1.0\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe8\xbf\x98\xe6\x9c\x89\xe7\xbc\x9d\xe9\x9a\x99\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xbe\xe4\xb8\xba""1.01)\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbc\xa9\xe6\x94\xbe\xe8\xa1\xa5\xe5\x81\xbf (\xe9\xbb\x98\xe8\xae\xa4""1.0\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe8\xbf\x98\xe6\x9c\x89\xe7\xbc\x9d\xe9\x9a\x99\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xbe\xe4\xb8\xba""1.01)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileISM_White_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x99\xbd\xe8\x89\xb2\xe6\xa0\xbc\xe5\xad\x90 (\xe6\x88\x96\xe7\xb1\xbb\xe5\x9e\x8b""1)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x99\xbd\xe8\x89\xb2\xe6\xa0\xbc\xe5\xad\x90 (\xe6\x88\x96\xe7\xb1\xbb\xe5\x9e\x8b""1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileISM_Black_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xbb\x91\xe8\x89\xb2\xe6\xa0\xbc\xe5\xad\x90 (\xe6\x88\x96\xe7\xb1\xbb\xe5\x9e\x8b""2)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x91\xe8\x89\xb2\xe6\xa0\xbc\xe5\xad\x90 (\xe6\x88\x96\xe7\xb1\xbb\xe5\x9e\x8b""2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileISM_Highlight_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe6\xa0\xbc\xe5\xad\x90 ISM\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe6\xa0\xbc\xe5\xad\x90 ISM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xad\x90\xe6\xa8\xa1\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe6\xa8\xa1\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialWhite_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\x90\xe8\xb4\xa8""1\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8""1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBlack_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\x90\xe8\xb4\xa8""2\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8""2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialHighlight_MetaData[] = {
		{ "Category", "AutoChess|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\n" },
#endif
		{ "ModuleRelativePath", "AutoChessGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalePadding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileISM_White;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileISM_Black;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileISM_Highlight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialWhite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBlack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoChessGrid_ClearHighlights, "ClearHighlights" }, // 1010077040
		{ &Z_Construct_UFunction_AAutoChessGrid_FindPath, "FindPath" }, // 3494343221
		{ &Z_Construct_UFunction_AAutoChessGrid_GenerateGrid, "GenerateGrid" }, // 3211765730
		{ &Z_Construct_UFunction_AAutoChessGrid_GridToWorld, "GridToWorld" }, // 116919497
		{ &Z_Construct_UFunction_AAutoChessGrid_HighlightTiles, "HighlightTiles" }, // 735317690
		{ &Z_Construct_UFunction_AAutoChessGrid_IsValidGridPosition, "IsValidGridPosition" }, // 3553283616
		{ &Z_Construct_UFunction_AAutoChessGrid_WorldToGrid, "WorldToGrid" }, // 3782130142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoChessGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileHeight_MetaData), NewProp_TileHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridOrigin = { "GridOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, GridOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOrigin_MetaData), NewProp_GridOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_VisualOffset = { "VisualOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, VisualOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualOffset_MetaData), NewProp_VisualOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_ScalePadding = { "ScalePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, ScalePadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalePadding_MetaData), NewProp_ScalePadding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_White = { "TileISM_White", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileISM_White), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileISM_White_MetaData), NewProp_TileISM_White_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_Black = { "TileISM_Black", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileISM_Black), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileISM_Black_MetaData), NewProp_TileISM_Black_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_Highlight = { "TileISM_Highlight", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileISM_Highlight), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileISM_Highlight_MetaData), NewProp_TileISM_Highlight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, TileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMesh_MetaData), NewProp_TileMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialWhite = { "MaterialWhite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, MaterialWhite), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialWhite_MetaData), NewProp_MaterialWhite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialBlack = { "MaterialBlack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, MaterialBlack), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBlack_MetaData), NewProp_MaterialBlack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialHighlight = { "MaterialHighlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoChessGrid, MaterialHighlight), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialHighlight_MetaData), NewProp_MaterialHighlight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoChessGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_GridOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_VisualOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_ScalePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_White,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_Black,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileISM_Highlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_TileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialWhite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialBlack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoChessGrid_Statics::NewProp_MaterialHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAutoChessGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoChess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoChessGrid_Statics::ClassParams = {
	&AAutoChessGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAutoChessGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGrid_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoChessGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoChessGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoChessGrid()
{
	if (!Z_Registration_Info_UClass_AAutoChessGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoChessGrid.OuterSingleton, Z_Construct_UClass_AAutoChessGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoChessGrid.OuterSingleton;
}
template<> AUTOCHESS_API UClass* StaticClass<AAutoChessGrid>()
{
	return AAutoChessGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoChessGrid);
AAutoChessGrid::~AAutoChessGrid() {}
// End Class AAutoChessGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoChessGrid, AAutoChessGrid::StaticClass, TEXT("AAutoChessGrid"), &Z_Registration_Info_UClass_AAutoChessGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoChessGrid), 2927402443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_2543972328(TEXT("/Script/AutoChess"),
	Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ue_AutoChess_AutoChess_Source_AutoChess_AutoChessGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
