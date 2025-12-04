// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkDeprecated.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDeprecated() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset();
AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder();
AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset();
AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData();
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkAssetData
void UAkAssetData::StaticRegisterNativesUAkAssetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetData);
UClass* Z_Construct_UClass_UAkAssetData_NoRegister()
{
	return UAkAssetData::StaticClass();
}
struct Z_Construct_UClass_UAkAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These classes are deprecated but we use them during migration to clean up old assets\n" },
#endif
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These classes are deprecated but we use them during migration to clean up old assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetData_Statics::ClassParams = {
	&UAkAssetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAssetData()
{
	if (!Z_Registration_Info_UClass_UAkAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetData.OuterSingleton, Z_Construct_UClass_UAkAssetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetData.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAssetData>()
{
	return UAkAssetData::StaticClass();
}
UAkAssetData::UAkAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetData);
UAkAssetData::~UAkAssetData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetData)
// End Class UAkAssetData

// Begin Class UAkAssetPlatformData
void UAkAssetPlatformData::StaticRegisterNativesUAkAssetPlatformData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetPlatformData);
UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister()
{
	return UAkAssetPlatformData::StaticClass();
}
struct Z_Construct_UClass_UAkAssetPlatformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetDataPerPlatform_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetDataPerPlatform_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetDataPerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetDataPerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0104000800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp = { "AssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0100000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0144000800022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAssetPlatformData, AssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetDataPerPlatform_MetaData), NewProp_AssetDataPerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAssetData_MetaData), NewProp_CurrentAssetData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams = {
	&UAkAssetPlatformData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAssetPlatformData()
{
	if (!Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton, Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkAssetPlatformData>()
{
	return UAkAssetPlatformData::StaticClass();
}
UAkAssetPlatformData::UAkAssetPlatformData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetPlatformData);
UAkAssetPlatformData::~UAkAssetPlatformData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetPlatformData)
// End Class UAkAssetPlatformData

// Begin Class UAkMediaAssetData
void UAkMediaAssetData::StaticRegisterNativesUAkMediaAssetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAssetData);
UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister()
{
	return UAkMediaAssetData::StaticClass();
}
struct Z_Construct_UClass_UAkMediaAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams = {
	&UAkMediaAssetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkMediaAssetData()
{
	if (!Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton, Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkMediaAssetData>()
{
	return UAkMediaAssetData::StaticClass();
}
UAkMediaAssetData::UAkMediaAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAssetData);
UAkMediaAssetData::~UAkMediaAssetData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAssetData)
// End Class UAkMediaAssetData

// Begin Class UAkMediaAsset
void UAkMediaAsset::StaticRegisterNativesUAkMediaAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAsset);
UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister()
{
	return UAkMediaAsset::StaticClass();
}
struct Z_Construct_UClass_UAkMediaAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaAssetDataPerPlatform_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaAssetDataPerPlatform_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MediaAssetDataPerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MediaAssetDataPerPlatform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp = { "MediaAssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0144000000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMediaAsset, MediaAssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaAssetDataPerPlatform_MetaData), NewProp_MediaAssetDataPerPlatform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams = {
	&UAkMediaAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkMediaAsset()
{
	if (!Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton, Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkMediaAsset>()
{
	return UAkMediaAsset::StaticClass();
}
UAkMediaAsset::UAkMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAsset);
UAkMediaAsset::~UAkMediaAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAsset)
// End Class UAkMediaAsset

// Begin Class UAkLocalizedMediaAsset
void UAkLocalizedMediaAsset::StaticRegisterNativesUAkLocalizedMediaAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLocalizedMediaAsset);
UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister()
{
	return UAkLocalizedMediaAsset::StaticClass();
}
struct Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams = {
	&UAkLocalizedMediaAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkLocalizedMediaAsset()
{
	if (!Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton, Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkLocalizedMediaAsset>()
{
	return UAkLocalizedMediaAsset::StaticClass();
}
UAkLocalizedMediaAsset::UAkLocalizedMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLocalizedMediaAsset);
UAkLocalizedMediaAsset::~UAkLocalizedMediaAsset() {}
// End Class UAkLocalizedMediaAsset

// Begin Class UAkExternalMediaAsset
void UAkExternalMediaAsset::StaticRegisterNativesUAkExternalMediaAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkExternalMediaAsset);
UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister()
{
	return UAkExternalMediaAsset::StaticClass();
}
struct Z_Construct_UClass_UAkExternalMediaAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams = {
	&UAkExternalMediaAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkExternalMediaAsset()
{
	if (!Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton, Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkExternalMediaAsset>()
{
	return UAkExternalMediaAsset::StaticClass();
}
UAkExternalMediaAsset::UAkExternalMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalMediaAsset);
UAkExternalMediaAsset::~UAkExternalMediaAsset() {}
// End Class UAkExternalMediaAsset

// Begin Class UAkFolder
void UAkFolder::StaticRegisterNativesUAkFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkFolder);
UClass* Z_Construct_UClass_UAkFolder_NoRegister()
{
	return UAkFolder::StaticClass();
}
struct Z_Construct_UClass_UAkFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioType,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkFolder_Statics::ClassParams = {
	&UAkFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkFolder()
{
	if (!Z_Registration_Info_UClass_UAkFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkFolder.OuterSingleton, Z_Construct_UClass_UAkFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkFolder.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkFolder>()
{
	return UAkFolder::StaticClass();
}
UAkFolder::UAkFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkFolder);
UAkFolder::~UAkFolder() {}
// End Class UAkFolder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetData, UAkAssetData::StaticClass, TEXT("UAkAssetData"), &Z_Registration_Info_UClass_UAkAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetData), 3968502187U) },
		{ Z_Construct_UClass_UAkAssetPlatformData, UAkAssetPlatformData::StaticClass, TEXT("UAkAssetPlatformData"), &Z_Registration_Info_UClass_UAkAssetPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetPlatformData), 1522280492U) },
		{ Z_Construct_UClass_UAkMediaAssetData, UAkMediaAssetData::StaticClass, TEXT("UAkMediaAssetData"), &Z_Registration_Info_UClass_UAkMediaAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAssetData), 975193615U) },
		{ Z_Construct_UClass_UAkMediaAsset, UAkMediaAsset::StaticClass, TEXT("UAkMediaAsset"), &Z_Registration_Info_UClass_UAkMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAsset), 1831428420U) },
		{ Z_Construct_UClass_UAkLocalizedMediaAsset, UAkLocalizedMediaAsset::StaticClass, TEXT("UAkLocalizedMediaAsset"), &Z_Registration_Info_UClass_UAkLocalizedMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLocalizedMediaAsset), 2896422796U) },
		{ Z_Construct_UClass_UAkExternalMediaAsset, UAkExternalMediaAsset::StaticClass, TEXT("UAkExternalMediaAsset"), &Z_Registration_Info_UClass_UAkExternalMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkExternalMediaAsset), 665866858U) },
		{ Z_Construct_UClass_UAkFolder, UAkFolder::StaticClass, TEXT("UAkFolder"), &Z_Registration_Info_UClass_UAkFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkFolder), 1658998029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h_4165634390(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
