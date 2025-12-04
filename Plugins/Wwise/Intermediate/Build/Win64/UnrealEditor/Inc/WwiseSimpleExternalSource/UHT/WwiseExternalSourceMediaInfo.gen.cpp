// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceMediaInfo() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo();
// End Cross Module References

// Begin ScriptStruct FWwiseExternalSourceMediaInfo
static_assert(std::is_polymorphic<FWwiseExternalSourceMediaInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceMediaInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo;
class UScriptStruct* FWwiseExternalSourceMediaInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(), TEXT("WwiseExternalSourceMediaInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton;
}
template<> WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* StaticStruct<FWwiseExternalSourceMediaInfo>()
{
	return FWwiseExternalSourceMediaInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Contains the necessary info package and load an external source media\n//There should be one entry for each external source media in the project \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the necessary info package and load an external source media\nThere should be one entry for each external source media in the project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceMediaInfoId_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeviceMemory_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalSourceMediaInfoId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MediaName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CodecID;
	static void NewProp_bIsStreamed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
	static void NewProp_bUseDeviceMemory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeviceMemory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceMediaInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId = { "ExternalSourceMediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, ExternalSourceMediaInfoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceMediaInfoId_MetaData), NewProp_ExternalSourceMediaInfoId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MediaName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaName_MetaData), NewProp_MediaName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, CodecID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodecID_MetaData), NewProp_CodecID_MetaData) };
void Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
{
	((FWwiseExternalSourceMediaInfo*)Obj)->bIsStreamed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStreamed_MetaData), NewProp_bIsStreamed_MetaData) };
void Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_SetBit(void* Obj)
{
	((FWwiseExternalSourceMediaInfo*)Obj)->bUseDeviceMemory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory = { "bUseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeviceMemory_MetaData), NewProp_bUseDeviceMemory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MemoryAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryAlignment_MetaData), NewProp_MemoryAlignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, PrefetchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchSize_MetaData), NewProp_PrefetchSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WwiseExternalSourceMediaInfo",
	Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers),
	sizeof(FWwiseExternalSourceMediaInfo),
	alignof(FWwiseExternalSourceMediaInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton;
}
// End ScriptStruct FWwiseExternalSourceMediaInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseExternalSourceMediaInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewStructOps, TEXT("WwiseExternalSourceMediaInfo"), &Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceMediaInfo), 3303971473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_1858491622(TEXT("/Script/WwiseSimpleExternalSource"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
