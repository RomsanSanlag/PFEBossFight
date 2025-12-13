// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/WwisePackagingFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePackagingFactories() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwisePackagingFactory();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwisePackagingFactory_NoRegister();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_NoRegister();
// End Cross Module References

// Begin Class UWwisePackagingFactory
void UWwisePackagingFactory::StaticRegisterNativesUWwisePackagingFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwisePackagingFactory);
UClass* Z_Construct_UClass_UWwisePackagingFactory_NoRegister()
{
	return UWwisePackagingFactory::StaticClass();
}
struct Z_Construct_UClass_UWwisePackagingFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwisePackagingFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwisePackagingFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwisePackagingFactory_Statics::ClassParams = {
	&UWwisePackagingFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwisePackagingFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwisePackagingFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwisePackagingFactory()
{
	if (!Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton, Z_Construct_UClass_UWwisePackagingFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwisePackagingFactory.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwisePackagingFactory>()
{
	return UWwisePackagingFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwisePackagingFactory);
UWwisePackagingFactory::~UWwisePackagingFactory() {}
// End Class UWwisePackagingFactory

// Begin Class UWwiseSharedAssetLibraryFilterFactory
void UWwiseSharedAssetLibraryFilterFactory::StaticRegisterNativesUWwiseSharedAssetLibraryFilterFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseSharedAssetLibraryFilterFactory);
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_NoRegister()
{
	return UWwiseSharedAssetLibraryFilterFactory::StaticClass();
}
struct Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseSharedAssetLibraryFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::ClassParams = {
	&UWwiseSharedAssetLibraryFilterFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory()
{
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton, Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseSharedAssetLibraryFilterFactory>()
{
	return UWwiseSharedAssetLibraryFilterFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseSharedAssetLibraryFilterFactory);
UWwiseSharedAssetLibraryFilterFactory::~UWwiseSharedAssetLibraryFilterFactory() {}
// End Class UWwiseSharedAssetLibraryFilterFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwisePackagingFactory, UWwisePackagingFactory::StaticClass, TEXT("UWwisePackagingFactory"), &Z_Registration_Info_UClass_UWwisePackagingFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwisePackagingFactory), 1093379888U) },
		{ Z_Construct_UClass_UWwiseSharedAssetLibraryFilterFactory, UWwiseSharedAssetLibraryFilterFactory::StaticClass, TEXT("UWwiseSharedAssetLibraryFilterFactory"), &Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseSharedAssetLibraryFilterFactory), 4291338070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h_281369236(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwisePackagingFactories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
