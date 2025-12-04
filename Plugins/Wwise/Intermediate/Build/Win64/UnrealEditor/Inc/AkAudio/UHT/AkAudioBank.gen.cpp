// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkAudioBank
void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioBank);
UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
{
	return UAkAudioBank::StaticClass();
}
struct Z_Construct_UClass_UAkAudioBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioBank.h" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit(void* Obj)
{
	((UAkAudioBank*)Obj)->AutoLoad_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkAudioBank), &Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLoad_MetaData), NewProp_AutoLoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioBank_Statics::ClassParams = {
	&UAkAudioBank::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAudioBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioBank()
{
	if (!Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton, Z_Construct_UClass_UAkAudioBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAudioBank>()
{
	return UAkAudioBank::StaticClass();
}
UAkAudioBank::UAkAudioBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBank);
UAkAudioBank::~UAkAudioBank() {}
// End Class UAkAudioBank

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioBank, UAkAudioBank::StaticClass, TEXT("UAkAudioBank"), &Z_Registration_Info_UClass_UAkAudioBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioBank), 2717469498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_1307895790(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
