// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetComponent.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkSurfaceReflectorSetComponent Function RemoveSurfaceReflectorSet
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSurfaceReflectorSet();
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function RemoveSurfaceReflectorSet

// Begin Class UAkSurfaceReflectorSetComponent Function SendSurfaceReflectorSet
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\n\x09* Send it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\nSend it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendSurfaceReflectorSet();
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SendSurfaceReflectorSet

// Begin Class UAkSurfaceReflectorSetComponent Function SetAcousticTexture
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		UAkAcousticTexture* InAcousticTexture;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update the AcousticTexture (Texture) of some of the faces on the brush geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InAcousticTexture - New AcousticTexture assigned to each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the AcousticTexture (Texture) of some of the faces on the brush geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InAcousticTexture - New AcousticTexture assigned to each surface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAcousticTexture;
	static void NewProp_bInEnableSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InAcousticTexture = { "InAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms, InAcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_bInEnableSurface_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms*)Obj)->bInEnableSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_InAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetAcousticTexture", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetAcousticTexture)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_OBJECT(UAkAcousticTexture,Z_Param_InAcousticTexture);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAcousticTexture(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InAcousticTexture,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetAcousticTexture

// Begin Class UAkSurfaceReflectorSetComponent Function SetEnable
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetEnable_Parms
	{
		bool bInEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::NewProp_bInEnable_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetEnable_Parms*)Obj)->bInEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnable_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnable", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::AkSurfaceReflectorSetComponent_eventSetEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::AkSurfaceReflectorSetComponent_eventSetEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnable)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnable(Z_Param_bInEnable);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetEnable

// Begin Class UAkSurfaceReflectorSetComponent Function SetEnableDiffraction
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms
	{
		bool bInEnableDiffraction;
		bool bInEnableDiffractionOnBoundaryEdges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable or disable geometric diffraction for this mesh.\n\x09* @param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n\x09* @param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh.\n@param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n@param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInEnableDiffraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffraction;
	static void NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffractionOnBoundaryEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction = { "bInEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffractionOnBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges = { "bInEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnableDiffraction", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnableDiffraction)
{
	P_GET_UBOOL(Z_Param_bInEnableDiffraction);
	P_GET_UBOOL(Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDiffraction(Z_Param_bInEnableDiffraction,Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetEnableDiffraction

// Begin Class UAkSurfaceReflectorSetComponent Function SetEnableSurface
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Enable or disable surfaces of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param bInEnableSurface - Set to true to enable each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable surfaces of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param bInEnableSurface - Set to true to enable each surface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static void NewProp_bInEnableSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_bInEnableSurface_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms*)Obj)->bInEnableSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnableSurface", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnableSurface)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSurface(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetEnableSurface

// Begin Class UAkSurfaceReflectorSetComponent Function SetSurfaceProperties
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		FAkSurfacePoly InSurfaceProperties;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Set the surface properties of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InSurfaceProperties - A structure of FAkSurfacePoly specifying the acoustic texture, transmission loss value and enable flag to set on each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the surface properties of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InSurfaceProperties - A structure of FAkSurfacePoly specifying the acoustic texture, transmission loss value and enable flag to set on each surface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSurfaceProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceProperties = { "InSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms, InSurfaceProperties), Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 2824161209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::NewProp_InSurfaceProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetSurfaceProperties", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetSurfaceProperties)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_STRUCT(FAkSurfacePoly,Z_Param_InSurfaceProperties);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurfaceProperties(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InSurfaceProperties);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetSurfaceProperties

// Begin Class UAkSurfaceReflectorSetComponent Function SetTransmissionLoss
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics
{
	struct AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		float InTransmissionLoss;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the transmission loss value of surfaces of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InTransmissionLoss - Transmission loss value to set on each surface. Valid range between 0 and 1.\n\x09 * @param bInEnableSurface - Set to true to enable each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the transmission loss value of surfaces of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InTransmissionLoss - Transmission loss value to set on each surface. Valid range between 0 and 1.\n@param bInEnableSurface - Set to true to enable each surface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransmissionLoss;
	static void NewProp_bInEnableSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InTransmissionLoss = { "InTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms, InTransmissionLoss), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_bInEnableSurface_SetBit(void* Obj)
{
	((AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms*)Obj)->bInEnableSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms), &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_InTransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetTransmissionLoss", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetTransmissionLoss)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransmissionLoss);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransmissionLoss(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InTransmissionLoss,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function SetTransmissionLoss

// Begin Class UAkSurfaceReflectorSetComponent Function UpdateAcousticProperties
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics
{
	struct AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms
	{
		TArray<FAkSurfacePoly> in_AcousticPolys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_in_AcousticPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_in_AcousticPolys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 2824161209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms, in_AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2824161209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateAcousticProperties", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties)
{
	P_GET_TARRAY(FAkSurfacePoly,Z_Param_in_AcousticPolys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAcousticProperties(Z_Param_in_AcousticPolys);
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function UpdateAcousticProperties

// Begin Class UAkSurfaceReflectorSetComponent Function UpdateSurfaceReflectorSet
struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSurfaceReflectorSet();
	P_NATIVE_END;
}
// End Class UAkSurfaceReflectorSetComponent Function UpdateSurfaceReflectorSet

// Begin Class UAkSurfaceReflectorSetComponent
void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
{
	UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
		{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
		{ "SetAcousticTexture", &UAkSurfaceReflectorSetComponent::execSetAcousticTexture },
		{ "SetEnable", &UAkSurfaceReflectorSetComponent::execSetEnable },
		{ "SetEnableDiffraction", &UAkSurfaceReflectorSetComponent::execSetEnableDiffraction },
		{ "SetEnableSurface", &UAkSurfaceReflectorSetComponent::execSetEnableSurface },
		{ "SetSurfaceProperties", &UAkSurfaceReflectorSetComponent::execSetSurfaceProperties },
		{ "SetTransmissionLoss", &UAkSurfaceReflectorSetComponent::execSetTransmissionLoss },
		{ "UpdateAcousticProperties", &UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties },
		{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSurfaceReflectorSetComponent);
UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
{
	return UAkSurfaceReflectorSetComponent::StaticClass();
}
struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "BlueprintSetter", "SetEnable" },
		{ "Category", "EnableComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\n\x09* Disable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\n\x09* When Surface Reflector Set is re-enabled after being disabled, the previously set values are restored. */" },
#endif
		{ "DisplayName", "Enable Surface Reflector Set" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\nDisable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\nWhen Surface Reflector Set is re-enabled after being disabled, the previously set values are restored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[] = {
		{ "BlueprintSetter", "UpdateAcousticProperties" },
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The surface properties of each face on the brush geometry. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The surface properties of each face on the brush geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassPortalSubtraction_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\n\x09* When set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds.\n\x09*/" },
#endif
		{ "DisplayName", "Bypass Portal Subtraction [Experimental]" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\nWhen set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolid_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
	static void NewProp_bEnableDiffraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
	static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
	static void NewProp_bBypassPortalSubtraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassPortalSubtraction;
	static void NewProp_bSolid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMap_ValueProp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EdgeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 3625085366
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 3474527470
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture, "SetAcousticTexture" }, // 4008567852
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable, "SetEnable" }, // 1278689579
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction, "SetEnableDiffraction" }, // 1582069777
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface, "SetEnableSurface" }, // 2522115461
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties, "SetSurfaceProperties" }, // 3537896753
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss, "SetTransmissionLoss" }, // 3895365912
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties, "UpdateAcousticProperties" }, // 1802035764
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 668240637
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
{
	((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSurfaceReflectors_MetaData), NewProp_bEnableSurfaceReflectors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 2824161209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticPolys_MetaData), NewProp_AcousticPolys_MetaData) }; // 2824161209
void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
{
	((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData), NewProp_bEnableDiffraction_MetaData) };
void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
{
	((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bBypassPortalSubtraction_SetBit(void* Obj)
{
	((UAkSurfaceReflectorSetComponent*)Obj)->bBypassPortalSubtraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bBypassPortalSubtraction = { "bBypassPortalSubtraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bBypassPortalSubtraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassPortalSubtraction_MetaData), NewProp_bBypassPortalSubtraction_MetaData) };
void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bSolid_SetBit(void* Obj)
{
	((UAkSurfaceReflectorSetComponent*)Obj)->bSolid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bSolid = { "bSolid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolid_MetaData), NewProp_bSolid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner = { "TextVisualizers", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers = { "TextVisualizers", nullptr, (EPropertyFlags)0x0194008c00000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextVisualizers_MetaData), NewProp_TextVisualizers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, METADATA_PARAMS(0, nullptr) }; // 2964843798
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMap_MetaData), NewProp_EdgeMap_MetaData) }; // 2964843798
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bBypassPortalSubtraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bSolid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
	&UAkSurfaceReflectorSetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
{
	if (!Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
{
	return UAkSurfaceReflectorSetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
UAkSurfaceReflectorSetComponent::~UAkSurfaceReflectorSetComponent() {}
// End Class UAkSurfaceReflectorSetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSurfaceReflectorSetComponent, UAkSurfaceReflectorSetComponent::StaticClass, TEXT("UAkSurfaceReflectorSetComponent"), &Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSurfaceReflectorSetComponent), 3865280791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_577894095(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
