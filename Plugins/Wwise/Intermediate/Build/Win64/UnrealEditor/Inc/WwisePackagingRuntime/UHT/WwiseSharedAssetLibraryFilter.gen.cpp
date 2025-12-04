// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingRuntime/Public/Wwise/Packaging/WwiseSharedAssetLibraryFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedAssetLibraryFilter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister();
// End Cross Module References

// Begin Class UWwiseSharedAssetLibraryFilter
void UWwiseSharedAssetLibraryFilter::StaticRegisterNativesUWwiseSharedAssetLibraryFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseSharedAssetLibraryFilter);
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister()
{
	return UWwiseSharedAssetLibraryFilter::StaticClass();
}
struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A reusable list of Wwise Asset Library Filters. \n */" },
#endif
		{ "DisplayName", "Wwise Shared Asset Library Filter" },
		{ "IncludePath", "Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reusable list of Wwise Asset Library Filters." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseSharedAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::ClassParams = {
	&UWwiseSharedAssetLibraryFilter::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UClass* StaticClass<UWwiseSharedAssetLibraryFilter>()
{
	return UWwiseSharedAssetLibraryFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseSharedAssetLibraryFilter);
UWwiseSharedAssetLibraryFilter::~UWwiseSharedAssetLibraryFilter() {}
// End Class UWwiseSharedAssetLibraryFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseSharedAssetLibraryFilter, UWwiseSharedAssetLibraryFilter::StaticClass, TEXT("UWwiseSharedAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseSharedAssetLibraryFilter), 3674630541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h_2516553097(TEXT("/Script/WwisePackagingRuntime"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
