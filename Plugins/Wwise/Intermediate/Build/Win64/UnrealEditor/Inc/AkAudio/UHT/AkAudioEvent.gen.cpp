// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioEvent.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseEventInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_AkAudio();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo();
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData();
// End Cross Module References

// Begin Class UAkAudioEvent Function ExecuteAction
struct Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics
{
	struct AkAudioEvent_eventExecuteAction_Parms
	{
		AkActionOnEventType ActionType;
		const AActor* Actor;
		int32 PlayingID;
		int32 TransitionDuration;
		EAkCurveInterpolation FadeCurve;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Executes action on the different playing IDs from this event that were previously posted on the\n\x09 * Actor's root component.\n\x09 *\n\x09 * @param ActionType What action to do.\n\x09 * @param Actor The actor that initially got some event posted.\n\x09 * @param PlayingID Use the return value of a Post Event to act only on this specific instance of an event.\n\x09 *\x09\x09\x09Use 0 for all the posted operations from this event.\n\x09 * @param TransitionDuration Transition duration in milliseconds.\n\x09 * @param FadeCurve The interpolation curve of the transition.\n\x09 * @return AKRESULT for the operation. AK_Success (0) if successful.\n\x09 */" },
#endif
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_PlayingID", "0" },
		{ "CPP_Default_TransitionDuration", "0" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Executes action on the different playing IDs from this event that were previously posted on the\nActor's root component.\n\n@param ActionType What action to do.\n@param Actor The actor that initially got some event posted.\n@param PlayingID Use the return value of a Post Event to act only on this specific instance of an event.\n                     Use 0 for all the posted operations from this event.\n@param TransitionDuration Transition duration in milliseconds.\n@param FadeCurve The interpolation curve of the transition.\n@return AKRESULT for the operation. AK_Success (0) if successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, ActionType), Z_Construct_UEnum_AkAudio_AkActionOnEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 2179890277
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, PlayingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingID_MetaData), NewProp_PlayingID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, TransitionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionDuration_MetaData), NewProp_TransitionDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeCurve_MetaData), NewProp_FadeCurve_MetaData) }; // 737320323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventExecuteAction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_TransitionDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_FadeCurve_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_FadeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "ExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::AkAudioEvent_eventExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::AkAudioEvent_eventExecuteAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_ExecuteAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_ExecuteAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execExecuteAction)
{
	P_GET_ENUM(AkActionOnEventType,Z_Param_ActionType);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
	P_GET_PROPERTY(FIntProperty,Z_Param_TransitionDuration);
	P_GET_ENUM(EAkCurveInterpolation,Z_Param_FadeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ExecuteAction(AkActionOnEventType(Z_Param_ActionType),Z_Param_Actor,Z_Param_PlayingID,Z_Param_TransitionDuration,EAkCurveInterpolation(Z_Param_FadeCurve));
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function ExecuteAction

// Begin Class UAkAudioEvent Function PostAtLocation
struct Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics
{
	struct AkAudioEvent_eventPostAtLocation_Parms
	{
		FVector Location;
		FRotator Orientation;
		FScriptDelegate Callback;
		int32 CallbackMask;
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts a Wwise Event at the specified location.\n\x09 *\n\x09 * This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\x09 *\n\x09 * @param Location Location from which to post the Wwise Event.\n\x09 * @param Orientation Orientation of the event.\n\x09 * @param Callback Function that gets called every time the operation defined by CallbackMask is processed.\n\x09 * @param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n\x09 * @param WorldContextObject An object having the world we target as context.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts a Wwise Event at the specified location.\n\nThis is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\n@param Location Location from which to post the Wwise Event.\n@param Orientation Orientation of the event.\n@param Callback Function that gets called every time the operation defined by CallbackMask is processed.\n@param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n@param WorldContextObject An object having the world we target as context.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, Callback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4055637702
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostAtLocation", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::AkAudioEvent_eventPostAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::AkAudioEvent_eventPostAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAtLocation(Z_Param_Location,Z_Param_Orientation,FOnAkPostEventCallback(Z_Param_Out_Callback),Z_Param_CallbackMask,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostAtLocation

// Begin Class UAkAudioEvent Function PostOnActor
struct Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics
{
	struct AkAudioEvent_eventPostOnActor_Parms
	{
		const AActor* Actor;
		FScriptDelegate Delegate;
		int32 CallbackMask;
		bool bStopWhenAttachedObjectDestroyed;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "Delegate" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the root component of the specified actor.\n\x09 *\n\x09 * @param Actor Actor on which to play the event. This actor gets followed automatically by the Event. If the Actor is left empty,\n\x09 *\x09\x09\x09the Event will be played as an Ambient sound.\n\x09 * @param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n\x09 * @param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n\x09 * @param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component\n\x09 *\x09\x09\x09 is destroyed. This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the root component of the specified actor.\n\n@param Actor Actor on which to play the event. This actor gets followed automatically by the Event. If the Actor is left empty,\n                     the Event will be played as an Ambient sound.\n@param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n@param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n@param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component\n                      is destroyed. This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAttachedObjectDestroyed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static void NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedObjectDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActor_Parms, Delegate), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 4055637702
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActor_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
void Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj)
{
	((AkAudioEvent_eventPostOnActor_Parms*)Obj)->bStopWhenAttachedObjectDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_bStopWhenAttachedObjectDestroyed = { "bStopWhenAttachedObjectDestroyed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioEvent_eventPostOnActor_Parms), &Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAttachedObjectDestroyed_MetaData), NewProp_bStopWhenAttachedObjectDestroyed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_bStopWhenAttachedObjectDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnActor", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::AkAudioEvent_eventPostOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::AkAudioEvent_eventPostOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedObjectDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnActor(Z_Param_Actor,FOnAkPostEventCallback(Z_Param_Out_Delegate),Z_Param_CallbackMask,Z_Param_bStopWhenAttachedObjectDestroyed);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnActor

// Begin Class UAkAudioEvent Function PostOnActorAndWait
struct Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics
{
	struct AkAudioEvent_eventPostOnActorAndWait_Parms
	{
		const AActor* Actor;
		bool bStopWhenAttachedObjectDestroyed;
		FLatentActionInfo LatentActionInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "bStopWhenAttachedObjectDestroyed", "false" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the root component of the specified actor, and waits for the end of the event to continue execution.\n\x09 *\n\x09 * Additional calls made while an event is active on a particular actor's root component are ignored.\n\x09 *\n\x09 * @param Actor Actor on which to play the event. This actor gets followed automatically by the Event.\n\x09 * @param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 *        This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentActionInfo" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the root component of the specified actor, and waits for the end of the event to continue execution.\n\nAdditional calls made while an event is active on a particular actor's root component are ignored.\n\n@param Actor Actor on which to play the event. This actor gets followed automatically by the Event.\n@param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n       This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAttachedObjectDestroyed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatentActionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedObjectDestroyed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentActionInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActorAndWait_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj)
{
	((AkAudioEvent_eventPostOnActorAndWait_Parms*)Obj)->bStopWhenAttachedObjectDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed = { "bStopWhenAttachedObjectDestroyed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioEvent_eventPostOnActorAndWait_Parms), &Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAttachedObjectDestroyed_MetaData), NewProp_bStopWhenAttachedObjectDestroyed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_LatentActionInfo = { "LatentActionInfo", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActorAndWait_Parms, LatentActionInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatentActionInfo_MetaData), NewProp_LatentActionInfo_MetaData) }; // 1503398820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnActorAndWait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_LatentActionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnActorAndWait", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::AkAudioEvent_eventPostOnActorAndWait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::AkAudioEvent_eventPostOnActorAndWait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnActorAndWait)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedObjectDestroyed);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentActionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnActorAndWait(Z_Param_Actor,Z_Param_bStopWhenAttachedObjectDestroyed,Z_Param_LatentActionInfo);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnActorAndWait

// Begin Class UAkAudioEvent Function PostOnComponent
struct Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics
{
	struct AkAudioEvent_eventPostOnComponent_Parms
	{
		UAkComponent* Component;
		FScriptDelegate Delegate;
		int32 CallbackMask;
		bool bStopWhenAttachedObjectDestroyed;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "Delegate" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the specified component.\n\x09 *\n\x09 * @param Component Component on which to play the event.\n\x09 * @param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n\x09 * @param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n\x09 * @param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component\n\x09 *\x09\x09\x09 is destroyed. This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the specified component.\n\n@param Component Component on which to play the event.\n@param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n@param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n@param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component\n                      is destroyed. This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAttachedObjectDestroyed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static void NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedObjectDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponent_Parms, Component), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponent_Parms, Delegate), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 4055637702
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
void Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj)
{
	((AkAudioEvent_eventPostOnComponent_Parms*)Obj)->bStopWhenAttachedObjectDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_bStopWhenAttachedObjectDestroyed = { "bStopWhenAttachedObjectDestroyed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioEvent_eventPostOnComponent_Parms), &Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAttachedObjectDestroyed_MetaData), NewProp_bStopWhenAttachedObjectDestroyed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_bStopWhenAttachedObjectDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnComponent", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::AkAudioEvent_eventPostOnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::AkAudioEvent_eventPostOnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnComponent)
{
	P_GET_OBJECT(UAkComponent,Z_Param_Component);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedObjectDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnComponent(Z_Param_Component,FOnAkPostEventCallback(Z_Param_Out_Delegate),Z_Param_CallbackMask,Z_Param_bStopWhenAttachedObjectDestroyed);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnComponent

// Begin Class UAkAudioEvent Function PostOnComponentAndWait
struct Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics
{
	struct AkAudioEvent_eventPostOnComponentAndWait_Parms
	{
		UAkComponent* Component;
		bool bStopWhenAttachedObjectDestroyed;
		FLatentActionInfo LatentActionInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "bStopWhenAttachedObjectDestroyed", "false" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the specified component, and waits for the end of the event to continue execution.\n\x09 *\n\x09 * Additional calls made while an event is active on a particular component are ignored.\n\x09 *\n\x09 * @param Component component on which to play the event. This component gets followed automatically by the Event.\n\x09 * @param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 *        This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentActionInfo" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the specified component, and waits for the end of the event to continue execution.\n\nAdditional calls made while an event is active on a particular component are ignored.\n\n@param Component component on which to play the event. This component gets followed automatically by the Event.\n@param bStopWhenAttachedObjectDestroyed Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n       This parameter modifies the AkComponent itself, you can only have one behavior per actor's root component.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAttachedObjectDestroyed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatentActionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedObjectDestroyed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentActionInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponentAndWait_Parms, Component), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit(void* Obj)
{
	((AkAudioEvent_eventPostOnComponentAndWait_Parms*)Obj)->bStopWhenAttachedObjectDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed = { "bStopWhenAttachedObjectDestroyed", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioEvent_eventPostOnComponentAndWait_Parms), &Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAttachedObjectDestroyed_MetaData), NewProp_bStopWhenAttachedObjectDestroyed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_LatentActionInfo = { "LatentActionInfo", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponentAndWait_Parms, LatentActionInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatentActionInfo_MetaData), NewProp_LatentActionInfo_MetaData) }; // 1503398820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnComponentAndWait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_bStopWhenAttachedObjectDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_LatentActionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnComponentAndWait", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::AkAudioEvent_eventPostOnComponentAndWait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::AkAudioEvent_eventPostOnComponentAndWait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnComponentAndWait)
{
	P_GET_OBJECT(UAkComponent,Z_Param_Component);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedObjectDestroyed);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentActionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnComponentAndWait(Z_Param_Component,Z_Param_bStopWhenAttachedObjectDestroyed,Z_Param_LatentActionInfo);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnComponentAndWait

// Begin Class UAkAudioEvent Function PostOnGameObject
struct Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics
{
	struct AkAudioEvent_eventPostOnGameObject_Parms
	{
		UAkGameObject* GameObject;
		FScriptDelegate Delegate;
		int32 CallbackMask;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "Delegate" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the specified game object.\n\x09 *\n\x09 * @param GameObject Game object on which to play the event.\n\x09 * @param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n\x09 * @param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the specified game object.\n\n@param GameObject Game object on which to play the event.\n@param Delegate Function that gets called every time the operation defined by CallbackMask is processed.\n@param CallbackMask Bitmask defining all the operations that will call the Callback. See \\ref AkCallbackType.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_GameObject = { "GameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObject_Parms, GameObject), Z_Construct_UClass_UAkGameObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObject_MetaData), NewProp_GameObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObject_Parms, Delegate), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 4055637702
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObject_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_GameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnGameObject", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::AkAudioEvent_eventPostOnGameObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::AkAudioEvent_eventPostOnGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnGameObject)
{
	P_GET_OBJECT(UAkGameObject,Z_Param_GameObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnGameObject(Z_Param_GameObject,FOnAkPostEventCallback(Z_Param_Out_Delegate),Z_Param_CallbackMask);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnGameObject

// Begin Class UAkAudioEvent Function PostOnGameObjectAndWait
struct Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics
{
	struct AkAudioEvent_eventPostOnGameObjectAndWait_Parms
	{
		UAkGameObject* GameObject;
		FLatentActionInfo LatentActionInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "bStopWhenAttachedObjectDestroyed", "false" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Posts the Wwise Event on the specified game object, and waits for the end of the event to continue execution.\n\x09 *\n\x09 * Additional calls made while an event is active on a particular game object are ignored.\n\x09 *\n\x09 * @param GameObject Game object on which to play the event. This game object gets followed automatically by the Event.\n\x09 * @return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentActionInfo" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Posts the Wwise Event on the specified game object, and waits for the end of the event to continue execution.\n\nAdditional calls made while an event is active on a particular game object are ignored.\n\n@param GameObject Game object on which to play the event. This game object gets followed automatically by the Event.\n@return The Playing ID returned by the SoundEngine's PostEvent, or AK_INVALID_PLAYING_ID (0) if invalid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatentActionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentActionInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_GameObject = { "GameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObjectAndWait_Parms, GameObject), Z_Construct_UClass_UAkGameObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObject_MetaData), NewProp_GameObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_LatentActionInfo = { "LatentActionInfo", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObjectAndWait_Parms, LatentActionInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatentActionInfo_MetaData), NewProp_LatentActionInfo_MetaData) }; // 1503398820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioEvent_eventPostOnGameObjectAndWait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_GameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_LatentActionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "PostOnGameObjectAndWait", nullptr, nullptr, Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::AkAudioEvent_eventPostOnGameObjectAndWait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::AkAudioEvent_eventPostOnGameObjectAndWait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkAudioEvent::execPostOnGameObjectAndWait)
{
	P_GET_OBJECT(UAkGameObject,Z_Param_GameObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentActionInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostOnGameObjectAndWait(Z_Param_GameObject,Z_Param_LatentActionInfo);
	P_NATIVE_END;
}
// End Class UAkAudioEvent Function PostOnGameObjectAndWait

// Begin Class UAkAudioEvent
void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
{
	UClass* Class = UAkAudioEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteAction", &UAkAudioEvent::execExecuteAction },
		{ "PostAtLocation", &UAkAudioEvent::execPostAtLocation },
		{ "PostOnActor", &UAkAudioEvent::execPostOnActor },
		{ "PostOnActorAndWait", &UAkAudioEvent::execPostOnActorAndWait },
		{ "PostOnComponent", &UAkAudioEvent::execPostOnComponent },
		{ "PostOnComponentAndWait", &UAkAudioEvent::execPostOnComponentAndWait },
		{ "PostOnGameObject", &UAkAudioEvent::execPostOnGameObject },
		{ "PostOnGameObjectAndWait", &UAkAudioEvent::execPostOnGameObjectAndWait },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioEvent);
UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
{
	return UAkAudioEvent::StaticClass();
}
struct Z_Construct_UClass_UAkAudioEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this event is infinite (looping) or finite (duration parameters are valid) */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum duration */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum duration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum duration */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum duration" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventCookedData_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Used for migration" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
	static void NewProp_IsInfinite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventCookedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioEvent_ExecuteAction, "ExecuteAction" }, // 4290338055
		{ &Z_Construct_UFunction_UAkAudioEvent_PostAtLocation, "PostAtLocation" }, // 3687282846
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnActor, "PostOnActor" }, // 130275165
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnActorAndWait, "PostOnActorAndWait" }, // 1908002106
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnComponent, "PostOnComponent" }, // 232841122
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnComponentAndWait, "PostOnComponentAndWait" }, // 574483005
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnGameObject, "PostOnGameObject" }, // 815984659
		{ &Z_Construct_UFunction_UAkAudioEvent_PostOnGameObjectAndWait, "PostOnGameObjectAndWait" }, // 1501451109
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, MaxAttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttenuationRadius_MetaData), NewProp_MaxAttenuationRadius_MetaData) };
void Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit(void* Obj)
{
	((UAkAudioEvent*)Obj)->IsInfinite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkAudioEvent), &Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInfinite_MetaData), NewProp_IsInfinite_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, MinimumDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDuration_MetaData), NewProp_MinimumDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, MaximumDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDuration_MetaData), NewProp_MaximumDuration_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, EventInfo), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventInfo_MetaData), NewProp_EventInfo_MetaData) }; // 3168126025
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_EventCookedData = { "EventCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, EventCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventCookedData_MetaData), NewProp_EventCookedData_MetaData) }; // 2686468856
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioEvent, RequiredBank_DEPRECATED), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredBank_MetaData), NewProp_RequiredBank_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_EventInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_EventCookedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAudioEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams = {
	&UAkAudioEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioEvent()
{
	if (!Z_Registration_Info_UClass_UAkAudioEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioEvent.OuterSingleton, Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioEvent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAudioEvent>()
{
	return UAkAudioEvent::StaticClass();
}
UAkAudioEvent::UAkAudioEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
UAkAudioEvent::~UAkAudioEvent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioEvent)
// End Class UAkAudioEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioEvent, UAkAudioEvent::StaticClass, TEXT("UAkAudioEvent"), &Z_Registration_Info_UClass_UAkAudioEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioEvent), 1518943241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_3902838265(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
