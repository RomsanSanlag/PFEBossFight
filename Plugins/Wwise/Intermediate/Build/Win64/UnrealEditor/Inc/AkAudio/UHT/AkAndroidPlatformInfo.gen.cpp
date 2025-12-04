// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAndroidPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkAndroidPlatformInfo
void UAkAndroidPlatformInfo::StaticRegisterNativesUAkAndroidPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAndroidPlatformInfo);
UClass* Z_Construct_UClass_UAkAndroidPlatformInfo_NoRegister()
{
	return UAkAndroidPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkAndroidPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::ClassParams = {
	&UAkAndroidPlatformInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAndroidPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkAndroidPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAndroidPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAndroidPlatformInfo>()
{
	return UAkAndroidPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAndroidPlatformInfo);
UAkAndroidPlatformInfo::~UAkAndroidPlatformInfo() {}
// End Class UAkAndroidPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAndroidPlatformInfo, UAkAndroidPlatformInfo::StaticClass, TEXT("UAkAndroidPlatformInfo"), &Z_Registration_Info_UClass_UAkAndroidPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAndroidPlatformInfo), 2237732692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h_369083059(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
