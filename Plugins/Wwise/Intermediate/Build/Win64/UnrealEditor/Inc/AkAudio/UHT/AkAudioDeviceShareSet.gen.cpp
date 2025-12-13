// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioDeviceShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioDeviceShareSet() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

// Begin Class UAkAudioDeviceShareSet
void UAkAudioDeviceShareSet::StaticRegisterNativesUAkAudioDeviceShareSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioDeviceShareSet);
UClass* Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister()
{
	return UAkAudioDeviceShareSet::StaticClass();
}
struct Z_Construct_UClass_UAkAudioDeviceShareSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioDeviceShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetCookedData_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetInfo_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioDeviceShareSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData = { "AudioDeviceShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetCookedData), Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSetCookedData_MetaData), NewProp_AudioDeviceShareSetCookedData_MetaData) }; // 2419000252
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo = { "AudioDeviceShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSetInfo_MetaData), NewProp_AudioDeviceShareSetInfo_MetaData) }; // 1141283299
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::ClassParams = {
	&UAkAudioDeviceShareSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioDeviceShareSet()
{
	if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton, Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAudioDeviceShareSet>()
{
	return UAkAudioDeviceShareSet::StaticClass();
}
UAkAudioDeviceShareSet::UAkAudioDeviceShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioDeviceShareSet);
UAkAudioDeviceShareSet::~UAkAudioDeviceShareSet() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioDeviceShareSet)
// End Class UAkAudioDeviceShareSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioDeviceShareSet, UAkAudioDeviceShareSet::StaticClass, TEXT("UAkAudioDeviceShareSet"), &Z_Registration_Info_UClass_UAkAudioDeviceShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioDeviceShareSet), 1296145937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_711048256(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
