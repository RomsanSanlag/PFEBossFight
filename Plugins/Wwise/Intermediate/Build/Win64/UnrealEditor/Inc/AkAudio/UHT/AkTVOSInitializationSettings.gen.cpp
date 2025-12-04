// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h"
#include "AkAudio/Classes/InitializationSettings/AkAudioSession.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkTVOSInitializationSettings() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSInitializationSettings();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSInitializationSettings_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin ScriptStruct FAkTVOSAdvancedInitializationSettings
static_assert(std::is_polymorphic<FAkTVOSAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkTVOSAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings;
class UScriptStruct* FAkTVOSAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTVOSAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkTVOSAdvancedInitializationSettings>()
{
	return FAkTVOSAdvancedInitializationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uNumSpatialAudioPointSources_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Apple Spatial Audio point sources to allocate for 3D audio use (each point source is a system audio object)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSystemOutput_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print detailed system output information to the system log." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_uNumSpatialAudioPointSources;
	static void NewProp_bVerboseSystemOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSystemOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTVOSAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_uNumSpatialAudioPointSources = { "uNumSpatialAudioPointSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTVOSAdvancedInitializationSettings, uNumSpatialAudioPointSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uNumSpatialAudioPointSources_MetaData), NewProp_uNumSpatialAudioPointSources_MetaData) };
void Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_bVerboseSystemOutput_SetBit(void* Obj)
{
	((FAkTVOSAdvancedInitializationSettings*)Obj)->bVerboseSystemOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_bVerboseSystemOutput = { "bVerboseSystemOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkTVOSAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_bVerboseSystemOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSystemOutput_MetaData), NewProp_bVerboseSystemOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_uNumSpatialAudioPointSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewProp_bVerboseSystemOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkTVOSAdvancedInitializationSettings",
	Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::PropPointers),
	sizeof(FAkTVOSAdvancedInitializationSettings),
	alignof(FAkTVOSAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings.InnerSingleton;
}
// End ScriptStruct FAkTVOSAdvancedInitializationSettings

// Begin Class UAkTVOSInitializationSettings
void UAkTVOSInitializationSettings::StaticRegisterNativesUAkTVOSInitializationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkTVOSInitializationSettings);
UClass* Z_Construct_UClass_UAkTVOSInitializationSettings_NoRegister()
{
	return UAkTVOSInitializationSettings::StaticClass();
}
struct Z_Construct_UClass_UAkTVOSInitializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSession_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSession;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTVOSInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // 2733679787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_AudioSession = { "AudioSession", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, AudioSession), Z_Construct_UScriptStruct_FAkAudioSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSession_MetaData), NewProp_AudioSession_MetaData) }; // 721903197
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 1988522286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 2193639907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_AudioSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::ClassParams = {
	&UAkTVOSInitializationSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkTVOSInitializationSettings()
{
	if (!Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkTVOSInitializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkTVOSInitializationSettings>()
{
	return UAkTVOSInitializationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkTVOSInitializationSettings);
UAkTVOSInitializationSettings::~UAkTVOSInitializationSettings() {}
// End Class UAkTVOSInitializationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkTVOSAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkTVOSAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkTVOSAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkTVOSAdvancedInitializationSettings), 2193639907U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkTVOSInitializationSettings, UAkTVOSInitializationSettings::StaticClass, TEXT("UAkTVOSInitializationSettings"), &Z_Registration_Info_UClass_UAkTVOSInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTVOSInitializationSettings), 1696890379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_2887007801(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
