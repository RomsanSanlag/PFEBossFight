// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneWwiseGameParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTrack() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UMovieSceneWwiseGameParameterTrack
void UMovieSceneWwiseGameParameterTrack::StaticRegisterNativesUMovieSceneWwiseGameParameterTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWwiseGameParameterTrack);
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_NoRegister()
{
	return UMovieSceneWwiseGameParameterTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneWwiseGameParameterTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWwiseGameParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWwiseGameParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::ClassParams = {
	&UMovieSceneWwiseGameParameterTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UMovieSceneWwiseGameParameterTrack>()
{
	return UMovieSceneWwiseGameParameterTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWwiseGameParameterTrack);
UMovieSceneWwiseGameParameterTrack::~UMovieSceneWwiseGameParameterTrack() {}
// End Class UMovieSceneWwiseGameParameterTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack, UMovieSceneWwiseGameParameterTrack::StaticClass, TEXT("UMovieSceneWwiseGameParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWwiseGameParameterTrack), 1068744553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h_2155190725(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
