// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/GenerateSoundBanksCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSoundBanksCommandlet() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UDEPRECATED_GenerateSoundBanksCommandlet
void UDEPRECATED_GenerateSoundBanksCommandlet::StaticRegisterNativesUDEPRECATED_GenerateSoundBanksCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GenerateSoundBanksCommandlet);
UClass* Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_NoRegister()
{
	return UDEPRECATED_GenerateSoundBanksCommandlet::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManagement/GenerateSoundBanksCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/GenerateSoundBanksCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GenerateSoundBanksCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::ClassParams = {
	&UDEPRECATED_GenerateSoundBanksCommandlet::StaticClass,
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
	0x021002A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_GenerateSoundBanksCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GenerateSoundBanksCommandlet.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_GenerateSoundBanksCommandlet.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UDEPRECATED_GenerateSoundBanksCommandlet>()
{
	return UDEPRECATED_GenerateSoundBanksCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GenerateSoundBanksCommandlet);
UDEPRECATED_GenerateSoundBanksCommandlet::~UDEPRECATED_GenerateSoundBanksCommandlet() {}
// End Class UDEPRECATED_GenerateSoundBanksCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GenerateSoundBanksCommandlet, UDEPRECATED_GenerateSoundBanksCommandlet::StaticClass, TEXT("UDEPRECATED_GenerateSoundBanksCommandlet"), &Z_Registration_Info_UClass_UDEPRECATED_GenerateSoundBanksCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GenerateSoundBanksCommandlet), 1672913943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_668087724(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
