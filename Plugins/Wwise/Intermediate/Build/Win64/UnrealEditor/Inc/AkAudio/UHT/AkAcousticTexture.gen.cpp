// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAcousticTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTexture() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

// Begin Class UAkAcousticTexture
void UAkAcousticTexture::StaticRegisterNativesUAkAcousticTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTexture);
UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister()
{
	return UAkAcousticTexture::StaticClass();
}
struct Z_Construct_UClass_UAkAcousticTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAcousticTexture.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureCookedData_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditColor_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureInfo_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData = { "AcousticTextureCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, AcousticTextureCookedData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTextureCookedData_MetaData), NewProp_AcousticTextureCookedData_MetaData) }; // 4158353374
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor = { "EditColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, EditColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditColor_MetaData), NewProp_EditColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureInfo = { "AcousticTextureInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAcousticTexture, AcousticTextureInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTextureInfo_MetaData), NewProp_AcousticTextureInfo_MetaData) }; // 1141283299
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_AcousticTextureInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams = {
	&UAkAcousticTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAcousticTexture()
{
	if (!Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton, Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAcousticTexture>()
{
	return UAkAcousticTexture::StaticClass();
}
UAkAcousticTexture::UAkAcousticTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTexture);
UAkAcousticTexture::~UAkAcousticTexture() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAcousticTexture)
// End Class UAkAcousticTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTexture, UAkAcousticTexture::StaticClass, TEXT("UAkAcousticTexture"), &Z_Registration_Info_UClass_UAkAcousticTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTexture), 948658645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_861968904(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
