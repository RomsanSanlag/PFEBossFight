// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseReconcile/Public/Wwise/WwiseReconcileCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseReconcileCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_WwiseReconcile();
WWISERECONCILE_API UClass* Z_Construct_UClass_UWwiseReconcileCommandlet();
WWISERECONCILE_API UClass* Z_Construct_UClass_UWwiseReconcileCommandlet_NoRegister();
// End Cross Module References

// Begin Class UWwiseReconcileCommandlet
void UWwiseReconcileCommandlet::StaticRegisterNativesUWwiseReconcileCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseReconcileCommandlet);
UClass* Z_Construct_UClass_UWwiseReconcileCommandlet_NoRegister()
{
	return UWwiseReconcileCommandlet::StaticClass();
}
struct Z_Construct_UClass_UWwiseReconcileCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/WwiseReconcileCommandlet.h" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseReconcileCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseReconcileCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseReconcile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::ClassParams = {
	&UWwiseReconcileCommandlet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseReconcileCommandlet()
{
	if (!Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton, Z_Construct_UClass_UWwiseReconcileCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseReconcileCommandlet.OuterSingleton;
}
template<> WWISERECONCILE_API UClass* StaticClass<UWwiseReconcileCommandlet>()
{
	return UWwiseReconcileCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseReconcileCommandlet);
UWwiseReconcileCommandlet::~UWwiseReconcileCommandlet() {}
// End Class UWwiseReconcileCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseReconcileCommandlet, UWwiseReconcileCommandlet::StaticClass, TEXT("UWwiseReconcileCommandlet"), &Z_Registration_Info_UClass_UWwiseReconcileCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseReconcileCommandlet), 280034266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h_634049583(TEXT("/Script/WwiseReconcile"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseReconcile_Public_Wwise_WwiseReconcileCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
