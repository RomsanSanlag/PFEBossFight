// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilterSoundBankType() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_NoRegister();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// End Cross Module References

// Begin Class UWwiseAssetLibraryFilterUserDefinedSoundBanks
void UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticRegisterNativesUWwiseAssetLibraryFilterUserDefinedSoundBanks()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryFilterUserDefinedSoundBanks);
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_NoRegister()
{
	return UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Exclude User-Defined SoundBanks" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterUserBanks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filter SoundBanks based on their type\n// It will filter User Defined SoundBanks when disabled\n// It will filter Auto Defined SoundBanks when enabled\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter SoundBanks based on their type\nIt will filter User Defined SoundBanks when disabled\nIt will filter Auto Defined SoundBanks when enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bFilterUserBanks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterUserBanks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterUserDefinedSoundBanks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks_SetBit(void* Obj)
{
	((UWwiseAssetLibraryFilterUserDefinedSoundBanks*)Obj)->bFilterUserBanks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks = { "bFilterUserBanks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibraryFilterUserDefinedSoundBanks), &Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterUserBanks_MetaData), NewProp_bFilterUserBanks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::NewProp_bFilterUserBanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryFilterUserDefinedSoundBanks>()
{
	return UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryFilterUserDefinedSoundBanks);
UWwiseAssetLibraryFilterUserDefinedSoundBanks::~UWwiseAssetLibraryFilterUserDefinedSoundBanks() {}
// End Class UWwiseAssetLibraryFilterUserDefinedSoundBanks

// Begin Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks
void UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticRegisterNativesUWwiseAssetLibraryFilterAutoDefinedSoundBanks()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryFilterAutoDefinedSoundBanks);
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_NoRegister()
{
	return UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Exclude Auto-Defined SoundBanks" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterSoundBankType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterAutoDefinedSoundBanks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryFilterAutoDefinedSoundBanks>()
{
	return UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryFilterAutoDefinedSoundBanks);
UWwiseAssetLibraryFilterAutoDefinedSoundBanks::~UWwiseAssetLibraryFilterAutoDefinedSoundBanks() {}
// End Class UWwiseAssetLibraryFilterAutoDefinedSoundBanks

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks, UWwiseAssetLibraryFilterUserDefinedSoundBanks::StaticClass, TEXT("UWwiseAssetLibraryFilterUserDefinedSoundBanks"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterUserDefinedSoundBanks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterUserDefinedSoundBanks), 2907370582U) },
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks, UWwiseAssetLibraryFilterAutoDefinedSoundBanks::StaticClass, TEXT("UWwiseAssetLibraryFilterAutoDefinedSoundBanks"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterAutoDefinedSoundBanks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterAutoDefinedSoundBanks), 4032146820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h_2670682201(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterSoundBankType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
