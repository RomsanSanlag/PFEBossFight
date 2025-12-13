// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkAudioSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}

// Begin Cross Module References
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum EAkAudioSessionCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategory;
static UEnum* EAkAudioSessionCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategory"));
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>()
{
	return EAkAudioSessionCategory_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambient.Name", "EAkAudioSessionCategory::Ambient" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "PlayAndRecord.Name", "EAkAudioSessionCategory::PlayAndRecord" },
		{ "SoloAmbient.Name", "EAkAudioSessionCategory::SoloAmbient" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionCategory::Ambient", (int64)EAkAudioSessionCategory::Ambient },
		{ "EAkAudioSessionCategory::SoloAmbient", (int64)EAkAudioSessionCategory::SoloAmbient },
		{ "EAkAudioSessionCategory::PlayAndRecord", (int64)EAkAudioSessionCategory::PlayAndRecord },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionCategory",
	"EAkAudioSessionCategory",
	Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton;
}
// End Enum EAkAudioSessionCategory

// Begin Enum EAkAudioSessionCategoryOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions;
static UEnum* EAkAudioSessionCategoryOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategoryOptions"));
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
{
	return EAkAudioSessionCategoryOptions_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
		{ "AllowBluetoothA2DP.Name", "EAkAudioSessionCategoryOptions::AllowBluetoothA2DP" },
		{ "Bitmask", "" },
		{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
		{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
		{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
		{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
		{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
		{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
		{ "EAkAudioSessionCategoryOptions::AllowBluetoothA2DP", (int64)EAkAudioSessionCategoryOptions::AllowBluetoothA2DP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionCategoryOptions",
	"EAkAudioSessionCategoryOptions",
	Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton;
}
// End Enum EAkAudioSessionCategoryOptions

// Begin Enum EAkAudioSessionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionMode;
static UEnum* EAkAudioSessionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionMode"));
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>()
{
	return EAkAudioSessionMode_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "EAkAudioSessionMode::Default" },
		{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
		{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
		{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
		{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
		{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
		{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
		{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
		{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
		{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
		{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
		{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionMode",
	"EAkAudioSessionMode",
	Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton;
}
// End Enum EAkAudioSessionMode

// Begin Enum EAkAudioSessionRouteSharingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy;
static UEnum* EAkAudioSessionRouteSharingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionRouteSharingPolicy"));
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionRouteSharingPolicy>()
{
	return EAkAudioSessionRouteSharingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "EAkAudioSessionRouteSharingPolicy::Default" },
		{ "LongFormAudio.Name", "EAkAudioSessionRouteSharingPolicy::LongFormAudio" },
		{ "LongFormVideo.Name", "EAkAudioSessionRouteSharingPolicy::LongFormVideo" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionRouteSharingPolicy::Default", (int64)EAkAudioSessionRouteSharingPolicy::Default },
		{ "EAkAudioSessionRouteSharingPolicy::LongFormAudio", (int64)EAkAudioSessionRouteSharingPolicy::LongFormAudio },
		{ "EAkAudioSessionRouteSharingPolicy::LongFormVideo", (int64)EAkAudioSessionRouteSharingPolicy::LongFormVideo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionRouteSharingPolicy",
	"EAkAudioSessionRouteSharingPolicy",
	Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy()
{
	if (!Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy.InnerSingleton;
}
// End Enum EAkAudioSessionRouteSharingPolicy

// Begin ScriptStruct FAkAudioSession
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAudioSession;
class UScriptStruct* FAkAudioSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioSession"));
	}
	return Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioSession>()
{
	return FAkAudioSession::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkAudioSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session categories, useful for defining app-level audio behaviours such as inter-app audio mixing policies and audio routing behaviours.These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session categories." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAudioSessionCategoryOptions" },
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session category options, used for customizing the audio session category features. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session modes, used for customizing the audio session for typical app types. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionRouteSharingPolicy_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines which audio routes are permitted for the audio session controlled by Wwise. These policies only apply for the \"Playback\" audio session category. These IDs are funtionally equivalent to the corresponding constants defined by the iOS audio session service backend (AVAudioSession). Refer to Xcode documentation for details on the audio session route-sharing policies." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionRouteSharingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionRouteSharingPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionCategory_MetaData), NewProp_AudioSessionCategory_MetaData) }; // 364284449
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionCategoryOptions_MetaData), NewProp_AudioSessionCategoryOptions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionMode_MetaData), NewProp_AudioSessionMode_MetaData) }; // 3421423209
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionRouteSharingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionRouteSharingPolicy = { "AudioSessionRouteSharingPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionRouteSharingPolicy), Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionRouteSharingPolicy_MetaData), NewProp_AudioSessionRouteSharingPolicy_MetaData) }; // 4107309396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionRouteSharingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionRouteSharingPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAudioSession",
	Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers),
	sizeof(FAkAudioSession),
	alignof(FAkAudioSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession()
{
	if (!Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton, Z_Construct_UScriptStruct_FAkAudioSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton;
}
// End ScriptStruct FAkAudioSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAkAudioSessionCategory_StaticEnum, TEXT("EAkAudioSessionCategory"), &Z_Registration_Info_UEnum_EAkAudioSessionCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 364284449U) },
		{ EAkAudioSessionCategoryOptions_StaticEnum, TEXT("EAkAudioSessionCategoryOptions"), &Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9237123U) },
		{ EAkAudioSessionMode_StaticEnum, TEXT("EAkAudioSessionMode"), &Z_Registration_Info_UEnum_EAkAudioSessionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3421423209U) },
		{ EAkAudioSessionRouteSharingPolicy_StaticEnum, TEXT("EAkAudioSessionRouteSharingPolicy"), &Z_Registration_Info_UEnum_EAkAudioSessionRouteSharingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4107309396U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkAudioSession::StaticStruct, Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps, TEXT("AkAudioSession"), &Z_Registration_Info_UScriptStruct_AkAudioSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAudioSession), 721903197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_710632029(TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
