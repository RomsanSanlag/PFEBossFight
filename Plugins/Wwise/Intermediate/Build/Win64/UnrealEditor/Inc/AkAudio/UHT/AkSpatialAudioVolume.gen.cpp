// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSpatialAudioVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum EAkFitToGeometryMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkFitToGeometryMode;
static UEnum* EAkFitToGeometryMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkFitToGeometryMode"));
	}
	return Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EAkFitToGeometryMode>()
{
	return EAkFitToGeometryMode_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignedBox.Comment", "/**\n\x09""Aligned Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using an aligned bounding box, aligned to the local axes of the Actor. \n\x09Use for shoe box shaped rooms with an arbitrary extent, but with the rotation supplied by the user.\n\x09The actor is rotated manually in the editor to achieve desired alignment.\n\x09*/" },
		{ "AlignedBox.Name", "EAkFitToGeometryMode::AlignedBox" },
		{ "AlignedBox.ToolTip", "Aligned Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using an aligned bounding box, aligned to the local axes of the Actor.\nUse for shoe box shaped rooms with an arbitrary extent, but with the rotation supplied by the user.\nThe actor is rotated manually in the editor to achieve desired alignment." },
		{ "ConvexPolyhedron.Comment", "/**\n\x09""Convex Polyhedron: The Ak Spatial Audio Volume is fit to the surrounding geometry using a convex polyhedron. Use for arbitrary-shaped convex rooms. \n\x09Will likely result in a more complex (higher poly-count) shape, and will possibly resulting in greater CPU and memory usage than oriented or aligned box shapes.\n\x09When using convex polyhedron, a room must be fully enclosed; open ceilings or walls are not permitted and will cause a failure to fit to geometry.\n\x09*/" },
		{ "ConvexPolyhedron.Name", "EAkFitToGeometryMode::ConvexPolyhedron" },
		{ "ConvexPolyhedron.ToolTip", "Convex Polyhedron: The Ak Spatial Audio Volume is fit to the surrounding geometry using a convex polyhedron. Use for arbitrary-shaped convex rooms.\nWill likely result in a more complex (higher poly-count) shape, and will possibly resulting in greater CPU and memory usage than oriented or aligned box shapes.\nWhen using convex polyhedron, a room must be fully enclosed; open ceilings or walls are not permitted and will cause a failure to fit to geometry." },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "OrientedBox.Comment", "/**\n\x09Oriented Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using a minimum volume oriented bounding box. \n\x09Use for shoe box shaped rooms with and arbitrary extent and rotation.\n\x09*/" },
		{ "OrientedBox.Name", "EAkFitToGeometryMode::OrientedBox" },
		{ "OrientedBox.ToolTip", "Oriented Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using a minimum volume oriented bounding box.\nUse for shoe box shaped rooms with and arbitrary extent and rotation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkFitToGeometryMode::OrientedBox", (int64)EAkFitToGeometryMode::OrientedBox },
		{ "EAkFitToGeometryMode::AlignedBox", (int64)EAkFitToGeometryMode::AlignedBox },
		{ "EAkFitToGeometryMode::ConvexPolyhedron", (int64)EAkFitToGeometryMode::ConvexPolyhedron },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkFitToGeometryMode",
	"EAkFitToGeometryMode",
	Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode()
{
	if (!Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton;
}
// End Enum EAkFitToGeometryMode

// Begin Class AAkSpatialAudioVolume Function GetCollisionChannel
#if WITH_EDITOR
struct Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics
{
	struct AkSpatialAudioVolume_eventGetCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSpatialAudioVolume_eventGetCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkSpatialAudioVolume, nullptr, "GetCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::AkSpatialAudioVolume_eventGetCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::AkSpatialAudioVolume_eventGetCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AAkSpatialAudioVolume::execGetCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannel();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AAkSpatialAudioVolume Function GetCollisionChannel

// Begin Class AAkSpatialAudioVolume
void AAkSpatialAudioVolume::StaticRegisterNativesAAkSpatialAudioVolume()
{
#if WITH_EDITOR
	UClass* Class = AAkSpatialAudioVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCollisionChannel", &AAkSpatialAudioVolume::execGetCollisionChannel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkSpatialAudioVolume);
UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister()
{
	return AAkSpatialAudioVolume::StaticClass();
}
struct Z_Construct_UClass_AAkSpatialAudioVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkSpatialAudioVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkSpatialAudioVolume.h" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkSpatialAudioVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceReflectorSet_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateReverb_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitToGeometry_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Automatically fit the Ak Spatial Audio Volume to the surrounding geometry. The fitting operation is performed after this property is enabled. It is performed again when the actor is moved to a new location.\n\x09The fitting operation casts rays emanating spherically outwards from the origin of the actor. The points where the rays hit the surrounding geometry (drawn in the editor as green dots) are fit to a shape (box or convex polyhedron), and the actor is then resized appropriately.\n\x09This operation modifies properties in the Surface Properties category. The Physical Materials of the surfaces hit are used to choose a corresponding Acoustic Texture and Transmission Loss value, as determined by the DefaultGeometrySurfacePropertiesTable in the Integration Settings.\n\x09When this property is disabled, the fitting operation is not performed but the shape and surface properties of the Spatial Audio Volume are retained.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically fit the Ak Spatial Audio Volume to the surrounding geometry. The fitting operation is performed after this property is enabled. It is performed again when the actor is moved to a new location.\nThe fitting operation casts rays emanating spherically outwards from the origin of the actor. The points where the rays hit the surrounding geometry (drawn in the editor as green dots) are fit to a shape (box or convex polyhedron), and the actor is then resized appropriately.\nThis operation modifies properties in the Surface Properties category. The Physical Materials of the surfaces hit are used to choose a corresponding Acoustic Texture and Transmission Loss value, as determined by the DefaultGeometrySurfacePropertiesTable in the Integration Settings.\nWhen this property is disabled, the fitting operation is not performed but the shape and surface properties of the Spatial Audio Volume are retained." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Sets the collision channel for the ray traces performed to fit the spatial audio volume to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the collision channel for the ray traces performed to fit the spatial audio volume to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09""Choose the shape with which to fit to the surrounding geometry. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Choose the shape with which to fit to the surrounding geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterHitPoints_MetaData[] = {
		{ "Category", "Fit to Geometry" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.187500" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Set to a value less then 1.0 to filter out a percentage of the ray cast hits for use in fitting to surrounding geometry. \n\x09Points that have been rejected by the filter are drawn in red, and points accepted drawn in green. \n\x09Particularly useful when rays happen to escape through windows or other openings, resulting in undesirable points.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to a value less then 1.0 to filter out a percentage of the ray cast hits for use in fitting to surrounding geometry.\nPoints that have been rejected by the filter are drawn in red, and points accepted drawn in green.\nParticularly useful when rays happen to escape through windows or other openings, resulting in undesirable points." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitNormals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitFailed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceReflectorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
#if WITH_EDITORONLY_DATA
	static void NewProp_FitToGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitToGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterHitPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FitPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FitNormals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitNormals;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FitMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRotation;
	static void NewProp_FitFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitFailed;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel, "GetCollisionChannel" }, // 2913075919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpatialAudioVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet = { "SurfaceReflectorSet", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, SurfaceReflectorSet), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceReflectorSet_MetaData), NewProp_SurfaceReflectorSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb = { "LateReverb", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, LateReverb), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateReverb_MetaData), NewProp_LateReverb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, Room), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitToGeometry_SetBit(void* Obj)
{
	((AAkSpatialAudioVolume*)Obj)->FitToGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitToGeometry = { "FitToGeometry", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpatialAudioVolume), &Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitToGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitToGeometry_MetaData), NewProp_FitToGeometry_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, CollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 4142708294
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, Shape), Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 3061093144
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FilterHitPoints = { "FilterHitPoints", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FilterHitPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterHitPoints_MetaData), NewProp_FilterHitPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitPoints_Inner = { "FitPoints", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitPoints = { "FitPoints", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitPoints_MetaData), NewProp_FitPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitNormals_Inner = { "FitNormals", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitNormals = { "FitNormals", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitNormals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitNormals_MetaData), NewProp_FitNormals_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitMaterials_Inner = { "FitMaterials", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitMaterials = { "FitMaterials", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitMaterials_MetaData), NewProp_FitMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SavedRotation = { "SavedRotation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, SavedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRotation_MetaData), NewProp_SavedRotation_MetaData) };
void Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitFailed_SetBit(void* Obj)
{
	((AAkSpatialAudioVolume*)Obj)->FitFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitFailed = { "FitFailed", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpatialAudioVolume), &Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitFailed_MetaData), NewProp_FitFailed_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitToGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FilterHitPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitNormals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SavedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_FitFailed,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams = {
	&AAkSpatialAudioVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAkSpatialAudioVolume()
{
	if (!Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton, Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<AAkSpatialAudioVolume>()
{
	return AAkSpatialAudioVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpatialAudioVolume);
AAkSpatialAudioVolume::~AAkSpatialAudioVolume() {}
// End Class AAkSpatialAudioVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAkFitToGeometryMode_StaticEnum, TEXT("EAkFitToGeometryMode"), &Z_Registration_Info_UEnum_EAkFitToGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3061093144U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpatialAudioVolume, AAkSpatialAudioVolume::StaticClass, TEXT("AAkSpatialAudioVolume"), &Z_Registration_Info_UClass_AAkSpatialAudioVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpatialAudioVolume), 2060816554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_1382483707(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
