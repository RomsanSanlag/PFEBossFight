// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSpotReflector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector();
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class AAkSpotReflector
void AAkSpotReflector::StaticRegisterNativesAAkSpotReflector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkSpotReflector);
UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister()
{
	return AAkSpotReflector::StaticClass();
}
struct Z_Construct_UClass_AAkSpotReflector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkSpotReflector.h" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\n\x09*\x09If left to None, no filtering will be applied to the sound.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\nIf left to None, no filtering will be applied to the sound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScalingFactor_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09This number scales the distance between the listener and the actual image source, preserving orientation.\n\x09*\x09Set to 1 to position the image source at the position of the spot reflector\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This number scales the distance between the listener and the actual image source, preserving orientation.\nSet to 1 to position the image source at the position of the spot reflector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SameRoomOnly_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room.*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room.*/" },
#endif
		{ "EditCondition", "SameRoomOnly" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used.*/" },
#endif
		{ "EditCondition", "EnableRoomOverride" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceScalingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static void NewProp_SameRoomOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SameRoomOnly;
	static void NewProp_EnableRoomOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRoomOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpotReflector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData), NewProp_EarlyReflectionAuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData), NewProp_EarlyReflectionAuxBusName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor = { "DistanceScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, DistanceScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScalingFactor_MetaData), NewProp_DistanceScalingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_SetBit(void* Obj)
{
	((AAkSpotReflector*)Obj)->SameRoomOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly = { "SameRoomOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpotReflector), &Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SameRoomOnly_MetaData), NewProp_SameRoomOnly_MetaData) };
void Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_SetBit(void* Obj)
{
	((AAkSpotReflector*)Obj)->EnableRoomOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride = { "EnableRoomOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpotReflector), &Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRoomOverride_MetaData), NewProp_EnableRoomOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride = { "RoomOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, RoomOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomOverride_MetaData), NewProp_RoomOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAkSpotReflector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams = {
	&AAkSpotReflector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams), Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAkSpotReflector()
{
	if (!Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton, Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<AAkSpotReflector>()
{
	return AAkSpotReflector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpotReflector);
AAkSpotReflector::~AAkSpotReflector() {}
// End Class AAkSpotReflector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpotReflector, AAkSpotReflector::StaticClass, TEXT("AAkSpotReflector"), &Z_Registration_Info_UClass_AAkSpotReflector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpotReflector), 2018265160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_236231362(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
