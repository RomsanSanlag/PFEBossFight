// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseAudioLinkEditor/Private/Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettingsFactory() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_WwiseAudioLinkEditor();
WWISEAUDIOLINKEDITOR_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory();
WWISEAUDIOLINKEDITOR_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_NoRegister();
// End Cross Module References

// Begin Class UWwiseAudioLinkSettingsFactory
void UWwiseAudioLinkSettingsFactory::StaticRegisterNativesUWwiseAudioLinkSettingsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkSettingsFactory);
UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_NoRegister()
{
	return UWwiseAudioLinkSettingsFactory::StaticClass();
}
struct Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseAudioLinkEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::ClassParams = {
	&UWwiseAudioLinkSettingsFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory()
{
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton;
}
template<> WWISEAUDIOLINKEDITOR_API UClass* StaticClass<UWwiseAudioLinkSettingsFactory>()
{
	return UWwiseAudioLinkSettingsFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkSettingsFactory);
UWwiseAudioLinkSettingsFactory::~UWwiseAudioLinkSettingsFactory() {}
// End Class UWwiseAudioLinkSettingsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettingsFactory, UWwiseAudioLinkSettingsFactory::StaticClass, TEXT("UWwiseAudioLinkSettingsFactory"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettingsFactory), 3148705230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_410476165(TEXT("/Script/WwiseAudioLinkEditor"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
