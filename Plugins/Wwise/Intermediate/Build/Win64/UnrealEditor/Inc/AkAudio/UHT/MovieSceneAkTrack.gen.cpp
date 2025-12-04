// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkTrack() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UMovieSceneAkTrack
void UMovieSceneAkTrack::StaticRegisterNativesUMovieSceneAkTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAkTrack);
UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister()
{
	return UMovieSceneAkTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAkTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of an Ak track in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneAkTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of an Ak track in a movie scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All the sections in this track */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the sections in this track" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAMasterTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static void NewProp_bIsAMasterTrack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAMasterTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
void Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_SetBit(void* Obj)
{
	((UMovieSceneAkTrack*)Obj)->bIsAMasterTrack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack = { "bIsAMasterTrack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkTrack), &Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAMasterTrack_MetaData), NewProp_bIsAMasterTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkTrack_Statics::NewProp_bIsAMasterTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneAkTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkTrack_Statics::ClassParams = {
	&UMovieSceneAkTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::PropPointers),
	0,
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAkTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneAkTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkTrack>()
{
	return UMovieSceneAkTrack::StaticClass();
}
UMovieSceneAkTrack::UMovieSceneAkTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkTrack);
UMovieSceneAkTrack::~UMovieSceneAkTrack() {}
// End Class UMovieSceneAkTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkTrack, UMovieSceneAkTrack::StaticClass, TEXT("UMovieSceneAkTrack"), &Z_Registration_Info_UClass_UMovieSceneAkTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkTrack), 4109807496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_54600720(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
