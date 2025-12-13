// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingRuntime/Public/Wwise/Packaging/WwiseAssetLibraryFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister();
// End Cross Module References

// Begin Class UWwiseAssetLibraryFilter
void UWwiseAssetLibraryFilter::StaticRegisterNativesUWwiseAssetLibraryFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryFilter);
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister()
{
	return UWwiseAssetLibraryFilter::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Wwise|AssetLibrary|Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base UObject representing a single AssetLibrary filter.\n *\n * A filter removes elements from the the Asset Library through the IsAssetAvailable operation.\n */" },
#endif
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base UObject representing a single AssetLibrary filter.\n\nA filter removes elements from the the Asset Library through the IsAssetAvailable operation." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::ClassParams = {
	&UWwiseAssetLibraryFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UClass* StaticClass<UWwiseAssetLibraryFilter>()
{
	return UWwiseAssetLibraryFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryFilter);
UWwiseAssetLibraryFilter::~UWwiseAssetLibraryFilter() {}
// End Class UWwiseAssetLibraryFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilter, UWwiseAssetLibraryFilter::StaticClass, TEXT("UWwiseAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilter), 3243567297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h_3062869209(TEXT("/Script/WwisePackagingRuntime"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
