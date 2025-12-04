// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLinuxPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkLinuxPlatformInfo
void UAkLinuxPlatformInfo::StaticRegisterNativesUAkLinuxPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLinuxPlatformInfo);
UClass* Z_Construct_UClass_UAkLinuxPlatformInfo_NoRegister()
{
	return UAkLinuxPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkLinuxPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Linux/AkLinuxPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams = {
	&UAkLinuxPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkLinuxPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkLinuxPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkLinuxPlatformInfo>()
{
	return UAkLinuxPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLinuxPlatformInfo);
UAkLinuxPlatformInfo::~UAkLinuxPlatformInfo() {}
// End Class UAkLinuxPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxPlatformInfo, UAkLinuxPlatformInfo::StaticClass, TEXT("UAkLinuxPlatformInfo"), &Z_Registration_Info_UClass_UAkLinuxPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxPlatformInfo), 790386338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h_993095525(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
