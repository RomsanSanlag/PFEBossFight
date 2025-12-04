// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingRuntime/Public/Wwise/Packaging/WwiseFilterableAssetLibrary.h"
#include "WwisePackagingRuntime/Public/Wwise/Packaging/WwiseAssetLibraryInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseFilterableAssetLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary_NoRegister();
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo();
// End Cross Module References

// Begin Class UWwiseFilterableAssetLibrary
void UWwiseFilterableAssetLibrary::StaticRegisterNativesUWwiseFilterableAssetLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseFilterableAssetLibrary);
UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary_NoRegister()
{
	return UWwiseFilterableAssetLibrary::StaticClass();
}
struct Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base UObject representing an object with an Editor-Only AssetLibraryInfo.\n *\n * This is typically for Shared AssetLibrary Filters and  AssetLibraries.\n *\n * This is used for WwiseAssetLibraryDetailsCustomization.\n */" },
#endif
		{ "IncludePath", "Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base UObject representing an object with an Editor-Only AssetLibraryInfo.\n\nThis is typically for Shared AssetLibrary Filters and  AssetLibraries.\n\nThis is used for WwiseAssetLibraryDetailsCustomization." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Default" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseFilterableAssetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseFilterableAssetLibrary, Info), Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2298368809
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::ClassParams = {
	&UWwiseFilterableAssetLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::PropPointers), 0),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton, Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UClass* StaticClass<UWwiseFilterableAssetLibrary>()
{
	return UWwiseFilterableAssetLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseFilterableAssetLibrary);
UWwiseFilterableAssetLibrary::~UWwiseFilterableAssetLibrary() {}
// End Class UWwiseFilterableAssetLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseFilterableAssetLibrary, UWwiseFilterableAssetLibrary::StaticClass, TEXT("UWwiseFilterableAssetLibrary"), &Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseFilterableAssetLibrary), 4063590384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h_977195734(TEXT("/Script/WwisePackagingRuntime"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
