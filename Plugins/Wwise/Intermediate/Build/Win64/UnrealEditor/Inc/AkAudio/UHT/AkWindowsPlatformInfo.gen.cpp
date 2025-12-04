// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWindowsPlatformInfo() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkWin32PlatformInfo
void UAkWin32PlatformInfo::StaticRegisterNativesUAkWin32PlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWin32PlatformInfo);
UClass* Z_Construct_UClass_UAkWin32PlatformInfo_NoRegister()
{
	return UAkWin32PlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkWin32PlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin32PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWin32PlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams = {
	&UAkWin32PlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWin32PlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWin32PlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWin32PlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWin32PlatformInfo>()
{
	return UAkWin32PlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWin32PlatformInfo);
UAkWin32PlatformInfo::~UAkWin32PlatformInfo() {}
// End Class UAkWin32PlatformInfo

// Begin Class UAkWin64PlatformInfo
void UAkWin64PlatformInfo::StaticRegisterNativesUAkWin64PlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWin64PlatformInfo);
UClass* Z_Construct_UClass_UAkWin64PlatformInfo_NoRegister()
{
	return UAkWin64PlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkWin64PlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin64PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWin64PlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin64PlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWin64PlatformInfo_Statics::ClassParams = {
	&UAkWin64PlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWin64PlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWin64PlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWin64PlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWin64PlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWin64PlatformInfo>()
{
	return UAkWin64PlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWin64PlatformInfo);
UAkWin64PlatformInfo::~UAkWin64PlatformInfo() {}
// End Class UAkWin64PlatformInfo

// Begin Class UAkWindowsPlatformInfo
void UAkWindowsPlatformInfo::StaticRegisterNativesUAkWindowsPlatformInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWindowsPlatformInfo);
UClass* Z_Construct_UClass_UAkWindowsPlatformInfo_NoRegister()
{
	return UAkWindowsPlatformInfo::StaticClass();
}
struct Z_Construct_UClass_UAkWindowsPlatformInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWindowsPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkWin64PlatformInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams = {
	&UAkWindowsPlatformInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWindowsPlatformInfo()
{
	if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton, Z_Construct_UClass_UAkWindowsPlatformInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWindowsPlatformInfo>()
{
	return UAkWindowsPlatformInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWindowsPlatformInfo);
UAkWindowsPlatformInfo::~UAkWindowsPlatformInfo() {}
// End Class UAkWindowsPlatformInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWin32PlatformInfo, UAkWin32PlatformInfo::StaticClass, TEXT("UAkWin32PlatformInfo"), &Z_Registration_Info_UClass_UAkWin32PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin32PlatformInfo), 2707655832U) },
		{ Z_Construct_UClass_UAkWin64PlatformInfo, UAkWin64PlatformInfo::StaticClass, TEXT("UAkWin64PlatformInfo"), &Z_Registration_Info_UClass_UAkWin64PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin64PlatformInfo), 2399508173U) },
		{ Z_Construct_UClass_UAkWindowsPlatformInfo, UAkWindowsPlatformInfo::StaticClass, TEXT("UAkWindowsPlatformInfo"), &Z_Registration_Info_UClass_UAkWindowsPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWindowsPlatformInfo), 3275020998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h_2597193594(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
