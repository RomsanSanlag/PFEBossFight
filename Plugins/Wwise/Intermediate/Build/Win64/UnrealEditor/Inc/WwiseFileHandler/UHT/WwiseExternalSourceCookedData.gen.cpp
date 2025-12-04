// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseExternalSourceCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseExternalSourceCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData;
class UScriptStruct* FWwiseExternalSourceCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseExternalSourceCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseExternalSourceCookedData>()
{
	return FWwiseExternalSourceCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseExternalSourceCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cookie_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief User-defined Cookie for the External Source\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseExternalSourceCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief User-defined Cookie for the External Source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseExternalSourceCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cookie;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::NewProp_Cookie = { "Cookie", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookedData, Cookie), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cookie_MetaData), NewProp_Cookie_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::NewProp_Cookie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseExternalSourceCookedData",
	Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::PropPointers),
	sizeof(FWwiseExternalSourceCookedData),
	alignof(FWwiseExternalSourceCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseExternalSourceCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseExternalSourceCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseExternalSourceCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData_Statics::NewStructOps, TEXT("WwiseExternalSourceCookedData"), &Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceCookedData), 1521992001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseExternalSourceCookedData_h_4015526269(TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseExternalSourceCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseExternalSourceCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
