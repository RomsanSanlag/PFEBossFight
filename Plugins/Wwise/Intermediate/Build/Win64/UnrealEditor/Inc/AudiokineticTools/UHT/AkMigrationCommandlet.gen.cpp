// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/AkMigrationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMigrationCommandlet() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UAkMigrationCommandlet
void UAkMigrationCommandlet::StaticRegisterNativesUAkMigrationCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMigrationCommandlet);
UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister()
{
	return UAkMigrationCommandlet::StaticClass();
}
struct Z_Construct_UClass_UAkMigrationCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManagement/AkMigrationCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/AkMigrationCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMigrationCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkMigrationCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMigrationCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams = {
	&UAkMigrationCommandlet::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkMigrationCommandlet()
{
	if (!Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton, Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkMigrationCommandlet>()
{
	return UAkMigrationCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMigrationCommandlet);
UAkMigrationCommandlet::~UAkMigrationCommandlet() {}
// End Class UAkMigrationCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkMigrationCommandlet, UAkMigrationCommandlet::StaticClass, TEXT("UAkMigrationCommandlet"), &Z_Registration_Info_UClass_UAkMigrationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMigrationCommandlet), 2242261342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_2761780822(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
