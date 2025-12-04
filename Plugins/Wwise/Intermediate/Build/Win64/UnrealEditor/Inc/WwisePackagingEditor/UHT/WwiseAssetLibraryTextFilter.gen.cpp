// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryTextFilter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryTextFilter();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryTextFilter_NoRegister();
WWISEPACKAGINGEDITOR_API UEnum* Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// End Cross Module References

// Begin Enum EWwiseAssetLibraryTextFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType;
static UEnum* EWwiseAssetLibraryTextFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType, (UObject*)Z_Construct_UPackage__Script_WwisePackagingEditor(), TEXT("EWwiseAssetLibraryTextFilterType"));
	}
	return Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UEnum* StaticEnum<EWwiseAssetLibraryTextFilterType>()
{
	return EWwiseAssetLibraryTextFilterType_StaticEnum();
}
struct Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
		{ "Name.Comment", "/** The Name of the Wwise Object*/" },
		{ "Name.DisplayName", "Name" },
		{ "Name.Name", "EWwiseAssetLibraryTextFilterType::Name" },
		{ "Name.ToolTip", "The Name of the Wwise Object" },
		{ "PathInWwise.Comment", "/** The Path of the Wwise Object in Wwise*/" },
		{ "PathInWwise.DisplayName", "Path In Wwise" },
		{ "PathInWwise.Name", "EWwiseAssetLibraryTextFilterType::PathInWwise" },
		{ "PathInWwise.ToolTip", "The Path of the Wwise Object in Wwise" },
		{ "SystemPath.Comment", "/** The Path of the Wwise Unreal Asset*/" },
		{ "SystemPath.DisplayName", "System Path" },
		{ "SystemPath.Name", "EWwiseAssetLibraryTextFilterType::SystemPath" },
		{ "SystemPath.ToolTip", "The Path of the Wwise Unreal Asset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseAssetLibraryTextFilterType::Name", (int64)EWwiseAssetLibraryTextFilterType::Name },
		{ "EWwiseAssetLibraryTextFilterType::SystemPath", (int64)EWwiseAssetLibraryTextFilterType::SystemPath },
		{ "EWwiseAssetLibraryTextFilterType::PathInWwise", (int64)EWwiseAssetLibraryTextFilterType::PathInWwise },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
	nullptr,
	"EWwiseAssetLibraryTextFilterType",
	"EWwiseAssetLibraryTextFilterType",
	Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.InnerSingleton, Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType.InnerSingleton;
}
// End Enum EWwiseAssetLibraryTextFilterType

// Begin Class UWwiseAssetLibraryTextFilter
void UWwiseAssetLibraryTextFilter::StaticRegisterNativesUWwiseAssetLibraryTextFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryTextFilter);
UClass* Z_Construct_UClass_UWwiseAssetLibraryTextFilter_NoRegister()
{
	return UWwiseAssetLibraryTextFilter::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Filter Assets by Text" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filter according to one or multiple global searches, using * for any number of characters, each filter separated by a space.\n// For Regex, only one filter is permitted in standard Unreal regex notation.\n// Examples without Regex:\n//\x09\x09""Foo* filters everything starting with Foo\n//\x09\x09*Foo filters everything ending with Foo\n//\x09\x09*Foo* filters everything containing Foo\n// Examples with Regex:\n//\x09\x09^(Foo) filters everything starting with Foo\n//\x09\x09(Foo)\\b filters everything ending with Foo\n//\x09\x09\\w(Foo) filters everything containing Foo\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter according to one or multiple global searches, using * for any number of characters, each filter separated by a space.\nFor Regex, only one filter is permitted in standard Unreal regex notation.\nExamples without Regex:\n              Foo* filters everything starting with Foo\n              *Foo filters everything ending with Foo\n              *Foo* filters everything containing Foo\nExamples with Regex:\n              ^(Foo) filters everything starting with Foo\n              (Foo)\\b filters everything ending with Foo\n              \\w(Foo) filters everything containing Foo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of text by which to filter. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of text by which to filter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When selected, make this filter case sensitive. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When selected, make this filter case sensitive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExclusionFilter_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When selected, make this filter an exclusion filter. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When selected, make this filter an exclusion filter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRegex_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use Regular Expressions in the filter. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
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
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include SoundBanks that match the filter criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterMedia_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Include Media that match the filter criteria. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include Media that match the filter criteria." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static void NewProp_bIsExclusionFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExclusionFilter;
	static void NewProp_bUseRegex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRegex;
	static void NewProp_bFilterSoundBanks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterSoundBanks;
	static void NewProp_bFilterMedia_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterMedia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryTextFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryTextFilter, Filter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryTextFilter, FilterType), Z_Construct_UEnum_WwisePackagingEditor_EWwiseAssetLibraryTextFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 719706618
void Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UWwiseAssetLibraryTextFilter*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryTextFilter), &Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bIsExclusionFilter_SetBit(void* Obj)
{
	((UWwiseAssetLibraryTextFilter*)Obj)->bIsExclusionFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bIsExclusionFilter = { "bIsExclusionFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryTextFilter), &Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bIsExclusionFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExclusionFilter_MetaData), NewProp_bIsExclusionFilter_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bUseRegex_SetBit(void* Obj)
{
	((UWwiseAssetLibraryTextFilter*)Obj)->bUseRegex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bUseRegex = { "bUseRegex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryTextFilter), &Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bUseRegex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRegex_MetaData), NewProp_bUseRegex_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterSoundBanks_SetBit(void* Obj)
{
	((UWwiseAssetLibraryTextFilter*)Obj)->bFilterSoundBanks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterSoundBanks = { "bFilterSoundBanks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryTextFilter), &Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterSoundBanks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterSoundBanks_MetaData), NewProp_bFilterSoundBanks_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterMedia_SetBit(void* Obj)
{
	((UWwiseAssetLibraryTextFilter*)Obj)->bFilterMedia = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterMedia = { "bFilterMedia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryTextFilter), &Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterMedia_MetaData), NewProp_bFilterMedia_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bCaseSensitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bIsExclusionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bUseRegex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterSoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::NewProp_bFilterMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::ClassParams = {
	&UWwiseAssetLibraryTextFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryTextFilter()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryTextFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryTextFilter.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryTextFilter.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryTextFilter>()
{
	return UWwiseAssetLibraryTextFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryTextFilter);
UWwiseAssetLibraryTextFilter::~UWwiseAssetLibraryTextFilter() {}
// End Class UWwiseAssetLibraryTextFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseAssetLibraryTextFilterType_StaticEnum, TEXT("EWwiseAssetLibraryTextFilterType"), &Z_Registration_Info_UEnum_EWwiseAssetLibraryTextFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 719706618U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryTextFilter, UWwiseAssetLibraryTextFilter::StaticClass, TEXT("UWwiseAssetLibraryTextFilter"), &Z_Registration_Info_UClass_UWwiseAssetLibraryTextFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryTextFilter), 3384273198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_2481246043(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
