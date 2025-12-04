// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Public/AkAssetFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetFactories() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkEffectShareSetFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkEffectShareSetFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UAkAssetFactory
void UAkAssetFactory::StaticRegisterNativesUAkAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetFactory);
UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister()
{
	return UAkAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UAkAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams = {
	&UAkAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAssetFactory()
{
	if (!Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton, Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAssetFactory>()
{
	return UAkAssetFactory::StaticClass();
}
UAkAssetFactory::UAkAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetFactory);
UAkAssetFactory::~UAkAssetFactory() {}
// End Class UAkAssetFactory

// Begin Class UAkAcousticTextureFactory
void UAkAcousticTextureFactory::StaticRegisterNativesUAkAcousticTextureFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTextureFactory);
UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister()
{
	return UAkAcousticTextureFactory::StaticClass();
}
struct Z_Construct_UClass_UAkAcousticTextureFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAcousticTextureFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams = {
	&UAkAcousticTextureFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAcousticTextureFactory()
{
	if (!Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton, Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAcousticTextureFactory>()
{
	return UAkAcousticTextureFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTextureFactory);
UAkAcousticTextureFactory::~UAkAcousticTextureFactory() {}
// End Class UAkAcousticTextureFactory

// Begin Class UAkAudioEventFactory
void UAkAudioEventFactory::StaticRegisterNativesUAkAudioEventFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioEventFactory);
UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister()
{
	return UAkAudioEventFactory::StaticClass();
}
struct Z_Construct_UClass_UAkAudioEventFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAudioEventFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams = {
	&UAkAudioEventFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioEventFactory()
{
	if (!Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton, Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAudioEventFactory>()
{
	return UAkAudioEventFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventFactory);
UAkAudioEventFactory::~UAkAudioEventFactory() {}
// End Class UAkAudioEventFactory

// Begin Class UAkAuxBusFactory
void UAkAuxBusFactory::StaticRegisterNativesUAkAuxBusFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAuxBusFactory);
UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister()
{
	return UAkAuxBusFactory::StaticClass();
}
struct Z_Construct_UClass_UAkAuxBusFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBusFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAuxBusFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBusFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams = {
	&UAkAuxBusFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAuxBusFactory()
{
	if (!Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton, Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAuxBusFactory>()
{
	return UAkAuxBusFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBusFactory);
UAkAuxBusFactory::~UAkAuxBusFactory() {}
// End Class UAkAuxBusFactory

// Begin Class UAkRtpcFactory
void UAkRtpcFactory::StaticRegisterNativesUAkRtpcFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkRtpcFactory);
UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister()
{
	return UAkRtpcFactory::StaticClass();
}
struct Z_Construct_UClass_UAkRtpcFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpcFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkRtpcFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpcFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams = {
	&UAkRtpcFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkRtpcFactory()
{
	if (!Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton, Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkRtpcFactory>()
{
	return UAkRtpcFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRtpcFactory);
UAkRtpcFactory::~UAkRtpcFactory() {}
// End Class UAkRtpcFactory

// Begin Class UAkTriggerFactory
void UAkTriggerFactory::StaticRegisterNativesUAkTriggerFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkTriggerFactory);
UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister()
{
	return UAkTriggerFactory::StaticClass();
}
struct Z_Construct_UClass_UAkTriggerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTriggerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkTriggerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTriggerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams = {
	&UAkTriggerFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkTriggerFactory()
{
	if (!Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton, Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkTriggerFactory>()
{
	return UAkTriggerFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkTriggerFactory);
UAkTriggerFactory::~UAkTriggerFactory() {}
// End Class UAkTriggerFactory

// Begin Class UAkStateValueFactory
void UAkStateValueFactory::StaticRegisterNativesUAkStateValueFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkStateValueFactory);
UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister()
{
	return UAkStateValueFactory::StaticClass();
}
struct Z_Construct_UClass_UAkStateValueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// mlarouche - For now Switch and State factory are only used in drag & drop\n" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mlarouche - For now Switch and State factory are only used in drag & drop" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkStateValueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkStateValueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams = {
	&UAkStateValueFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkStateValueFactory()
{
	if (!Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton, Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkStateValueFactory>()
{
	return UAkStateValueFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkStateValueFactory);
UAkStateValueFactory::~UAkStateValueFactory() {}
// End Class UAkStateValueFactory

// Begin Class UAkSwitchValueFactory
void UAkSwitchValueFactory::StaticRegisterNativesUAkSwitchValueFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSwitchValueFactory);
UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister()
{
	return UAkSwitchValueFactory::StaticClass();
}
struct Z_Construct_UClass_UAkSwitchValueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchValueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkSwitchValueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams = {
	&UAkSwitchValueFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkSwitchValueFactory()
{
	if (!Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton, Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkSwitchValueFactory>()
{
	return UAkSwitchValueFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSwitchValueFactory);
UAkSwitchValueFactory::~UAkSwitchValueFactory() {}
// End Class UAkSwitchValueFactory

// Begin Class UAkEffectShareSetFactory
void UAkEffectShareSetFactory::StaticRegisterNativesUAkEffectShareSetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkEffectShareSetFactory);
UClass* Z_Construct_UClass_UAkEffectShareSetFactory_NoRegister()
{
	return UAkEffectShareSetFactory::StaticClass();
}
struct Z_Construct_UClass_UAkEffectShareSetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkEffectShareSetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEffectShareSetFactory_Statics::ClassParams = {
	&UAkEffectShareSetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkEffectShareSetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkEffectShareSetFactory()
{
	if (!Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton, Z_Construct_UClass_UAkEffectShareSetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEffectShareSetFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkEffectShareSetFactory>()
{
	return UAkEffectShareSetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEffectShareSetFactory);
UAkEffectShareSetFactory::~UAkEffectShareSetFactory() {}
// End Class UAkEffectShareSetFactory

// Begin Class UAkAudioDeviceShareSetFactory
void UAkAudioDeviceShareSetFactory::StaticRegisterNativesUAkAudioDeviceShareSetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioDeviceShareSetFactory);
UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory_NoRegister()
{
	return UAkAudioDeviceShareSetFactory::StaticClass();
}
struct Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AkAssetFactories.h" },
		{ "ModuleRelativePath", "Public/AkAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioDeviceShareSetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::ClassParams = {
	&UAkAudioDeviceShareSetFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkAudioDeviceShareSetFactory()
{
	if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton, Z_Construct_UClass_UAkAudioDeviceShareSetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAudioDeviceShareSetFactory>()
{
	return UAkAudioDeviceShareSetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioDeviceShareSetFactory);
UAkAudioDeviceShareSetFactory::~UAkAudioDeviceShareSetFactory() {}
// End Class UAkAudioDeviceShareSetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetFactory, UAkAssetFactory::StaticClass, TEXT("UAkAssetFactory"), &Z_Registration_Info_UClass_UAkAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetFactory), 2399623394U) },
		{ Z_Construct_UClass_UAkAcousticTextureFactory, UAkAcousticTextureFactory::StaticClass, TEXT("UAkAcousticTextureFactory"), &Z_Registration_Info_UClass_UAkAcousticTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTextureFactory), 776612514U) },
		{ Z_Construct_UClass_UAkAudioEventFactory, UAkAudioEventFactory::StaticClass, TEXT("UAkAudioEventFactory"), &Z_Registration_Info_UClass_UAkAudioEventFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioEventFactory), 1872407253U) },
		{ Z_Construct_UClass_UAkAuxBusFactory, UAkAuxBusFactory::StaticClass, TEXT("UAkAuxBusFactory"), &Z_Registration_Info_UClass_UAkAuxBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBusFactory), 2127891715U) },
		{ Z_Construct_UClass_UAkRtpcFactory, UAkRtpcFactory::StaticClass, TEXT("UAkRtpcFactory"), &Z_Registration_Info_UClass_UAkRtpcFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpcFactory), 249472718U) },
		{ Z_Construct_UClass_UAkTriggerFactory, UAkTriggerFactory::StaticClass, TEXT("UAkTriggerFactory"), &Z_Registration_Info_UClass_UAkTriggerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTriggerFactory), 2927660967U) },
		{ Z_Construct_UClass_UAkStateValueFactory, UAkStateValueFactory::StaticClass, TEXT("UAkStateValueFactory"), &Z_Registration_Info_UClass_UAkStateValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkStateValueFactory), 1757269542U) },
		{ Z_Construct_UClass_UAkSwitchValueFactory, UAkSwitchValueFactory::StaticClass, TEXT("UAkSwitchValueFactory"), &Z_Registration_Info_UClass_UAkSwitchValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSwitchValueFactory), 138086156U) },
		{ Z_Construct_UClass_UAkEffectShareSetFactory, UAkEffectShareSetFactory::StaticClass, TEXT("UAkEffectShareSetFactory"), &Z_Registration_Info_UClass_UAkEffectShareSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSetFactory), 2669899778U) },
		{ Z_Construct_UClass_UAkAudioDeviceShareSetFactory, UAkAudioDeviceShareSetFactory::StaticClass, TEXT("UAkAudioDeviceShareSetFactory"), &Z_Registration_Info_UClass_UAkAudioDeviceShareSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioDeviceShareSetFactory), 1998069761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h_1677117793(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_AudiokineticTools_Public_AkAssetFactories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
