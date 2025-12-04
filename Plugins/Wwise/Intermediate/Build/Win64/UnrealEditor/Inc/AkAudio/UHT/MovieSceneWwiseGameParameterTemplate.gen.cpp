// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Private/MovieSceneWwiseGameParameterTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTemplate() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate
static_assert(std::is_polymorphic<FMovieSceneWwiseGameParameterTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneWwiseGameParameterTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate;
class UScriptStruct* FMovieSceneWwiseGameParameterTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneWwiseGameParameterTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneWwiseGameParameterTemplate>()
{
	return FMovieSceneWwiseGameParameterTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWwiseGameParameterTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneWwiseGameParameterTemplate, Section), Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneWwiseGameParameterTemplate",
	Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::PropPointers),
	sizeof(FMovieSceneWwiseGameParameterTemplate),
	alignof(FMovieSceneWwiseGameParameterTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneWwiseGameParameterTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneWwiseGameParameterTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewStructOps, TEXT("MovieSceneWwiseGameParameterTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneWwiseGameParameterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWwiseGameParameterTemplate), 2721283386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h_2571004686(TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
