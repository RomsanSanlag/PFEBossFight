// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGroupValue.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseGroupValueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
// End Cross Module References

// Begin Class UAkGroupValue
void UAkGroupValue::StaticRegisterNativesUAkGroupValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGroupValue);
UClass* Z_Construct_UClass_UAkGroupValue_NoRegister()
{
	return UAkGroupValue::StaticClass();
}
struct Z_Construct_UClass_UAkGroupValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkGroupValue.h" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueCookedData_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueInfo_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortID_MetaData[] = {
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Use Group ID from Load Data. Used for migration from older versions." },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData = { "GroupValueCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueCookedData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueCookedData_MetaData), NewProp_GroupValueCookedData_MetaData) }; // 2366756795
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueInfo = { "GroupValueInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueInfo), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueInfo_MetaData), NewProp_GroupValueInfo_MetaData) }; // 720198427
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID = { "GroupShortID", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupShortID_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupShortID_MetaData), NewProp_GroupShortID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGroupValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupValueInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGroupValue_Statics::ClassParams = {
	&UAkGroupValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkGroupValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkGroupValue()
{
	if (!Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton, Z_Construct_UClass_UAkGroupValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkGroupValue>()
{
	return UAkGroupValue::StaticClass();
}
UAkGroupValue::UAkGroupValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGroupValue);
UAkGroupValue::~UAkGroupValue() {}
// End Class UAkGroupValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGroupValue, UAkGroupValue::StaticClass, TEXT("UAkGroupValue"), &Z_Registration_Info_UClass_UAkGroupValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGroupValue), 1250446095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h_140626699(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
