// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/WwiseAssetLibraryInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEPACKAGINGRUNTIME_WwiseAssetLibraryInfo_generated_h
#error "WwiseAssetLibraryInfo.generated.h already included, missing '#pragma once' in WwiseAssetLibraryInfo.h"
#endif
#define WWISEPACKAGINGRUNTIME_WwiseAssetLibraryInfo_generated_h

#define FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISEPACKAGINGRUNTIME_API UScriptStruct* StaticStruct<struct FWwiseAssetLibraryRef>();

#define FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISEPACKAGINGRUNTIME_API UScriptStruct* StaticStruct<struct FWwiseAssetLibraryInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h


#define FOREACH_ENUM_EWWISEASSETLIBRARYREFTYPE(op) \
	op(EWwiseAssetLibraryRefType::Unknown) \
	op(EWwiseAssetLibraryRefType::InitBank) \
	op(EWwiseAssetLibraryRefType::SoundBank) \
	op(EWwiseAssetLibraryRefType::Media) \
	op(EWwiseAssetLibraryRefType::ExternalSource) 

enum class EWwiseAssetLibraryRefType;
template<> struct TIsUEnumClass<EWwiseAssetLibraryRefType> { enum { Value = true }; };
template<> WWISEPACKAGINGRUNTIME_API UEnum* StaticEnum<EWwiseAssetLibraryRefType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
