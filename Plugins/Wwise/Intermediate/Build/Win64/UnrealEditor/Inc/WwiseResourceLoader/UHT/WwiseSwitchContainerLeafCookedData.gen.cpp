// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseExternalSourceCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGroupValueCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSwitchContainerLeafCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseSwitchContainerLeafCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData;
class UScriptStruct* FWwiseSwitchContainerLeafCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSwitchContainerLeafCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSwitchContainerLeafCookedData>()
{
	return FWwiseSwitchContainerLeafCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueSet_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_GroupValueSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSwitchContainerLeafCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_ElementProp = { "GroupValueSet", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(0, nullptr) }; // 2366756795
static_assert(TModels_V<CGetTypeHashable, FWwiseGroupValueCookedData>, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet = { "GroupValueSet", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, GroupValueSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueSet_MetaData), NewProp_GroupValueSet_MetaData) }; // 2366756795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 1590977242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 1590977242
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 2137570600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 2137570600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(0, nullptr) }; // 1521992001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSources_MetaData), NewProp_ExternalSources_MetaData) }; // 1521992001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_GroupValueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewProp_ExternalSources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSwitchContainerLeafCookedData",
	Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::PropPointers),
	sizeof(FWwiseSwitchContainerLeafCookedData),
	alignof(FWwiseSwitchContainerLeafCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseSwitchContainerLeafCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSwitchContainerLeafCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewStructOps, TEXT("WwiseSwitchContainerLeafCookedData"), &Z_Registration_Info_UScriptStruct_WwiseSwitchContainerLeafCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSwitchContainerLeafCookedData), 877470119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h_2004204138(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
