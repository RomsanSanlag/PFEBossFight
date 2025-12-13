// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSettingsPerUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettingsPerUser() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkSettingsPerUser
void UAkSettingsPerUser::StaticRegisterNativesUAkSettingsPerUser()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSettingsPerUser);
UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister()
{
	return UAkSettingsPerUser::StaticClass();
}
struct Z_Construct_UClass_UAkSettingsPerUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettingsPerUser.h" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)\n" },
#endif
		{ "FilePathFilter", "app" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootOutputPathOverride_MetaData[] = {
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Override the Root Output Path in the project settings\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the Root Output Path in the project settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSoundBanksFolderOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiIPAddress_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IP Address used to connect to WAAPI. Changing this requires Editor restart\n" },
#endif
		{ "DisplayName", "WAAPI IP Address" },
		{ "EditCondition", "AutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IP Address used to connect to WAAPI. Changing this requires Editor restart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiPort_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Network Port used to connect to WAAPI. Changing this requires Editor restart\n" },
#endif
		{ "DisplayName", "WAAPI Port" },
		{ "EditCondition", "AutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Network Port used to connect to WAAPI. Changing this requires Editor restart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to connect to WAAPI or not\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to connect to WAAPI or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSyncSelection_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to synchronize the selection between the Wwise Browser and the Wwise Project Explorer\n" },
#endif
		{ "EditCondition", "AutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to synchronize the selection between the Wwise Browser and the Wwise Project Explorer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiCallsTimeout_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time out value for WAAPI calls (in ms). If set to -1, WAAPI calls will never time out\n" },
#endif
		{ "DisplayName", "WAAPI Calls Timeout" },
		{ "EditCondition", "AutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time out value for WAAPI calls (in ms). If set to -1, WAAPI calls will never time out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiTranslatorTimeout_MetaData[] = {
		{ "Category", "Error Message Translator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time out value for the WAAPI error message translator to translate an error message (in ms). If set to 0, disable the translator entirely\n" },
#endif
		{ "DisplayName", "WAAPI Translator Timeout" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time out value for the WAAPI error message translator to translate an error message (in ms). If set to 0, disable the translator entirely" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundDataGenerationSkipLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AskForWwiseAssetReload_MetaData[] = {
		{ "Category", "Asset Reload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Opens a notification that the user must accept before reloading Wwise Asset Data\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens a notification that the user must accept before reloading Wwise Asset Data" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeRoomsAndPortals_MetaData[] = {
		{ "Category", "Viewports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visualize rooms and portals in the viewport. This requires 'realtime' to be enabled in the viewport.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visualize rooms and portals in the viewport. This requires 'realtime' to be enabled in the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowReverbInfo_MetaData[] = {
		{ "Category", "Viewports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When enabled, information about AkReverbComponents will be displayed in viewports, above the component's UPrimitiveComponent parent. This requires 'realtime' to be enabled in the viewport.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, information about AkReverbComponents will be displayed in viewports, above the component's UPrimitiveComponent parent. This requires 'realtime' to be enabled in the viewport." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOutputPathOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSoundBanksFolderOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WaapiIPAddress;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WaapiPort;
	static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
	static void NewProp_AutoSyncSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSyncSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaapiCallsTimeout;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WaapiTranslatorTimeout;
	static void NewProp_SuppressGeneratedSoundBanksPathWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SuppressGeneratedSoundBanksPathWarnings;
	static void NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SoundDataGenerationSkipLanguage;
	static void NewProp_AskForWwiseAssetReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AskForWwiseAssetReload;
#if WITH_EDITORONLY_DATA
	static void NewProp_VisualizeRoomsAndPortals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisualizeRoomsAndPortals;
	static void NewProp_bShowReverbInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowReverbInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettingsPerUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseWindowsInstallationPath_MetaData), NewProp_WwiseWindowsInstallationPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseMacInstallationPath_MetaData), NewProp_WwiseMacInstallationPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_RootOutputPathOverride = { "RootOutputPathOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, RootOutputPathOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootOutputPathOverride_MetaData), NewProp_RootOutputPathOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_GeneratedSoundBanksFolderOverride = { "GeneratedSoundBanksFolderOverride", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, GeneratedSoundBanksFolderOverride_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSoundBanksFolderOverride_MetaData), NewProp_GeneratedSoundBanksFolderOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress = { "WaapiIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiIPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiIPAddress_MetaData), NewProp_WaapiIPAddress_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort = { "WaapiPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiPort_MetaData), NewProp_WaapiPort_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->bAutoConnectToWAAPI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnectToWAAPI_MetaData), NewProp_bAutoConnectToWAAPI_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->AutoSyncSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection = { "AutoSyncSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSyncSelection_MetaData), NewProp_AutoSyncSelection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiCallsTimeout = { "WaapiCallsTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiCallsTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiCallsTimeout_MetaData), NewProp_WaapiCallsTimeout_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiTranslatorTimeout = { "WaapiTranslatorTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiTranslatorTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiTranslatorTimeout_MetaData), NewProp_WaapiTranslatorTimeout_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressGeneratedSoundBanksPathWarnings_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->SuppressGeneratedSoundBanksPathWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressGeneratedSoundBanksPathWarnings = { "SuppressGeneratedSoundBanksPathWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressGeneratedSoundBanksPathWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData), NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->SoundDataGenerationSkipLanguage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage = { "SoundDataGenerationSkipLanguage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundDataGenerationSkipLanguage_MetaData), NewProp_SoundDataGenerationSkipLanguage_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AskForWwiseAssetReload_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->AskForWwiseAssetReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AskForWwiseAssetReload = { "AskForWwiseAssetReload", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AskForWwiseAssetReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AskForWwiseAssetReload_MetaData), NewProp_AskForWwiseAssetReload_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_VisualizeRoomsAndPortals_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->VisualizeRoomsAndPortals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_VisualizeRoomsAndPortals = { "VisualizeRoomsAndPortals", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_VisualizeRoomsAndPortals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeRoomsAndPortals_MetaData), NewProp_VisualizeRoomsAndPortals_MetaData) };
void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bShowReverbInfo_SetBit(void* Obj)
{
	((UAkSettingsPerUser*)Obj)->bShowReverbInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bShowReverbInfo = { "bShowReverbInfo", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bShowReverbInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowReverbInfo_MetaData), NewProp_bShowReverbInfo_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_RootOutputPathOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_GeneratedSoundBanksFolderOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiCallsTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiTranslatorTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressGeneratedSoundBanksPathWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AskForWwiseAssetReload,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_VisualizeRoomsAndPortals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bShowReverbInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkSettingsPerUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams = {
	&UAkSettingsPerUser::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkSettingsPerUser()
{
	if (!Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton, Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkSettingsPerUser>()
{
	return UAkSettingsPerUser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettingsPerUser);
UAkSettingsPerUser::~UAkSettingsPerUser() {}
// End Class UAkSettingsPerUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSettingsPerUser, UAkSettingsPerUser::StaticClass, TEXT("UAkSettingsPerUser"), &Z_Registration_Info_UClass_UAkSettingsPerUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSettingsPerUser), 941987859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_2661896093(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
