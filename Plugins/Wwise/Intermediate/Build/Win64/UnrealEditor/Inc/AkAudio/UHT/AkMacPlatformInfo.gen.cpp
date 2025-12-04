// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Mac/AkMacPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMacPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkMacPlatformInfo
void UAkMacPlatformInfo::StaticRegisterNativesUAkMacPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMacPlatformInfo);
UClass* Z_Construct_UClass_UAkMacPlatformInfo_NoRegister()
{
	return UAkMacPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkMacPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Mac/AkMacPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMacPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkMacPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMacPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMacPlatformInfo_Statics::ClassParams = {
	&UAkMacPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMacPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMacPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkMacPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkMacPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMacPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkMacPlatformInfo>()
{
	return UAkMacPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMacPlatformInfo);
UAkMacPlatformInfo::~UAkMacPlatformInfo() {}
// End Class UAkMacPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkMacPlatformInfo, UAkMacPlatformInfo::StaticClass, TEXT("UAkMacPlatformInfo"), &Z_Registration_Info_UClass_UAkMacPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMacPlatformInfo), 733722823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h_157826833(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
