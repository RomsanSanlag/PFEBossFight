// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Factories/ActorFactoryAkAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAkAmbientSound() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UActorFactoryAkAmbientSound
void UActorFactoryAkAmbientSound::StaticRegisterNativesUActorFactoryAkAmbientSound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryAkAmbientSound);
UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister()
{
	return UActorFactoryAkAmbientSound::StaticClass();
}
struct Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UActorFactoryAkAmbientSound\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ActorFactoryAkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Factories/ActorFactoryAkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UActorFactoryAkAmbientSound" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAkAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams = {
	&UActorFactoryAkAmbientSound::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound()
{
	if (!Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton, Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UActorFactoryAkAmbientSound>()
{
	return UActorFactoryAkAmbientSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAkAmbientSound);
UActorFactoryAkAmbientSound::~UActorFactoryAkAmbientSound() {}
// End Class UActorFactoryAkAmbientSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAkAmbientSound, UActorFactoryAkAmbientSound::StaticClass, TEXT("UActorFactoryAkAmbientSound"), &Z_Registration_Info_UClass_UActorFactoryAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAkAmbientSound), 3432054304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_1659977263(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
