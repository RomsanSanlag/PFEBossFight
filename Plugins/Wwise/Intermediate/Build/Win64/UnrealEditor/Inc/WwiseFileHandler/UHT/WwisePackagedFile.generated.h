// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwisePackagedFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEFILEHANDLER_WwisePackagedFile_generated_h
#error "WwisePackagedFile.generated.h already included, missing '#pragma once' in WwisePackagedFile.h"
#endif
#define WWISEFILEHANDLER_WwisePackagedFile_generated_h

#define FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwisePackagedFile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<struct FWwisePackagedFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h


#define FOREACH_ENUM_EWWISEPACKAGINGSTRATEGY(op) \
	op(EWwisePackagingStrategy::Source) \
	op(EWwisePackagingStrategy::AdditionalFile) \
	op(EWwisePackagingStrategy::HybridAdditionalFile) \
	op(EWwisePackagingStrategy::BulkData) \
	op(EWwisePackagingStrategy::External) 

enum class EWwisePackagingStrategy : uint8;
template<> struct TIsUEnumClass<EWwisePackagingStrategy> { enum { Value = true }; };
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwisePackagingStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
