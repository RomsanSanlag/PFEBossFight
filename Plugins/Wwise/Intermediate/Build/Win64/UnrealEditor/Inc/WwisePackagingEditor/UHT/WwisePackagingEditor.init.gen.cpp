// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePackagingEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WwisePackagingEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_WwisePackagingEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WwisePackagingEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x68AB2049,
				0x7581BD91,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WwisePackagingEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WwisePackagingEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WwisePackagingEditor(Z_Construct_UPackage__Script_WwisePackagingEditor, TEXT("/Script/WwisePackagingEditor"), Z_Registration_Info_UPackage__Script_WwisePackagingEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68AB2049, 0x7581BD91));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
