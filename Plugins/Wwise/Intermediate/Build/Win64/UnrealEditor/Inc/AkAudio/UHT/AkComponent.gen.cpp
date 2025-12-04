// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum EReflectionFilterBits
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionFilterBits;
static UEnum* EReflectionFilterBits_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
	}
	return Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>()
{
	return EReflectionFilterBits_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Ceiling.Name", "EReflectionFilterBits::Ceiling" },
		{ "Floor.Name", "EReflectionFilterBits::Floor" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "Wall.Name", "EReflectionFilterBits::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
		{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
		{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EReflectionFilterBits",
	"EReflectionFilterBits",
	Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
{
	if (!Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton, Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton;
}
// End Enum EReflectionFilterBits

// Begin Class UAkComponent Function GetAttenuationRadius
struct Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
{
	struct AkComponent_eventGetAttenuationRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::AkComponent_eventGetAttenuationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::AkComponent_eventGetAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execGetAttenuationRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
	P_NATIVE_END;
}
// End Class UAkComponent Function GetAttenuationRadius

// Begin Class UAkComponent Function GetOcclusionCollisionChannel
struct Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics
{
	struct AkComponent_eventGetOcclusionCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the collision channel used when doing line of sight traces for obstruction/occlusion calculations. */" },
#endif
		{ "DisplayName", "Get Collision Channel" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the collision channel used when doing line of sight traces for obstruction/occlusion calculations." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventGetOcclusionCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetOcclusionCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::AkComponent_eventGetOcclusionCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::AkComponent_eventGetOcclusionCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execGetOcclusionCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetOcclusionCollisionChannel();
	P_NATIVE_END;
}
// End Class UAkComponent Function GetOcclusionCollisionChannel

// Begin Class UAkComponent Function PostAkEventAndWaitForEnd
struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
{
	struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
	{
		UAkAudioEvent* AkEvent;
		FLatentActionInfo LatentInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this component as the game object source, and wait until the event is\n\x09 * done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09 *\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::AkComponent_eventPostAkEventAndWaitForEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::AkComponent_eventPostAkEventAndWaitForEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEnd)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UAkComponent Function PostAkEventAndWaitForEnd

// Begin Class UAkComponent Function PostAssociatedAkEventAndWaitForEnd
struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
{
	struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
	{
		FLatentActionInfo LatentInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "0" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is \n\x09 * done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEnd)
{
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class UAkComponent Function PostAssociatedAkEventAndWaitForEnd

// Begin Class UAkComponent Function PostTrigger
struct Z_Construct_UFunction_UAkComponent_PostTrigger_Statics
{
	struct AkComponent_eventPostTrigger_Parms
	{
		UAkTrigger* TriggerValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a trigger to wwise, using this component as the game object source\n\x09 *\n\x09 * @param Trigger\x09\x09The name of the trigger\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostTrigger", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::AkComponent_eventPostTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::AkComponent_eventPostTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execPostTrigger)
{
	P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostTrigger(Z_Param_TriggerValue);
	P_NATIVE_END;
}
// End Class UAkComponent Function PostTrigger

// Begin Class UAkComponent Function SetEarlyReflectionsAuxBus
struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics
{
	struct AkComponent_eventSetEarlyReflectionsAuxBus_Parms
	{
		FString AuxBusName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set the early reflections aux bus for this AK Component.\n\x09* Geometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\n\x09* or if an aux bus is specified via SetEarlyReflectionsAuxSend.\n\x09* The AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\n\x09* the parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n\x09* @param AuxBusName - Name of aux bus in the Wwise project.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the early reflections aux bus for this AK Component.\nGeometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\nor if an aux bus is specified via SetEarlyReflectionsAuxSend.\nThe AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\nthe parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n@param AuxBusName - Name of aux bus in the Wwise project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsAuxBus_Parms, AuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusName_MetaData), NewProp_AuxBusName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsAuxBus", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::AkComponent_eventSetEarlyReflectionsAuxBus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::AkComponent_eventSetEarlyReflectionsAuxBus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsAuxBus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetEarlyReflectionsAuxBus

// Begin Class UAkComponent Function SetEarlyReflectionsVolume
struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics
{
	struct AkComponent_eventSetEarlyReflectionsVolume_Parms
	{
		float SendVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\n\x09* and is applied to all sounds playing on the Wwise game object.\n\x09* @param SendVolume - Send volume to the early reflections aux bus.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\nand is applied to all sounds playing on the Wwise game object.\n@param SendVolume - Send volume to the early reflections aux bus." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume = { "SendVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsVolume_Parms, SendVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsVolume", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::AkComponent_eventSetEarlyReflectionsVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::AkComponent_eventSetEarlyReflectionsVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SendVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetEarlyReflectionsVolume

// Begin Class UAkComponent Function SetEnableSpotReflectors
struct Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics
{
	struct AkComponent_eventSetEnableSpotReflectors_Parms
	{
		bool in_enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_in_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_in_enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable_SetBit(void* Obj)
{
	((AkComponent_eventSetEnableSpotReflectors_Parms*)Obj)->in_enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable = { "in_enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkComponent_eventSetEnableSpotReflectors_Parms), &Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::NewProp_in_enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEnableSpotReflectors", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::AkComponent_eventSetEnableSpotReflectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::AkComponent_eventSetEnableSpotReflectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetEnableSpotReflectors)
{
	P_GET_UBOOL(Z_Param_in_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSpotReflectors(Z_Param_in_enable);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetEnableSpotReflectors

// Begin Class UAkComponent Function SetGameObjectRadius
struct Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics
{
	struct AkComponent_eventSetGameObjectRadius_Parms
	{
		float in_outerRadius;
		float in_innerRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_in_outerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_in_innerRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius = { "in_outerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_outerRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius = { "in_innerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_innerRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_outerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::NewProp_in_innerRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetGameObjectRadius", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::AkComponent_eventSetGameObjectRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::AkComponent_eventSetGameObjectRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetGameObjectRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetGameObjectRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_in_outerRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_in_innerRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameObjectRadius(Z_Param_in_outerRadius,Z_Param_in_innerRadius);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetGameObjectRadius

// Begin Class UAkComponent Function SetListeners
struct Z_Construct_UFunction_UAkComponent_SetListeners_Statics
{
	struct AkComponent_eventSetListeners_Parms
	{
		TArray<UAkComponent*> Listeners;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a game object's listeners\n\x09 *\n\x09 * @param Listeners\x09The array of components that listen to this component\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a game object's listeners\n\n@param Listeners     The array of components that listen to this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Listeners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listeners_MetaData), NewProp_Listeners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::AkComponent_eventSetListeners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::AkComponent_eventSetListeners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetListeners)
{
	P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetListeners(Z_Param_Out_Listeners);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetListeners

// Begin Class UAkComponent Function SetOutputBusVolume
struct Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
{
	struct AkComponent_eventSetOutputBusVolume_Parms
	{
		float BusVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::AkComponent_eventSetOutputBusVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::AkComponent_eventSetOutputBusVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetOutputBusVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputBusVolume(Z_Param_BusVolume);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetOutputBusVolume

// Begin Class UAkComponent Function SetStopWhenOwnerDestroyed
struct Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
{
	struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
	{
		bool bStopWhenOwnerDestroyed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether or not to stop sounds when the component's owner is destroyed\n\x09 *\n\x09 * @param bStopWhenOwnerDestroyed\x09Whether or not to stop sounds when the component's owner is destroyed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
{
	((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::AkComponent_eventSetStopWhenOwnerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::AkComponent_eventSetStopWhenOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetStopWhenOwnerDestroyed)
{
	P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetStopWhenOwnerDestroyed

// Begin Class UAkComponent Function SetSwitch
struct Z_Construct_UFunction_UAkComponent_SetSwitch_Statics
{
	struct AkComponent_eventSetSwitch_Parms
	{
		UAkSwitchValue* SwitchValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a switch group in wwise, using this component as the game object source\n\x09 *\n\x09 * @param SwitchGroup\x09The name of the switch group\n\x09 * @param SwitchState\x09The new state of the switch\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetSwitch", nullptr, nullptr, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::AkComponent_eventSetSwitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::AkComponent_eventSetSwitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkComponent::execSetSwitch)
{
	P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwitch(Z_Param_SwitchValue);
	P_NATIVE_END;
}
// End Class UAkComponent Function SetSwitch

// Begin Class UAkComponent
void UAkComponent::StaticRegisterNativesUAkComponent()
{
	UClass* Class = UAkComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
		{ "GetOcclusionCollisionChannel", &UAkComponent::execGetOcclusionCollisionChannel },
		{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
		{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
		{ "PostTrigger", &UAkComponent::execPostTrigger },
		{ "SetEarlyReflectionsAuxBus", &UAkComponent::execSetEarlyReflectionsAuxBus },
		{ "SetEarlyReflectionsVolume", &UAkComponent::execSetEarlyReflectionsVolume },
		{ "SetEnableSpotReflectors", &UAkComponent::execSetEnableSpotReflectors },
		{ "SetGameObjectRadius", &UAkComponent::execSetGameObjectRadius },
		{ "SetListeners", &UAkComponent::execSetListeners },
		{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
		{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
		{ "SetSwitch", &UAkComponent::execSetSwitch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkComponent);
UClass* Z_Construct_UClass_UAkComponent_NoRegister()
{
	return UAkComponent::StaticClass();
}
struct Z_Construct_UClass_UAkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UAkComponent\n------------------------------------------------------------------------------------*/" },
#endif
		{ "DisplayName", "AkComponent" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The object collision channel to use when doing line of sight traces for obstruction/occlusion calculations.\n\x09* When set to 'Use Integration Settings Default', the value will be taken from the DefaultCollisionChannel in the Wwise Integration Settings.\n\x09*/" },
#endif
		{ "DisplayName", "Collision Channel" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object collision channel to use when doing line of sight traces for obstruction/occlusion calculations.\nWhen set to 'Use Integration Settings Default', the value will be taken from the DefaultCollisionChannel in the Wwise Integration Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the time interval between obstruction/occlusion checks (direct line of sight between the listener and this game object). Valid range [0, [.\n\x09* Obstruction is used if Spatial Audio Rooms are present in the map. Otherwise, occlusion is used. Set to 0 to disable obstruction/occlusion on this component.\n\x09* The obstruction/occlusion value is directly applied with AK::SoundEngine::SetObjectObstructionAndOcclusion.\n\x09* When using Spatial Audio, obstruction checks are also done between portals in the same room and this game object.\n\x09* Only use this feature if you plan to obstruct this game object with geometry that is neither \\ref features_objects_aksurfacereflectorset nor \\ref features_objects_akgeometrycomponent.\n\x09* If not, we recommend that you disable obstruction/occlusion checks and exclusively use Spatial Audio Geometric Diffraction and Transmission.\n\x09*/" },
#endif
		{ "DisplayName", "Refresh Interval" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the time interval between obstruction/occlusion checks (direct line of sight between the listener and this game object). Valid range [0, [.\nObstruction is used if Spatial Audio Rooms are present in the map. Otherwise, occlusion is used. Set to 0 to disable obstruction/occlusion on this component.\nThe obstruction/occlusion value is directly applied with AK::SoundEngine::SetObjectObstructionAndOcclusion.\nWhen using Spatial Audio, obstruction checks are also done between portals in the same room and this game object.\nOnly use this feature if you plan to obstruct this game object with geometry that is neither \\ref features_objects_aksurfacereflectorset nor \\ref features_objects_akgeometrycomponent.\nIf not, we recommend that you disable obstruction/occlusion checks and exclusively use Spatial Audio Geometric Diffraction and Transmission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Enable spot reflectors for this Ak Component **/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable spot reflectors for this Ak Component *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outerRadius_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Radial Emitter" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Define an outer radius around each sound position to simulate a radial sound source.\n\x09*\x09If the listener is outside the outer radius, the spread is defined by the area that the sphere takes in the listener field of view.\n\x09*\x09When the listener intersects the outer radius, the spread is exactly 50%. When the listener is in between the inner and outer radius, the spread interpolates linearly from 50% to 100%.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define an outer radius around each sound position to simulate a radial sound source.\nIf the listener is outside the outer radius, the spread is defined by the area that the sphere takes in the listener field of view.\nWhen the listener intersects the outer radius, the spread is exactly 50%. When the listener is in between the inner and outer radius, the spread interpolates linearly from 50% to 100%." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_innerRadius_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Radial Emitter" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Define an inner radius around each sound position to simulate a radial sound source.\n\x09*\x09If the listener is inside the inner radius, the spread is 100%.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define an inner radius around each sound position to simulate a radial sound source.\nIf the listener is inside the inner radius, the spread is 100%." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool. \n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Set the send volume for the early reflections Auxiliary Bus.\n\x09*\x09The send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the send volume for the early reflections Auxiliary Bus.\nThe send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop sound when owner is destroyed? */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop sound when owner is destroyed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[] = {
		{ "Category", "AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use reverb volumes or not */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use reverb volumes or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseSpatialAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
	static void NewProp_EnableSpotReflectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_outerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_innerRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
	static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
	static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
	static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
	static void NewProp_DrawDiffraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
	static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
	static void NewProp_bUseReverbVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 661325215
		{ &Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel, "GetOcclusionCollisionChannel" }, // 2820986619
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 832877412
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 1109986140
		{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 1155823001
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus, "SetEarlyReflectionsAuxBus" }, // 3286764657
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume, "SetEarlyReflectionsVolume" }, // 2437678648
		{ &Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors, "SetEnableSpotReflectors" }, // 452690375
		{ &Z_Construct_UFunction_UAkComponent_SetGameObjectRadius, "SetGameObjectRadius" }, // 3198768009
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 1372599361
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 3282684937
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 926645583
		{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 892988150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->bUseSpatialAudio_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpatialAudio_MetaData), NewProp_bUseSpatialAudio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionCollisionChannel_MetaData), NewProp_OcclusionCollisionChannel_MetaData) }; // 4142708294
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionRefreshInterval_MetaData), NewProp_OcclusionRefreshInterval_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->EnableSpotReflectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSpotReflectors_MetaData), NewProp_EnableSpotReflectors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius = { "outerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, outerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outerRadius_MetaData), NewProp_outerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius = { "innerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, innerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_innerRadius_MetaData), NewProp_innerRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData), NewProp_EarlyReflectionAuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData), NewProp_EarlyReflectionAuxBusName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionBusSendGain_MetaData), NewProp_EarlyReflectionBusSendGain_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawFirstOrderReflections_MetaData), NewProp_DrawFirstOrderReflections_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawSecondOrderReflections_MetaData), NewProp_DrawSecondOrderReflections_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHigherOrderReflections_MetaData), NewProp_DrawHigherOrderReflections_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->DrawDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDiffraction_MetaData), NewProp_DrawDiffraction_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopWhenOwnerDestroyed_MetaData), NewProp_StopWhenOwnerDestroyed_MetaData) };
void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit(void* Obj)
{
	((UAkComponent*)Obj)->bUseReverbVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseReverbVolumes_MetaData), NewProp_bUseReverbVolumes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_outerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_innerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkGameObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkComponent_Statics::ClassParams = {
	&UAkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkComponent()
{
	if (!Z_Registration_Info_UClass_UAkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkComponent.OuterSingleton, Z_Construct_UClass_UAkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkComponent>()
{
	return UAkComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
UAkComponent::~UAkComponent() {}
// End Class UAkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReflectionFilterBits_StaticEnum, TEXT("EReflectionFilterBits"), &Z_Registration_Info_UEnum_EReflectionFilterBits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2318539550U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkComponent, UAkComponent::StaticClass, TEXT("UAkComponent"), &Z_Registration_Info_UClass_UAkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkComponent), 3139126924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_3160332673(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
