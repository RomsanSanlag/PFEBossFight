// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetUtils() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin ScriptStruct FAkSurfaceEdgeVerts
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts;
class UScriptStruct* FAkSurfaceEdgeVerts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeVerts"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeVerts>()
{
	return FAkSurfaceEdgeVerts::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An edge between two vertices */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An edge between two vertices" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfaceEdgeVerts",
	nullptr,
	0,
	sizeof(FAkSurfaceEdgeVerts),
	alignof(FAkSurfaceEdgeVerts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton;
}
// End ScriptStruct FAkSurfaceEdgeVerts

// Begin ScriptStruct FAkSurfaceEdgeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo;
class UScriptStruct* FAkSurfaceEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeInfo>()
{
	return FAkSurfaceEdgeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about an edge */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about an edge" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfaceEdgeInfo",
	nullptr,
	0,
	sizeof(FAkSurfaceEdgeInfo),
	alignof(FAkSurfaceEdgeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton;
}
// End ScriptStruct FAkSurfaceEdgeInfo

// Begin ScriptStruct FAkSurfacePoly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfacePoly;
class UScriptStruct* FAkSurfacePoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfacePoly"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfacePoly>()
{
	return FAkSurfacePoly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The Acoustic Texture associated with the selected surfaces.\n\x09* When set to None, the texture is completely reflective.\n\x09* If the Surface Reflector component is disabled, the geometry is not used for reflections or diffractions.\n\x09* In this case, Acoustic Textures are used exclusively to measure Environment Decay and HFDamping as part of the Reverb Estimation process.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture associated with the selected surfaces.\nWhen set to None, the texture is completely reflective.\nIf the Surface Reflector component is disabled, the geometry is not used for reflections or diffractions.\nIn this case, Acoustic Textures are used exclusively to measure Environment Decay and HFDamping as part of the Reverb Estimation process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[] = {
		{ "Category", "Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Indicates how much sound is transmitted through the selected surfaces. Valid range is 0 to 1.\n\x09* With a Transmission Loss value of 0, all sounds pass through the surface, and the Acoustic Texture has no effect.\n\x09* With a value of 1, 100% Transmission Loss is applied to sounds that pass through the selected surfaces.\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates how much sound is transmitted through the selected surfaces. Valid range is 0 to 1.\nWith a Transmission Loss value of 0, all sounds pass through the surface, and the Acoustic Texture has no effect.\nWith a value of 1, 100% Transmission Loss is applied to sounds that pass through the selected surfaces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* An enabled surface is associated with the selected Acoustic Texture and Transmission Loss value above.\n\x09* A disabled surface is not associated with an Acoustic Texture, and has a Transmission Loss value of 0 (sound passes through the surface).\n\x09* If Surface Reflector Set is disabled, there is no Transmission Loss property to customize.\n\x09* In this case, enabled surfaces do not let sound pass through (equivalent to a Transmission Loss value of 1) and\n\x09* disabled surfaces let sound pass through (equivalent to a Transmission Loss value of 0).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enabled surface is associated with the selected Acoustic Texture and Transmission Loss value above.\nA disabled surface is not associated with an Acoustic Texture, and has a Transmission Loss value of 0 (sound passes through the surface).\nIf Surface Reflector Set is disabled, there is no Transmission Loss property to customize.\nIn this case, enabled surfaces do not let sound pass through (equivalent to a Transmission Loss value of 1) and\ndisabled surfaces let sound pass through (equivalent to a Transmission Loss value of 0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
	static void NewProp_EnableSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occlusion_MetaData), NewProp_Occlusion_MetaData) };
void Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
{
	((FAkSurfacePoly*)Obj)->EnableSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSurfacePoly), &Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSurface_MetaData), NewProp_EnableSurface_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfacePoly",
	Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers),
	sizeof(FAkSurfacePoly),
	alignof(FAkSurfacePoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton;
}
// End ScriptStruct FAkSurfacePoly

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkSurfaceEdgeVerts::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps, TEXT("AkSurfaceEdgeVerts"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeVerts), 2154595925U) },
		{ FAkSurfaceEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps, TEXT("AkSurfaceEdgeInfo"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeInfo), 2964843798U) },
		{ FAkSurfacePoly::StaticStruct, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps, TEXT("AkSurfacePoly"), &Z_Registration_Info_UScriptStruct_AkSurfacePoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfacePoly), 2824161209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_1439234575(TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
