// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseEventInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseEventInfo() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

// Begin Enum EWwiseEventSwitchContainerLoading
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading;
static UEnum* EWwiseEventSwitchContainerLoading_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseEventSwitchContainerLoading"));
	}
	return Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>()
{
	return EWwiseEventSwitchContainerLoading_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysLoad.DisplayName", "Always Load Media" },
		{ "AlwaysLoad.Name", "EWwiseEventSwitchContainerLoading::AlwaysLoad" },
		{ "BlueprintType", "true" },
		{ "LoadOnReference.DisplayName", "Load Media Only When Referenced" },
		{ "LoadOnReference.Name", "EWwiseEventSwitchContainerLoading::LoadOnReference" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseEventSwitchContainerLoading::AlwaysLoad", (int64)EWwiseEventSwitchContainerLoading::AlwaysLoad },
		{ "EWwiseEventSwitchContainerLoading::LoadOnReference", (int64)EWwiseEventSwitchContainerLoading::LoadOnReference },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseEventSwitchContainerLoading",
	"EWwiseEventSwitchContainerLoading",
	Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading()
{
	if (!Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading.InnerSingleton;
}
// End Enum EWwiseEventSwitchContainerLoading

// Begin ScriptStruct FWwiseEventInfo
static_assert(std::is_polymorphic<FWwiseEventInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseEventInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseEventInfo;
class UScriptStruct* FWwiseEventInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseEventInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseEventInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseEventInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseEventInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseEventInfo.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseEventInfo>()
{
	return FWwiseEventInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseEventInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Event Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseEventInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseEventInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLoading_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseEventInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventInfo, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchContainerLoading_MetaData), NewProp_SwitchContainerLoading_MetaData) }; // 3167354913
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventInfo, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 2422288685
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewProp_DestroyOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseObjectInfo,
	&NewStructOps,
	"WwiseEventInfo",
	Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::PropPointers),
	sizeof(FWwiseEventInfo),
	alignof(FWwiseEventInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseEventInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseEventInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseEventInfo.InnerSingleton;
}
// End ScriptStruct FWwiseEventInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseEventSwitchContainerLoading_StaticEnum, TEXT("EWwiseEventSwitchContainerLoading"), &Z_Registration_Info_UEnum_EWwiseEventSwitchContainerLoading, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3167354913U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseEventInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewStructOps, TEXT("WwiseEventInfo"), &Z_Registration_Info_UScriptStruct_WwiseEventInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseEventInfo), 3168126025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_1065579932(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
