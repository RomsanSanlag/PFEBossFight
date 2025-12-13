// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseReloadLanguage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseReloadLanguage() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage();
// End Cross Module References

// Begin Enum EWwiseReloadLanguage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseReloadLanguage;
static UEnum* EWwiseReloadLanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseReloadLanguage"));
	}
	return Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseReloadLanguage>()
{
	return EWwiseReloadLanguage_StaticEnum();
}
struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Determines the reload strategy to use for language changes.\n */" },
#endif
		{ "Immediate.Comment", "/// Reloads immediately without stopping any processes. The game is responsible for stopping and restarting\n/// sounds that could be affected, or audible breaks might occur. This is useful when some\n/// sounds can continue to play, such as music and ambient sounds, while the dialogues are being\n/// internally reloaded.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events need to be restarted when the operation is done.\n" },
		{ "Immediate.Name", "EWwiseReloadLanguage::Immediate" },
		{ "Immediate.ToolTip", "Reloads immediately without stopping any processes. The game is responsible for stopping and restarting\nsounds that could be affected, or audible breaks might occur. This is useful when some\nsounds can continue to play, such as music and ambient sounds, while the dialogues are being\ninternally reloaded.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events need to be restarted when the operation is done." },
		{ "Manual.Comment", "/// Doesn't reload anything and doesn't call any SoundEngine operations. The game must reload elements as required.\n" },
		{ "Manual.Name", "EWwiseReloadLanguage::Manual" },
		{ "Manual.ToolTip", "Doesn't reload anything and doesn't call any SoundEngine operations. The game must reload elements as required." },
		{ "ModuleRelativePath", "Public/Wwise/WwiseReloadLanguage.h" },
		{ "Safe.Comment", "/// Stops all sounds first, unloads all the localized banks, and reloads the new language. This causes\n/// an audible break while the operation is done.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events need to be restarted when the operation is done.\n" },
		{ "Safe.Name", "EWwiseReloadLanguage::Safe" },
		{ "Safe.ToolTip", "Stops all sounds first, unloads all the localized banks, and reloads the new language. This causes\nan audible break while the operation is done.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events need to be restarted when the operation is done." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Determines the reload strategy to use for language changes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseReloadLanguage::Manual", (int64)EWwiseReloadLanguage::Manual },
		{ "EWwiseReloadLanguage::Immediate", (int64)EWwiseReloadLanguage::Immediate },
		{ "EWwiseReloadLanguage::Safe", (int64)EWwiseReloadLanguage::Safe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseReloadLanguage",
	"EWwiseReloadLanguage",
	Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage()
{
	if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton;
}
// End Enum EWwiseReloadLanguage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseReloadLanguage_StaticEnum, TEXT("EWwiseReloadLanguage"), &Z_Registration_Info_UEnum_EWwiseReloadLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3221805427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h_43576145(TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
