// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Packaging/Filters/WwiseAssetLibraryTextFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEPACKAGINGEDITOR_WwiseAssetLibraryTextFilter_generated_h
#error "WwiseAssetLibraryTextFilter.generated.h already included, missing '#pragma once' in WwiseAssetLibraryTextFilter.h"
#endif
#define WWISEPACKAGINGEDITOR_WwiseAssetLibraryTextFilter_generated_h

#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAssetLibraryTextFilter(); \
	friend struct Z_Construct_UClass_UWwiseAssetLibraryTextFilter_Statics; \
public: \
	DECLARE_CLASS(UWwiseAssetLibraryTextFilter, UWwiseAssetLibraryFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwisePackagingEditor"), NO_API) \
	DECLARE_SERIALIZER(UWwiseAssetLibraryTextFilter)


#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWwiseAssetLibraryTextFilter(UWwiseAssetLibraryTextFilter&&); \
	UWwiseAssetLibraryTextFilter(const UWwiseAssetLibraryTextFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAssetLibraryTextFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAssetLibraryTextFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWwiseAssetLibraryTextFilter) \
	NO_API virtual ~UWwiseAssetLibraryTextFilter();


#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_37_PROLOG
#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<class UWwiseAssetLibraryTextFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryTextFilter_h


#define FOREACH_ENUM_EWWISEASSETLIBRARYTEXTFILTERTYPE(op) \
	op(EWwiseAssetLibraryTextFilterType::Name) \
	op(EWwiseAssetLibraryTextFilterType::SystemPath) \
	op(EWwiseAssetLibraryTextFilterType::PathInWwise) 

enum class EWwiseAssetLibraryTextFilterType : uint8;
template<> struct TIsUEnumClass<EWwiseAssetLibraryTextFilterType> { enum { Value = true }; };
template<> WWISEPACKAGINGEDITOR_API UEnum* StaticEnum<EWwiseAssetLibraryTextFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
