// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSurfaceReflectorSetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTexture;
struct FAkSurfacePoly;
#ifdef AKAUDIO_AkSurfaceReflectorSetComponent_generated_h
#error "AkSurfaceReflectorSetComponent.generated.h already included, missing '#pragma once' in AkSurfaceReflectorSetComponent.h"
#endif
#define AKAUDIO_AkSurfaceReflectorSetComponent_generated_h

#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnableDiffraction); \
	DECLARE_FUNCTION(execUpdateAcousticProperties); \
	DECLARE_FUNCTION(execSetAcousticTexture); \
	DECLARE_FUNCTION(execSetTransmissionLoss); \
	DECLARE_FUNCTION(execSetEnableSurface); \
	DECLARE_FUNCTION(execSetSurfaceProperties); \
	DECLARE_FUNCTION(execSetEnable); \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet); \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet); \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet);


#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics; \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent)


#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent) \
	NO_API virtual ~UAkSurfaceReflectorSetComponent();


#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_32_PROLOG
#define FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSurfaceReflectorSetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
