// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwiseReloadLanguage.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_WwiseReloadLanguage_generated_h
#error "WwiseReloadLanguage.generated.h already included, missing '#pragma once' in WwiseReloadLanguage.h"
#endif
#define WWISERESOURCELOADER_WwiseReloadLanguage_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h


#define FOREACH_ENUM_EWWISERELOADLANGUAGE(op) \
	op(EWwiseReloadLanguage::Manual) \
	op(EWwiseReloadLanguage::Immediate) \
	op(EWwiseReloadLanguage::Safe) 

enum class EWwiseReloadLanguage;
template<> struct TIsUEnumClass<EWwiseReloadLanguage> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseReloadLanguage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
