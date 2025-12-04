// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseTriggerCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseTriggerCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseTriggerCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseTriggerCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData;
class UScriptStruct* FWwiseTriggerCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseTriggerCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseTriggerCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseTriggerCookedData>()
{
	return FWwiseTriggerCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseTriggerCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseTriggerCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseTriggerCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseTriggerCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId = { "TriggerId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseTriggerCookedData, TriggerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerId_MetaData), NewProp_TriggerId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseTriggerCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_TriggerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseTriggerCookedData",
	Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::PropPointers),
	sizeof(FWwiseTriggerCookedData),
	alignof(FWwiseTriggerCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseTriggerCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseTriggerCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseTriggerCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseTriggerCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseTriggerCookedData_Statics::NewStructOps, TEXT("WwiseTriggerCookedData"), &Z_Registration_Info_UScriptStruct_WwiseTriggerCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseTriggerCookedData), 211227721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseTriggerCookedData_h_1133043188(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseTriggerCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseTriggerCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
