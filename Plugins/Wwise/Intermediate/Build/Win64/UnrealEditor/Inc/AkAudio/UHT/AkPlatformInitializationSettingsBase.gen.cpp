// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkPlatformInitializationSettingsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPlatformInitializationSettingsBase() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkPlatformInitializationSettingsBase
void UAkPlatformInitializationSettingsBase::StaticRegisterNativesUAkPlatformInitializationSettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPlatformInitializationSettingsBase);
UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase_NoRegister()
{
	return UAkPlatformInitializationSettingsBase::StaticClass();
}
struct Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InitializationSettings/AkPlatformInitializationSettingsBase.h" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkPlatformInitializationSettingsBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPlatformInitializationSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::ClassParams = {
	&UAkPlatformInitializationSettingsBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase()
{
	if (!Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton, Z_Construct_UClass_UAkPlatformInitializationSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkPlatformInitializationSettingsBase>()
{
	return UAkPlatformInitializationSettingsBase::StaticClass();
}
UAkPlatformInitializationSettingsBase::UAkPlatformInitializationSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPlatformInitializationSettingsBase);
UAkPlatformInitializationSettingsBase::~UAkPlatformInitializationSettingsBase() {}
// End Class UAkPlatformInitializationSettingsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkPlatformInitializationSettingsBase, UAkPlatformInitializationSettingsBase::StaticClass, TEXT("UAkPlatformInitializationSettingsBase"), &Z_Registration_Info_UClass_UAkPlatformInitializationSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPlatformInitializationSettingsBase), 1364189452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h_194744421(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitializationSettingsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
