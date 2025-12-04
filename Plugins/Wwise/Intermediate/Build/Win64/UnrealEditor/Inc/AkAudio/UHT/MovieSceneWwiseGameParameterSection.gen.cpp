// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneWwiseGameParameterSection.h"
#include "AkAudio/Classes/MovieSceneFloatChannelSerializationHelper.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterSection() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UMovieSceneWwiseGameParameterSection
void UMovieSceneWwiseGameParameterSection::StaticRegisterNativesUMovieSceneWwiseGameParameterSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWwiseGameParameterSection);
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister()
{
	return UMovieSceneWwiseGameParameterSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section\n*/" },
#endif
		{ "IncludePath", "MovieSceneWwiseGameParameterSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameter_MetaData[] = {
		{ "Category", "WwiseGameParameter" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve data */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabled serialization of GameParameterChannel when 4.24 support was added. \n" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabled serialization of GameParameterChannel when 4.24 support was added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameterChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameParameterChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWwiseGameParameterSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_GameParameter = { "GameParameter", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, GameParameter), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameter_MetaData), NewProp_GameParameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) }; // 777865741
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_FloatChannelSerializationHelper = { "FloatChannelSerializationHelper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatChannelSerializationHelper_MetaData), NewProp_FloatChannelSerializationHelper_MetaData) }; // 3544769784
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_GameParameterChannel = { "GameParameterChannel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, GameParameterChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameterChannel_MetaData), NewProp_GameParameterChannel_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_GameParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_FloatChannelSerializationHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::NewProp_GameParameterChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::ClassParams = {
	&UMovieSceneWwiseGameParameterSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UMovieSceneWwiseGameParameterSection>()
{
	return UMovieSceneWwiseGameParameterSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWwiseGameParameterSection);
UMovieSceneWwiseGameParameterSection::~UMovieSceneWwiseGameParameterSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneWwiseGameParameterSection)
// End Class UMovieSceneWwiseGameParameterSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWwiseGameParameterSection, UMovieSceneWwiseGameParameterSection::StaticClass, TEXT("UMovieSceneWwiseGameParameterSection"), &Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWwiseGameParameterSection), 2992599775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h_983799198(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
