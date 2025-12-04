// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkReverbVolume.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume();
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class AAkReverbVolume
void AAkReverbVolume::StaticRegisterNativesAAkReverbVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkReverbVolume);
UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister()
{
	return AAkReverbVolume::StaticClass();
}
struct Z_Construct_UClass_AAkReverbVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkReverbVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbVolume.h" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this volume is currently enabled and able to affect sounds */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones \n\x09 * with the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal \n\x09 * Editor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same \n\x09 * priority, the chosen AkReverbVolume is unpredictable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal\nEditor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[] = {
		{ "Category", "ReverbVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AAkReverbVolume*)Obj)->bEnabled_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkReverbVolume), &Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBus_DEPRECATED), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBus_MetaData), NewProp_AuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBusName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusName_MetaData), NewProp_AuxBusName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, SendLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevel_MetaData), NewProp_SendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, FadeRate_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeRate_MetaData), NewProp_FadeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, Priority_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateReverbComponent_MetaData), NewProp_LateReverbComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAkReverbVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams = {
	&AAkReverbVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAkReverbVolume()
{
	if (!Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton, Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<AAkReverbVolume>()
{
	return AAkReverbVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbVolume);
AAkReverbVolume::~AAkReverbVolume() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AAkReverbVolume)
// End Class AAkReverbVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkReverbVolume, AAkReverbVolume::StaticClass, TEXT("AAkReverbVolume"), &Z_Registration_Info_UClass_AAkReverbVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkReverbVolume), 2810098551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_575661091(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
