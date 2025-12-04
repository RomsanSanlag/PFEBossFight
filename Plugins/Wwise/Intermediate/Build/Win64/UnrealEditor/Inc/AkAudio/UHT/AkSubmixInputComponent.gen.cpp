// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSubmixInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UDEPRECATED_UAkSubmixInputComponent
void UDEPRECATED_UAkSubmixInputComponent::StaticRegisterNativesUDEPRECATED_UAkSubmixInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UAkSubmixInputComponent);
UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_NoRegister()
{
	return UDEPRECATED_UAkSubmixInputComponent::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "DisplayName", "AkSubmixInput ( DEPRECATED )" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "(DEPRECATED) See AudioLink: https://www.audiokinetic.com/en/library/edge/?source=UE4&id=using_audio_link.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UAkSubmixInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixToRecord_MetaData), NewProp_SubmixToRecord_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::ClassParams = {
	&UDEPRECATED_UAkSubmixInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::PropPointers),
	0,
	0x02B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UDEPRECATED_UAkSubmixInputComponent>()
{
	return UDEPRECATED_UAkSubmixInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UAkSubmixInputComponent);
UDEPRECATED_UAkSubmixInputComponent::~UDEPRECATED_UAkSubmixInputComponent() {}
// End Class UDEPRECATED_UAkSubmixInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent, UDEPRECATED_UAkSubmixInputComponent::StaticClass, TEXT("UDEPRECATED_UAkSubmixInputComponent"), &Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UAkSubmixInputComponent), 3423154940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_2210402822(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
