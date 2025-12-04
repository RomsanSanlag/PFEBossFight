// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkRtpc.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGameParameterCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRtpc() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGameParameterCookedData();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

// Begin Class UAkRtpc
void UAkRtpc::StaticRegisterNativesUAkRtpc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkRtpc);
UClass* Z_Construct_UClass_UAkRtpc_NoRegister()
{
	return UAkRtpc::StaticClass();
}
struct Z_Construct_UClass_UAkRtpc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkRtpc.h" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameterCookedData_MetaData[] = {
		{ "Category", "AkRtpc" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RtpcInfo_MetaData[] = {
		{ "Category", "AkRtpc" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameParameterCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RtpcInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkRtpc_Statics::NewProp_GameParameterCookedData = { "GameParameterCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRtpc, GameParameterCookedData), Z_Construct_UScriptStruct_FWwiseGameParameterCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameterCookedData_MetaData), NewProp_GameParameterCookedData_MetaData) }; // 3226983947
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkRtpc_Statics::NewProp_RtpcInfo = { "RtpcInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRtpc, RtpcInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RtpcInfo_MetaData), NewProp_RtpcInfo_MetaData) }; // 1141283299
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkRtpc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRtpc_Statics::NewProp_GameParameterCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRtpc_Statics::NewProp_RtpcInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpc_Statics::ClassParams = {
	&UAkRtpc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkRtpc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkRtpc()
{
	if (!Z_Registration_Info_UClass_UAkRtpc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpc.OuterSingleton, Z_Construct_UClass_UAkRtpc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkRtpc.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkRtpc>()
{
	return UAkRtpc::StaticClass();
}
UAkRtpc::UAkRtpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRtpc);
UAkRtpc::~UAkRtpc() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkRtpc)
// End Class UAkRtpc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkRtpc, UAkRtpc::StaticClass, TEXT("UAkRtpc"), &Z_Registration_Info_UClass_UAkRtpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpc), 1165776842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_111791848(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
