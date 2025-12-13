// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudio_init() {}
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AkAudio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AkAudio()
	{
		if (!Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AkAudio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB9A11A75,
				0xD82CBCC6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AkAudio(Z_Construct_UPackage__Script_AkAudio, TEXT("/Script/AkAudio"), Z_Registration_Info_UPackage__Script_AkAudio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB9A11A75, 0xD82CBCC6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
