// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGeometryComponent.h"
#include "AkAudio/Classes/AkGeometryData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum AkMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMeshType;
static UEnum* AkMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AkMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AkMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMeshType"));
	}
	return Z_Registration_Info_UEnum_AkMeshType.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>()
{
	return AkMeshType_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_AkMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CollisionMesh.DisplayName", "Simple Collision" },
		{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
		{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkMeshType",
	"AkMeshType",
	Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_AkMeshType()
{
	if (!Z_Registration_Info_UEnum_AkMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMeshType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AkMeshType.InnerSingleton;
}
// End Enum AkMeshType

// Begin ScriptStruct FAkGeometrySurfaceOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride;
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\n\x09* If left to None, the mesh's physical material will be used to fetch an acoustic texture.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\nIf left to None, the mesh's physical material will be used to fetch an acoustic texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Transmission Loss Override */" },
#endif
		{ "DisplayName", "Enable Transmission Loss Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Transmission Loss Override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\n\x09* If there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\n\x09* Valid range : (0.0, 1.0)\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "EditCondition", "bEnableOcclusionOverride" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\nIf there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\nValid range : (0.0, 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
	static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
{
	((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOcclusionOverride_MetaData), NewProp_bEnableOcclusionOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionValue_MetaData), NewProp_OcclusionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkGeometrySurfaceOverride",
	Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
	sizeof(FAkGeometrySurfaceOverride),
	alignof(FAkGeometrySurfaceOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton;
}
// End ScriptStruct FAkGeometrySurfaceOverride

// Begin Class UAkGeometryComponent Function ConvertMesh
struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the mesh into a local representation suited for Wwise:\n\x09* a set of vertices, triangles, surfaces, acoustic textures and transmission loss values. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the mesh into a local representation suited for Wwise:\na set of vertices, triangles, surfaces, acoustic textures and transmission loss values." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertMesh();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function ConvertMesh

// Begin Class UAkGeometryComponent Function GetAcousticPropertiesOverride
struct Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics
{
	struct AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Acoustic Properties overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface that the requested Acoustic Properties override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param OutAcousticPropertiesOverride - The requested Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Acoustic Properties overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface that the requested Acoustic Properties override. Leave empty if the Mesh Type is set to Simple Collision.\n@param OutAcousticPropertiesOverride - The requested Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
void Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "GetAcousticPropertiesOverride", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execGetAcousticPropertiesOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAcousticPropertiesOverride(Z_Param_InMaterialInterface,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function GetAcousticPropertiesOverride

// Begin Class UAkGeometryComponent Function RemoveGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function RemoveGeometry

// Begin Class UAkGeometryComponent Function SendGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SendGeometry

// Begin Class UAkGeometryComponent Function SetAcousticPropertiesOverride
struct Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics
{
	struct AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		FAkGeometrySurfaceOverride InAcousticPropertiesOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Acoustic Properties overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InAcousticPropertiesOverride - Structure of Acoustic Properties Override to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Acoustic Properties overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InAcousticPropertiesOverride - Structure of Acoustic Properties Override to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAcousticPropertiesOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_InAcousticPropertiesOverride = { "InAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, InAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
void Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_InAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetAcousticPropertiesOverride", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSetAcousticPropertiesOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_STRUCT(FAkGeometrySurfaceOverride,Z_Param_InAcousticPropertiesOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAcousticPropertiesOverride(Z_Param_InMaterialInterface,Z_Param_InAcousticPropertiesOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SetAcousticPropertiesOverride

// Begin Class UAkGeometryComponent Function SetAcousticTextureOverride
struct Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics
{
	struct AkGeometryComponent_eventSetAcousticTextureOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		UAkAcousticTexture* InAcousticTexture;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Acoustic Texture overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InAcousticTexture - Acoustic Texture to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Acoustic Texture overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InAcousticTexture - Acoustic Texture to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAcousticTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_InAcousticTexture = { "InAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, InAcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
void Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetAcousticTextureOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetAcousticTextureOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_InAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetAcousticTextureOverride", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::AkGeometryComponent_eventSetAcousticTextureOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::AkGeometryComponent_eventSetAcousticTextureOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSetAcousticTextureOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_OBJECT(UAkAcousticTexture,Z_Param_InAcousticTexture);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAcousticTextureOverride(Z_Param_InMaterialInterface,Z_Param_InAcousticTexture,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SetAcousticTextureOverride

// Begin Class UAkGeometryComponent Function SetEnableDiffraction
struct Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics
{
	struct AkGeometryComponent_eventSetEnableDiffraction_Parms
	{
		bool bInEnableDiffraction;
		bool bInEnableDiffractionOnBoundaryEdges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable or disable geometric diffraction for this mesh.\n\x09* @param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n\x09* @param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
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
void Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction = { "bInEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableDiffraction_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffractionOnBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges = { "bInEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableDiffraction_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::NewProp_bInEnableDiffractionOnBoundaryEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetEnableDiffraction", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::AkGeometryComponent_eventSetEnableDiffraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::AkGeometryComponent_eventSetEnableDiffraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSetEnableDiffraction)
{
	P_GET_UBOOL(Z_Param_bInEnableDiffraction);
	P_GET_UBOOL(Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDiffraction(Z_Param_bInEnableDiffraction,Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SetEnableDiffraction

// Begin Class UAkGeometryComponent Function SetEnableTransmissionLossOverride
struct Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics
{
	struct AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		bool bInEnableTransmissionLossOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable or disable the transmission loss of this Geometry to be overriden.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param bInEnableTransmissionLossOverride - Set to true to enable Transmission Loss override.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable the transmission loss of this Geometry to be overriden.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param bInEnableTransmissionLossOverride - Set to true to enable Transmission Loss override.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static void NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableTransmissionLossOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms*)Obj)->bInEnableTransmissionLossOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride = { "bInEnableTransmissionLossOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
void Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetEnableTransmissionLossOverride", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSetEnableTransmissionLossOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_UBOOL(Z_Param_bInEnableTransmissionLossOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEnableTransmissionLossOverride(Z_Param_InMaterialInterface,Z_Param_bInEnableTransmissionLossOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SetEnableTransmissionLossOverride

// Begin Class UAkGeometryComponent Function SetTransmissionLossOverride
struct Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics
{
	struct AkGeometryComponent_eventSetTransmissionLossOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		float InTransmissionLoss;
		bool bInEnableTransmissionLossOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Transmission Loss overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InTransmissionLoss - Transmission Loss value to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Transmission Loss overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InTransmissionLoss - Transmission Loss value to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransmissionLoss;
	static void NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableTransmissionLossOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_InTransmissionLoss = { "InTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, InTransmissionLoss), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetTransmissionLossOverride_Parms*)Obj)->bInEnableTransmissionLossOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride = { "bInEnableTransmissionLossOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetTransmissionLossOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
void Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AkGeometryComponent_eventSetTransmissionLossOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetTransmissionLossOverride_Parms), &Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_InTransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_bInEnableTransmissionLossOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetTransmissionLossOverride", nullptr, nullptr, Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::AkGeometryComponent_eventSetTransmissionLossOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::AkGeometryComponent_eventSetTransmissionLossOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSetTransmissionLossOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransmissionLoss);
	P_GET_UBOOL(Z_Param_bInEnableTransmissionLossOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransmissionLossOverride(Z_Param_InMaterialInterface,Z_Param_InTransmissionLoss,Z_Param_bInEnableTransmissionLossOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SetTransmissionLossOverride

// Begin Class UAkGeometryComponent Function UpdateGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function UpdateGeometry

// Begin Class UAkGeometryComponent
void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
{
	UClass* Class = UAkGeometryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
		{ "GetAcousticPropertiesOverride", &UAkGeometryComponent::execGetAcousticPropertiesOverride },
		{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
		{ "SendGeometry", &UAkGeometryComponent::execSendGeometry },
		{ "SetAcousticPropertiesOverride", &UAkGeometryComponent::execSetAcousticPropertiesOverride },
		{ "SetAcousticTextureOverride", &UAkGeometryComponent::execSetAcousticTextureOverride },
		{ "SetEnableDiffraction", &UAkGeometryComponent::execSetEnableDiffraction },
		{ "SetEnableTransmissionLossOverride", &UAkGeometryComponent::execSetEnableTransmissionLossOverride },
		{ "SetTransmissionLossOverride", &UAkGeometryComponent::execSetTransmissionLossOverride },
		{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGeometryComponent);
UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
{
	return UAkGeometryComponent::StaticClass();
}
struct Z_Construct_UClass_UAkGeometryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Static Mesh's LOD to use */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Static Mesh's LOD to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The local distance in Unreal units between two vertices to be welded together.\n\x09* Any two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\n\x09* Increasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\n\x09* Increasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local distance in Unreal units between two vertices to be welded together.\nAny two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\nIncreasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\nIncreasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of this mesh per material.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of this mesh per material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of the collision mesh.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of the collision mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassPortalSubtraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\n\x09* When set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds.\n\x09*/" },
#endif
		{ "DisplayName", "Bypass Portal Subtraction [Experimental]" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\nWhen set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolid_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
	static void NewProp_bEnableDiffraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
	static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
	static void NewProp_bBypassPortalSubtraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassPortalSubtraction;
	static void NewProp_bSolid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 2620871713
		{ &Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride, "GetAcousticPropertiesOverride" }, // 3785199709
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 3339836888
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // 2362715583
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride, "SetAcousticPropertiesOverride" }, // 768012152
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride, "SetAcousticTextureOverride" }, // 2302281771
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction, "SetEnableDiffraction" }, // 553126025
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride, "SetEnableTransmissionLossOverride" }, // 3463224243
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride, "SetTransmissionLossOverride" }, // 3640905842
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 2723201454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 3161239178
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldingThreshold_MetaData), NewProp_WeldingThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 810250065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshSurfaceOverride_MetaData), NewProp_StaticMeshSurfaceOverride_MetaData) }; // 810250065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshSurfaceOverride_MetaData), NewProp_CollisionMeshSurfaceOverride_MetaData) }; // 810250065
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData), NewProp_bEnableDiffraction_MetaData) };
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bBypassPortalSubtraction_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bBypassPortalSubtraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bBypassPortalSubtraction = { "bBypassPortalSubtraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bBypassPortalSubtraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassPortalSubtraction_MetaData), NewProp_bBypassPortalSubtraction_MetaData) };
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bSolid_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bSolid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bSolid = { "bSolid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolid_MetaData), NewProp_bSolid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryData_MetaData), NewProp_GeometryData_MetaData) }; // 2472637775
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceAreas_MetaData), NewProp_SurfaceAreas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bBypassPortalSubtraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bSolid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
	&UAkGeometryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkGeometryComponent()
{
	if (!Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
{
	return UAkGeometryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
UAkGeometryComponent::~UAkGeometryComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent)
// End Class UAkGeometryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AkMeshType_StaticEnum, TEXT("AkMeshType"), &Z_Registration_Info_UEnum_AkMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3161239178U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkGeometrySurfaceOverride::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps, TEXT("AkGeometrySurfaceOverride"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfaceOverride), 810250065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGeometryComponent, UAkGeometryComponent::StaticClass, TEXT("UAkGeometryComponent"), &Z_Registration_Info_UClass_UAkGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGeometryComponent), 4187973526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_1075648386(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
