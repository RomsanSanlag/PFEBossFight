// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAuxBus.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAuxBus() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

// Begin Class UAkAuxBus
void UAkAuxBus::StaticRegisterNativesUAkAuxBus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAuxBus);
UClass* Z_Construct_UClass_UAkAuxBus_NoRegister()
{
	return UAkAuxBus::StaticClass();
}
struct Z_Construct_UClass_UAkAuxBus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Advanced Attachment Volume" },
		{ "IncludePath", "AkAuxBus.h" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusInfo_MetaData[] = {
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusCookedData_MetaData[] = {
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusCookedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, MaxAttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttenuationRadius_MetaData), NewProp_MaxAttenuationRadius_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusInfo = { "AuxBusInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, AuxBusInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusInfo_MetaData), NewProp_AuxBusInfo_MetaData) }; // 1141283299
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData = { "AuxBusCookedData", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, AuxBusCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusCookedData_MetaData), NewProp_AuxBusCookedData_MetaData) }; // 2689543162
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, RequiredBank_DEPRECATED), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredBank_MetaData), NewProp_RequiredBank_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAuxBus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_MaxAttenuationRadius,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_AuxBusCookedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAuxBus_Statics::NewProp_RequiredBank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAuxBus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAuxBus_Statics::ClassParams = {
	&UAkAuxBus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAuxBus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBus_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAuxBus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAuxBus()
{
	if (!Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton, Z_Construct_UClass_UAkAuxBus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAuxBus>()
{
	return UAkAuxBus::StaticClass();
}
UAkAuxBus::UAkAuxBus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBus);
UAkAuxBus::~UAkAuxBus() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAuxBus)
// End Class UAkAuxBus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAuxBus, UAkAuxBus::StaticClass, TEXT("UAkAuxBus"), &Z_Registration_Info_UClass_UAkAuxBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBus), 6580587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_399116936(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
