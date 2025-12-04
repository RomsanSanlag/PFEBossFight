// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/WwiseBrowser/WwiseBrowserHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseBrowserHelpers() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkDragDropBlocker();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkDragDropBlocker_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UAkDragDropBlocker
void UAkDragDropBlocker::StaticRegisterNativesUAkDragDropBlocker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkDragDropBlocker);
UClass* Z_Construct_UClass_UAkDragDropBlocker_NoRegister()
{
	return UAkDragDropBlocker::StaticClass();
}
struct Z_Construct_UClass_UAkDragDropBlocker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WwiseBrowser/WwiseBrowserHelpers.h" },
		{ "ModuleRelativePath", "Private/WwiseBrowser/WwiseBrowserHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDragDropBlocker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkDragDropBlocker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDragDropBlocker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDragDropBlocker_Statics::ClassParams = {
	&UAkDragDropBlocker::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkDragDropBlocker_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkDragDropBlocker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkDragDropBlocker()
{
	if (!Z_Registration_Info_UClass_UAkDragDropBlocker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDragDropBlocker.OuterSingleton, Z_Construct_UClass_UAkDragDropBlocker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDragDropBlocker.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkDragDropBlocker>()
{
	return UAkDragDropBlocker::StaticClass();
}
UAkDragDropBlocker::UAkDragDropBlocker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDragDropBlocker);
UAkDragDropBlocker::~UAkDragDropBlocker() {}
// End Class UAkDragDropBlocker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_WwiseBrowser_WwiseBrowserHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkDragDropBlocker, UAkDragDropBlocker::StaticClass, TEXT("UAkDragDropBlocker"), &Z_Registration_Info_UClass_UAkDragDropBlocker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDragDropBlocker), 15703648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_WwiseBrowser_WwiseBrowserHelpers_h_2649512791(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_WwiseBrowser_WwiseBrowserHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Private_WwiseBrowser_WwiseBrowserHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
