// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_iOS/AkIOSPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkIOSPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkIOSPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkIOSPlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkIOSPlatformInfo
void UAkIOSPlatformInfo::StaticRegisterNativesUAkIOSPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkIOSPlatformInfo);
UClass* Z_Construct_UClass_UAkIOSPlatformInfo_NoRegister()
{
	return UAkIOSPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkIOSPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_iOS/AkIOSPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkIOSPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkIOSPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkIOSPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkIOSPlatformInfo_Statics::ClassParams = {
	&UAkIOSPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkIOSPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkIOSPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkIOSPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkIOSPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkIOSPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkIOSPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkIOSPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkIOSPlatformInfo>()
{
	return UAkIOSPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkIOSPlatformInfo);
UAkIOSPlatformInfo::~UAkIOSPlatformInfo() {}
// End Class UAkIOSPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkIOSPlatformInfo, UAkIOSPlatformInfo::StaticClass, TEXT("UAkIOSPlatformInfo"), &Z_Registration_Info_UClass_UAkIOSPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkIOSPlatformInfo), 2449639195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSPlatformInfo_h_3541083248(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
