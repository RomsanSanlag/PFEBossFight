// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings();
WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister();
// End Cross Module References

// Begin Class UWwiseExternalSourceSettings
void UWwiseExternalSourceSettings::StaticRegisterNativesUWwiseExternalSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseExternalSourceSettings);
UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister()
{
	return UWwiseExternalSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UWwiseExternalSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoTable_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Table of all information required to properly load all external source media in the project\n//All files in this table are packaged in the built project\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table of all information required to properly load all external source media in the project\nAll files in this table are packaged in the built project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceDefaultMedia_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceStagingDirectory_MetaData[] = {
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Staging location for External Source Media when cooking the project\n//This is the location from which to load external source media in the built project\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Staging location for External Source Media when cooking the project\nThis is the location from which to load external source media in the built project" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInfoTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceDefaultMedia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceStagingDirectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable = { "MediaInfoTable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, MediaInfoTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInfoTable_MetaData), NewProp_MediaInfoTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia = { "ExternalSourceDefaultMedia", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceDefaultMedia_MetaData), NewProp_ExternalSourceDefaultMedia_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory = { "ExternalSourceStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceStagingDirectory_MetaData), NewProp_ExternalSourceStagingDirectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams = {
	&UWwiseExternalSourceSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseExternalSourceSettings()
{
	if (!Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton, Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton;
}
template<> WWISESIMPLEEXTERNALSOURCE_API UClass* StaticClass<UWwiseExternalSourceSettings>()
{
	return UWwiseExternalSourceSettings::StaticClass();
}
UWwiseExternalSourceSettings::UWwiseExternalSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseExternalSourceSettings);
UWwiseExternalSourceSettings::~UWwiseExternalSourceSettings() {}
// End Class UWwiseExternalSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceSettings, UWwiseExternalSourceSettings::StaticClass, TEXT("UWwiseExternalSourceSettings"), &Z_Registration_Info_UClass_UWwiseExternalSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceSettings), 2685888972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_1204887625(TEXT("/Script/WwiseSimpleExternalSource"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
