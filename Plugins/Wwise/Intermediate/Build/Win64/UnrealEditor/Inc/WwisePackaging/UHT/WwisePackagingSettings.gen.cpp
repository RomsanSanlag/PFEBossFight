// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackaging/Public/Wwise/Packaging/WwisePackagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePackagingSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WwisePackaging();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary_NoRegister();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwisePackagingSettings();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwisePackagingSettings_NoRegister();
// End Cross Module References

// Begin Class UWwisePackagingSettings
void UWwisePackagingSettings::StaticRegisterNativesUWwisePackagingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwisePackagingSettings);
UClass* Z_Construct_UClass_UWwisePackagingSettings_NoRegister()
{
	return UWwisePackagingSettings::StaticClass();
}
struct Z_Construct_UClass_UWwisePackagingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Packaging/WwisePackagingSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackageAsBulkData_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Determines whether the files are written as loose files in the packages, or inside the UAssets as Bulk Data.\n" },
#endif
		{ "DisplayName", "Package as Bulk Data" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the files are written as loose files in the packages, or inside the UAssets as Bulk Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetLibraries_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prioritized list of all Wwise Libraries that should be applied to a package Wwise assets as Bulk Data.\n//If no value is set or if they fall through, shared Wwise asset files will be cooked as Additional Data.\n//Ensure that the Shared Asset library is at the bottom of this list.\n" },
#endif
		{ "DisplayName", "Libraries used for cooking Wwise UAssets as Bulk Data" },
		{ "EditCondition", "bPackageAsBulkData" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prioritized list of all Wwise Libraries that should be applied to a package Wwise assets as Bulk Data.\nIf no value is set or if they fall through, shared Wwise asset files will be cooked as Additional Data.\nEnsure that the Shared Asset library is at the bottom of this list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetLibrariesKeepAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialAssetLibraryCreated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Editor: If we are enabling the Bulk Data for the first time, we should create a default Shared Asset library. \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor: If we are enabling the Bulk Data for the first time, we should create a default Shared Asset library." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bPackageAsBulkData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageAsBulkData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetLibraries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetLibraries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetLibrariesKeepAlive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetLibrariesKeepAlive;
#if WITH_EDITORONLY_DATA
	static void NewProp_bInitialAssetLibraryCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialAssetLibraryCreated;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwisePackagingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bPackageAsBulkData_SetBit(void* Obj)
{
	((UWwisePackagingSettings*)Obj)->bPackageAsBulkData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bPackageAsBulkData = { "bPackageAsBulkData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwisePackagingSettings), &Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bPackageAsBulkData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackageAsBulkData_MetaData), NewProp_bPackageAsBulkData_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibraries_Inner = { "AssetLibraries", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibraries = { "AssetLibraries", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, AssetLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetLibraries_MetaData), NewProp_AssetLibraries_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibrariesKeepAlive_Inner = { "AssetLibrariesKeepAlive", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibrariesKeepAlive = { "AssetLibrariesKeepAlive", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, AssetLibrariesKeepAlive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetLibrariesKeepAlive_MetaData), NewProp_AssetLibrariesKeepAlive_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bInitialAssetLibraryCreated_SetBit(void* Obj)
{
	((UWwisePackagingSettings*)Obj)->bInitialAssetLibraryCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bInitialAssetLibraryCreated = { "bInitialAssetLibraryCreated", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwisePackagingSettings), &Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bInitialAssetLibraryCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialAssetLibraryCreated_MetaData), NewProp_bInitialAssetLibraryCreated_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwisePackagingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bPackageAsBulkData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibraries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibraries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibrariesKeepAlive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_AssetLibrariesKeepAlive,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwisePackagingSettings_Statics::NewProp_bInitialAssetLibraryCreated,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwisePackagingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwisePackagingSettings_Statics::ClassParams = {
	&UWwisePackagingSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwisePackagingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwisePackagingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwisePackagingSettings()
{
	if (!Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton, Z_Construct_UClass_UWwisePackagingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton;
}
template<> WWISEPACKAGING_API UClass* StaticClass<UWwisePackagingSettings>()
{
	return UWwisePackagingSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwisePackagingSettings);
// End Class UWwisePackagingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwisePackagingSettings, UWwisePackagingSettings::StaticClass, TEXT("UWwisePackagingSettings"), &Z_Registration_Info_UClass_UWwisePackagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwisePackagingSettings), 935026982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_3213276555(TEXT("/Script/WwisePackaging"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
