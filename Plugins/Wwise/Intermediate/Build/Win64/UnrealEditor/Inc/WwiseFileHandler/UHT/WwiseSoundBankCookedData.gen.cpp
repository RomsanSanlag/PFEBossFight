// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "WwiseFileHandler/Public/Wwise/WwisePackagedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSoundBankCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
// End Cross Module References

// Begin Enum EWwiseSoundBankType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseSoundBankType;
static UEnum* EWwiseSoundBankType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("EWwiseSoundBankType"));
	}
	return Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseSoundBankType>()
{
	return EWwiseSoundBankType_StaticEnum();
}
struct Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bus.Name", "EWwiseSoundBankType::Bus" },
		{ "Event.Comment", "// = AKCODECID_BANK,\n" },
		{ "Event.Name", "EWwiseSoundBankType::Event" },
		{ "Event.ToolTip", "= AKCODECID_BANK," },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "User.Name", "EWwiseSoundBankType::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseSoundBankType::User", (int64)EWwiseSoundBankType::User },
		{ "EWwiseSoundBankType::Event", (int64)EWwiseSoundBankType::Event },
		{ "EWwiseSoundBankType::Bus", (int64)EWwiseSoundBankType::Bus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	"EWwiseSoundBankType",
	"EWwiseSoundBankType",
	Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType()
{
	if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton, Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton;
}
// End Enum EWwiseSoundBankType

// Begin ScriptStruct FWwiseSoundBankCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData;
class UScriptStruct* FWwiseSoundBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseSoundBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseSoundBankCookedData>()
{
	return FWwiseSoundBankCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Required data to load a SoundBank\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Required data to load a SoundBank" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the SoundBank.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the SoundBank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContainsMedia_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\x09 *\n\x09 * Useful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\n\x09 * data from the SoundBank, and has no use for the file itself.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\nUseful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\ndata from the SoundBank, and has no use for the file itself." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankType_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\x09 *\n\x09 * Useful for loading by file name.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\nUseful for loading by file name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFile_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Packaging information for this file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Packaging information for this file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static void NewProp_bContainsMedia_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsMedia;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundBankType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundBankType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSoundBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
void Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_SetBit(void* Obj)
{
	((FWwiseSoundBankCookedData*)Obj)->bContainsMedia = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia = { "bContainsMedia", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseSoundBankCookedData), &Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContainsMedia_MetaData), NewProp_bContainsMedia_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType = { "SoundBankType", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankType), Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankType_MetaData), NewProp_SoundBankType_MetaData) }; // 867447053
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_PackagedFile = { "PackagedFile", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, PackagedFile), Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFile_MetaData), NewProp_PackagedFile_MetaData) }; // 788579570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_PackagedFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseSoundBankCookedData",
	Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers),
	sizeof(FWwiseSoundBankCookedData),
	alignof(FWwiseSoundBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseSoundBankCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseSoundBankType_StaticEnum, TEXT("EWwiseSoundBankType"), &Z_Registration_Info_UEnum_EWwiseSoundBankType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 867447053U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseSoundBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseSoundBankCookedData"), &Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSoundBankCookedData), 1590977242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_405653062(TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
