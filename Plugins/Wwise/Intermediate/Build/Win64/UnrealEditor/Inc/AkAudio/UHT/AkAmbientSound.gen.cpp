// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class AAkAmbientSound Function StartAmbientSound
struct Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Start an Ak ambient sound.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Start an Ak ambient sound." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StartAmbientSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAkAmbientSound::execStartAmbientSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAmbientSound();
	P_NATIVE_END;
}
// End Class AAkAmbientSound Function StartAmbientSound

// Begin Class AAkAmbientSound Function StopAmbientSound
struct Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Stop an Ak ambient sound.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Stop an Ak ambient sound." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StopAmbientSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAkAmbientSound::execStopAmbientSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAmbientSound();
	P_NATIVE_END;
}
// End Class AAkAmbientSound Function StopAmbientSound

// Begin Class AAkAmbientSound
void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
{
	UClass* Class = AAkAmbientSound::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAmbientSound", &AAkAmbientSound::execStartAmbientSound },
		{ "StopAmbientSound", &AAkAmbientSound::execStopAmbientSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkAmbientSound);
UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
{
	return AAkAmbientSound::StaticClass();
}
struct Z_Construct_UClass_AAkAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkAmbientSound" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkAmbientSound\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Audio" },
		{ "IncludePath", "AkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkAmbientSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AkComponent to handle playback */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AkComponent to handle playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop playback if the owner is destroyed */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop playback if the owner is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
	static void NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed;
	static void NewProp_AutoPost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 1639146919
		{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 1463820576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent_DEPRECATED), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkAudioEvent_MetaData), NewProp_AkAudioEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkComponent_MetaData), NewProp_AkComponent_MetaData) };
void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj)
{
	((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed = { "StopWhenOwnerIsDestroyed", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopWhenOwnerIsDestroyed_MetaData), NewProp_StopWhenOwnerIsDestroyed_MetaData) };
void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit(void* Obj)
{
	((AAkAmbientSound*)Obj)->AutoPost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPost_MetaData), NewProp_AutoPost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAkAmbientSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams = {
	&AAkAmbientSound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAkAmbientSound()
{
	if (!Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton, Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<AAkAmbientSound>()
{
	return AAkAmbientSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
AAkAmbientSound::~AAkAmbientSound() {}
// End Class AAkAmbientSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkAmbientSound, AAkAmbientSound::StaticClass, TEXT("AAkAmbientSound"), &Z_Registration_Info_UClass_AAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkAmbientSound), 3203433025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_398927926(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
