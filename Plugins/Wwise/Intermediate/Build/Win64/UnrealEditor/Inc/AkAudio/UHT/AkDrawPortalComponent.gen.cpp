// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkDrawPortalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDrawPortalComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UDrawPortalComponent
void UDrawPortalComponent::StaticRegisterNativesUDrawPortalComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPortalComponent);
UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister()
{
	return UDrawPortalComponent::StaticClass();
}
struct Z_Construct_UClass_UDrawPortalComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Utility component for drawing a portal in a scene.\n */" },
#endif
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AkDrawPortalComponent.h" },
		{ "ModuleRelativePath", "Classes/AkDrawPortalComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility component for drawing a portal in a scene." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPortalComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawPortalComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPortalComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams = {
	&UDrawPortalComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPortalComponent()
{
	if (!Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton, Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UDrawPortalComponent>()
{
	return UDrawPortalComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPortalComponent);
UDrawPortalComponent::~UDrawPortalComponent() {}
// End Class UDrawPortalComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawPortalComponent, UDrawPortalComponent::StaticClass, TEXT("UDrawPortalComponent"), &Z_Registration_Info_UClass_UDrawPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPortalComponent), 4001351498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_1559322663(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
