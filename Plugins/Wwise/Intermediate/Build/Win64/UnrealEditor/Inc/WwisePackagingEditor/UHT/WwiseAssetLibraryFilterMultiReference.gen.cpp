// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilterMultiReference() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// End Cross Module References

// Begin Class UWwiseAssetLibraryFilterMultiReference
void UWwiseAssetLibraryFilterMultiReference::StaticRegisterNativesUWwiseAssetLibraryFilterMultiReference()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryFilterMultiReference);
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_NoRegister()
{
	return UWwiseAssetLibraryFilterMultiReference::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Keep Multiple Reference Assets Only" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterMultiReference.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterMultiReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterMultiReference::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryFilterMultiReference>()
{
	return UWwiseAssetLibraryFilterMultiReference::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryFilterMultiReference);
UWwiseAssetLibraryFilterMultiReference::~UWwiseAssetLibraryFilterMultiReference() {}
// End Class UWwiseAssetLibraryFilterMultiReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterMultiReference, UWwiseAssetLibraryFilterMultiReference::StaticClass, TEXT("UWwiseAssetLibraryFilterMultiReference"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterMultiReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterMultiReference), 3291303468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h_578629008(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterMultiReference_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
