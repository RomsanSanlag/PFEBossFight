// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkStateValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkStateValue() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue();
AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkStateValue
void UAkStateValue::StaticRegisterNativesUAkStateValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkStateValue);
UClass* Z_Construct_UClass_UAkStateValue_NoRegister()
{
	return UAkStateValue::StaticClass();
}
struct Z_Construct_UClass_UAkStateValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkStateValue.h" },
		{ "ModuleRelativePath", "Classes/AkStateValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkStateValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkStateValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkGroupValue,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkStateValue_Statics::ClassParams = {
	&UAkStateValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkStateValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkStateValue()
{
	if (!Z_Registration_Info_UClass_UAkStateValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkStateValue.OuterSingleton, Z_Construct_UClass_UAkStateValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkStateValue.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkStateValue>()
{
	return UAkStateValue::StaticClass();
}
UAkStateValue::UAkStateValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkStateValue);
UAkStateValue::~UAkStateValue() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkStateValue)
// End Class UAkStateValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkStateValue, UAkStateValue::StaticClass, TEXT("UAkStateValue"), &Z_Registration_Info_UClass_UAkStateValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkStateValue), 3783001392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_632682913(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkStateValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
