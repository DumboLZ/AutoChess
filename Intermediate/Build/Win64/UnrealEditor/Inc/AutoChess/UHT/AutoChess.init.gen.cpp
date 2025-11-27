// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoChess_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AutoChess;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AutoChess()
	{
		if (!Z_Registration_Info_UPackage__Script_AutoChess.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AutoChess",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x461C752C,
				0xFA824921,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AutoChess.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AutoChess.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AutoChess(Z_Construct_UPackage__Script_AutoChess, TEXT("/Script/AutoChess"), Z_Registration_Info_UPackage__Script_AutoChess, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x461C752C, 0xFA824921));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
