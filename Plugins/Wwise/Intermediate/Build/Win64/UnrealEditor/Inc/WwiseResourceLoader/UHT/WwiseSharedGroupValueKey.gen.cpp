// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseSharedGroupValueKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedGroupValueKey() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey();
// End Cross Module References

// Begin ScriptStruct FWwiseSharedGroupValueKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey;
class UScriptStruct* FWwiseSharedGroupValueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedGroupValueKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSharedGroupValueKey>()
{
	return FWwiseSharedGroupValueKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedGroupValueKey.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedGroupValueKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedGroupValueKey",
	nullptr,
	0,
	sizeof(FWwiseSharedGroupValueKey),
	alignof(FWwiseSharedGroupValueKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton;
}
// End ScriptStruct FWwiseSharedGroupValueKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSharedGroupValueKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::NewStructOps, TEXT("WwiseSharedGroupValueKey"), &Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedGroupValueKey), 606789366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_1878872068(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
