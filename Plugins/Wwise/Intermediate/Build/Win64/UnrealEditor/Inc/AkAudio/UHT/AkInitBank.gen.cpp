// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkInitBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseInitBankCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkInitBank() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank();
AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData();
// End Cross Module References

// Begin Class UAkInitBank
void UAkInitBank::StaticRegisterNativesUAkInitBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkInitBank);
UClass* Z_Construct_UClass_UAkInitBank_NoRegister()
{
	return UAkInitBank::StaticClass();
}
struct Z_Construct_UClass_UAkInitBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitBankCookedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitBankCookedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_InitBankCookedData = { "InitBankCookedData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkInitBank, InitBankCookedData), Z_Construct_UScriptStruct_FWwiseInitBankCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitBankCookedData_MetaData), NewProp_InitBankCookedData_MetaData) }; // 335749205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_InitBankCookedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBank_Statics::ClassParams = {
	&UAkInitBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkInitBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkInitBank()
{
	if (!Z_Registration_Info_UClass_UAkInitBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkInitBank.OuterSingleton, Z_Construct_UClass_UAkInitBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkInitBank.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkInitBank>()
{
	return UAkInitBank::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkInitBank);
UAkInitBank::~UAkInitBank() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkInitBank)
// End Class UAkInitBank

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkInitBank, UAkInitBank::StaticClass, TEXT("UAkInitBank"), &Z_Registration_Info_UClass_UAkInitBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkInitBank), 3487881739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_4292376147(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
