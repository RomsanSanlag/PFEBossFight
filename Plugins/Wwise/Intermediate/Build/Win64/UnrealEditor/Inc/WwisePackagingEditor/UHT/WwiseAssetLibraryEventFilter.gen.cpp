// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryEventFilter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryEventFilter();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryEventFilter_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// End Cross Module References

// Begin Class UWwiseAssetLibraryEventFilter
void UWwiseAssetLibraryEventFilter::StaticRegisterNativesUWwiseAssetLibraryEventFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryEventFilter);
UClass* Z_Construct_UClass_UWwiseAssetLibraryEventFilter_NoRegister()
{
	return UWwiseAssetLibraryEventFilter::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Filter Event Names" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filter according to one or multiple global searches, using * for any number of characters, each filter separated by a space.\n// For Regex, only one filter is permitted in standard Unreal regex notation.\n// Examples without Regex:\n//\x09\x09""Foo* filters every event starting with Foo\n//\x09\x09*Foo filters every event ending with Foo\n//\x09\x09*Foo* filters every event containing Foo\n// Examples with Regex:\n//\x09\x09^(Foo) filters every event starting with Foo\n//\x09\x09(Foo)\\b filters every event ending with Foo\n//\x09\x09\\w(Foo) filters every event containing Foo\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter according to one or multiple global searches, using * for any number of characters, each filter separated by a space.\nFor Regex, only one filter is permitted in standard Unreal regex notation.\nExamples without Regex:\n              Foo* filters every event starting with Foo\n              *Foo filters every event ending with Foo\n              *Foo* filters every event containing Foo\nExamples with Regex:\n              ^(Foo) filters every event starting with Foo\n              (Foo)\\b filters every event ending with Foo\n              \\w(Foo) filters every event containing Foo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When selected, make this filter case sensitive. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When selected, make this filter case sensitive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSingleReferenceAssetsOnly_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include media and SoundBanks only if they are not used in Events outside the filter criteria. */" },
#endif
		{ "DisplayName", "Include single-reference assets only" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include media and SoundBanks only if they are not used in Events outside the filter criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRegex_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use Regular Expressions in the filter. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use Regular Expressions in the filter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterSoundBanks_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include SoundBanks that match the filter criteria. */" },
#endif
		{ "DisplayName", "Filter SoundBanks" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include SoundBanks that match the filter criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterMedia_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include Media that match the filter criteria. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryEventFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include Media that match the filter criteria." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static void NewProp_bIncludeSingleReferenceAssetsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSingleReferenceAssetsOnly;
	static void NewProp_bUseRegex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRegex;
	static void NewProp_bFilterSoundBanks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterSoundBanks;
	static void NewProp_bFilterMedia_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterMedia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryEventFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryEventFilter, Filter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UWwiseAssetLibraryEventFilter*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryEventFilter), &Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bIncludeSingleReferenceAssetsOnly_SetBit(void* Obj)
{
	((UWwiseAssetLibraryEventFilter*)Obj)->bIncludeSingleReferenceAssetsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bIncludeSingleReferenceAssetsOnly = { "bIncludeSingleReferenceAssetsOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryEventFilter), &Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bIncludeSingleReferenceAssetsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSingleReferenceAssetsOnly_MetaData), NewProp_bIncludeSingleReferenceAssetsOnly_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bUseRegex_SetBit(void* Obj)
{
	((UWwiseAssetLibraryEventFilter*)Obj)->bUseRegex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bUseRegex = { "bUseRegex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryEventFilter), &Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bUseRegex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRegex_MetaData), NewProp_bUseRegex_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterSoundBanks_SetBit(void* Obj)
{
	((UWwiseAssetLibraryEventFilter*)Obj)->bFilterSoundBanks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterSoundBanks = { "bFilterSoundBanks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryEventFilter), &Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterSoundBanks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterSoundBanks_MetaData), NewProp_bFilterSoundBanks_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterMedia_SetBit(void* Obj)
{
	((UWwiseAssetLibraryEventFilter*)Obj)->bFilterMedia = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterMedia = { "bFilterMedia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryEventFilter), &Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterMedia_MetaData), NewProp_bFilterMedia_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bCaseSensitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bIncludeSingleReferenceAssetsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bUseRegex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterSoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::NewProp_bFilterMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::ClassParams = {
	&UWwiseAssetLibraryEventFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryEventFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryEventFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryEventFilter.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryEventFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryEventFilter.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryEventFilter>()
{
	return UWwiseAssetLibraryEventFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryEventFilter);
UWwiseAssetLibraryEventFilter::~UWwiseAssetLibraryEventFilter() {}
// End Class UWwiseAssetLibraryEventFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryEventFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryEventFilter, UWwiseAssetLibraryEventFilter::StaticClass, TEXT("UWwiseAssetLibraryEventFilter"), &Z_Registration_Info_UClass_UWwiseAssetLibraryEventFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryEventFilter), 1877157081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryEventFilter_h_1748315124(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryEventFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryEventFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
