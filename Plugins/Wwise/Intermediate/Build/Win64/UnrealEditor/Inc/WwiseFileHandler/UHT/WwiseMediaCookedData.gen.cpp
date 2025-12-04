// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/Wwise/WwisePackagedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseMediaCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile();
// End Cross Module References

// Begin ScriptStruct FWwiseMediaCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseMediaCookedData;
class UScriptStruct* FWwiseMediaCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseMediaCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseMediaCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseMediaCookedData>()
{
	return FWwiseMediaCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the Media\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Media" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFile_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Packaging information for this file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Packaging information for this file." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingReferenceLanguage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if it is a Reference Language item, or is a media shared by multiple languages.\n\x09 *\n\x09 * Used during packaging for logging purposes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if it is a Reference Language item, or is a media shared by multiple languages.\n\nUsed during packaging for logging purposes." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFile;
#if WITH_EDITORONLY_DATA
	static void NewProp_bUsingReferenceLanguage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingReferenceLanguage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseMediaCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, MediaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaId_MetaData), NewProp_MediaId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PackagedFile = { "PackagedFile", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, PackagedFile), Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFile_MetaData), NewProp_PackagedFile_MetaData) }; // 788579570
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bUsingReferenceLanguage_SetBit(void* Obj)
{
	((FWwiseMediaCookedData*)Obj)->bUsingReferenceLanguage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bUsingReferenceLanguage = { "bUsingReferenceLanguage", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseMediaCookedData), &Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bUsingReferenceLanguage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingReferenceLanguage_MetaData), NewProp_bUsingReferenceLanguage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PackagedFile,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bUsingReferenceLanguage,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseMediaCookedData",
	Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers),
	sizeof(FWwiseMediaCookedData),
	alignof(FWwiseMediaCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseMediaCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseMediaCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewStructOps, TEXT("WwiseMediaCookedData"), &Z_Registration_Info_UScriptStruct_WwiseMediaCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseMediaCookedData), 2137570600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_3993793950(TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
