// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkReverbZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbZone() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbZone();
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbZone_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class AAkReverbZone
void AAkReverbZone::StaticRegisterNativesAAkReverbZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkReverbZone);
UClass* Z_Construct_UClass_AAkReverbZone_NoRegister()
{
	return AAkReverbZone::StaticClass();
}
struct Z_Construct_UClass_AAkReverbZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkSpatialAudioVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbZone.h" },
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkSpatialAudioVolume" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpatialAudioVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\n\x09* AAkReverbZone.ParentSpatialAudioVolume is now called AkRoomComponent.ParentRoomActor\n\x09* The type has also been changed to Actor to allow any actor with Room components to be a parent Room.\n\x09* @warning Deprecated as of Wwise 2023.1.1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\nAAkReverbZone.ParentSpatialAudioVolume is now called AkRoomComponent.ParentRoomActor\nThe type has also been changed to Actor to allow any actor with Room components to be a parent Room.\n@warning Deprecated as of Wwise 2023.1.1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRegionWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\n\x09* AAkReverbZone.TransitionRegionWidth is now AkRoomComponent.TransitionRegionWidth\n\x09* @warning Deprecated as of Wwise 2023.1.1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\nAAkReverbZone.TransitionRegionWidth is now AkRoomComponent.TransitionRegionWidth\n@warning Deprecated as of Wwise 2023.1.1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSpatialAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRegionWidth;
	static void NewProp_bRequiresMigration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMigration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbZone_Statics::NewProp_ParentSpatialAudioVolume = { "ParentSpatialAudioVolume", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbZone, ParentSpatialAudioVolume), Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSpatialAudioVolume_MetaData), NewProp_ParentSpatialAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbZone_Statics::NewProp_TransitionRegionWidth = { "TransitionRegionWidth", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbZone, TransitionRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRegionWidth_MetaData), NewProp_TransitionRegionWidth_MetaData) };
void Z_Construct_UClass_AAkReverbZone_Statics::NewProp_bRequiresMigration_SetBit(void* Obj)
{
	((AAkReverbZone*)Obj)->bRequiresMigration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkReverbZone_Statics::NewProp_bRequiresMigration = { "bRequiresMigration", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkReverbZone), &Z_Construct_UClass_AAkReverbZone_Statics::NewProp_bRequiresMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMigration_MetaData), NewProp_bRequiresMigration_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkReverbZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbZone_Statics::NewProp_ParentSpatialAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbZone_Statics::NewProp_TransitionRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbZone_Statics::NewProp_bRequiresMigration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbZone_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_AAkReverbZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAkSpatialAudioVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkReverbZone_Statics::ClassParams = {
	&AAkReverbZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AAkReverbZone_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbZone_Statics::PropPointers), 0),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbZone_Statics::Class_MetaDataParams), Z_Construct_UClass_AAkReverbZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAkReverbZone()
{
	if (!Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton, Z_Construct_UClass_AAkReverbZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<AAkReverbZone>()
{
	return AAkReverbZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbZone);
AAkReverbZone::~AAkReverbZone() {}
// End Class AAkReverbZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkReverbZone, AAkReverbZone::StaticClass, TEXT("AAkReverbZone"), &Z_Registration_Info_UClass_AAkReverbZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkReverbZone), 2959499258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h_3214986714(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
