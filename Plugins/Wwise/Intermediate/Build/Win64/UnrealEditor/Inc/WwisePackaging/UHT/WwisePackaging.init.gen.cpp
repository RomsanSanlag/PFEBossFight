// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePackaging_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WwisePackaging;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WwisePackaging()
	{
		if (!Z_Registration_Info_UPackage__Script_WwisePackaging.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WwisePackaging",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBEEFA864,
				0x4BADFF05,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WwisePackaging.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WwisePackaging.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WwisePackaging(Z_Construct_UPackage__Script_WwisePackaging, TEXT("/Script/WwisePackaging"), Z_Registration_Info_UPackage__Script_WwisePackaging, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBEEFA864, 0x4BADFF05));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
