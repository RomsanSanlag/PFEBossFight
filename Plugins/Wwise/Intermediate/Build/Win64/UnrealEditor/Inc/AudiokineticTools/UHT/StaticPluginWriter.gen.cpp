// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/AssetManagement/StaticPluginWriter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticPluginWriter() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin ScriptStruct FAkPluginInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPluginInfo;
class UScriptStruct* FAkPluginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginInfo, (UObject*)Z_Construct_UPackage__Script_AudiokineticTools(), TEXT("AkPluginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UScriptStruct* StaticStruct<FAkPluginInfo>()
{
	return FAkPluginInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkPluginInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginID_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLL_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PluginID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DLL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkPluginInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID = { "PluginID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkPluginInfo, PluginID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginID_MetaData), NewProp_PluginID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL = { "DLL", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkPluginInfo, DLL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLL_MetaData), NewProp_DLL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	nullptr,
	&NewStructOps,
	"AkPluginInfo",
	Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers),
	sizeof(FAkPluginInfo),
	alignof(FAkPluginInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton;
}
// End ScriptStruct FAkPluginInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkPluginInfo::StaticStruct, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps, TEXT("AkPluginInfo"), &Z_Registration_Info_UScriptStruct_AkPluginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPluginInfo), 4252691444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_1963187937(TEXT("/Script/AudiokineticTools"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
