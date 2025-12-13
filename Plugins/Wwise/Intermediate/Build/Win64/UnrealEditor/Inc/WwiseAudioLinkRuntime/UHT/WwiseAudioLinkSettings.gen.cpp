// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseAudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettings() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
UPackage* Z_Construct_UPackage__Script_WwiseAudioLinkRuntime();
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings();
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// End Cross Module References

// Begin Class UWwiseAudioLinkSettings
void UWwiseAudioLinkSettings::StaticRegisterNativesUWwiseAudioLinkSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkSettings);
UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister()
{
	return UWwiseAudioLinkSettings::StaticClass();
}
struct Z_Construct_UClass_UWwiseAudioLinkSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the receiving code clears the buffer after it is read, so it is not rendered by Unreal. Only applies if running both renderers simultaneously.  */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the receiving code clears the buffer after it is read, so it is not rendered by Unreal. Only applies if running both renderers simultaneously." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ratio of producer to consumer buffer size. A value of 2.0 means it is twice as big as the consumer buffer.  */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ratio of producer to consumer buffer size. A value of 2.0 means it is twice as big as the consumer buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ratio of the initial buffer to fill with silence before consumption. This can prevent starvation at the cost of additional latency. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ratio of the initial buffer to fill with silence before consumption. This can prevent starvation at the cost of additional latency." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEventResolved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartEvent;
	static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEventResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEvent_MetaData), NewProp_StartEvent_MetaData) };
void Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
{
	((UWwiseAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAudioLinkSettings), &Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClearBufferOnReceipt_MetaData), NewProp_bShouldClearBufferOnReceipt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducerToConsumerBufferRatio_MetaData), NewProp_ProducerToConsumerBufferRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSilenceFillRatio_MetaData), NewProp_InitialSilenceFillRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved = { "StartEventResolved", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEventResolved), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEventResolved_MetaData), NewProp_StartEventResolved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseAudioLinkRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams = {
	&UWwiseAudioLinkSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers),
	0,
	0x001010A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAudioLinkSettings()
{
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton;
}
template<> WWISEAUDIOLINKRUNTIME_API UClass* StaticClass<UWwiseAudioLinkSettings>()
{
	return UWwiseAudioLinkSettings::StaticClass();
}
UWwiseAudioLinkSettings::UWwiseAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkSettings);
UWwiseAudioLinkSettings::~UWwiseAudioLinkSettings() {}
// End Class UWwiseAudioLinkSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettings, UWwiseAudioLinkSettings::StaticClass, TEXT("UWwiseAudioLinkSettings"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettings), 3273553946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_1935090835(TEXT("/Script/WwiseAudioLinkRuntime"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
