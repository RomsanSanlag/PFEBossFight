// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseObjectUtils/Public/WwiseUnrealObjectHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseUnrealObjectHelper() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseObjectUtils();
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper();
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper();
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References

// Begin ScriptStruct FAkUInt64Wrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt64Wrapper;
class UScriptStruct* FAkUInt64Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt64Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(), TEXT("AkUInt64Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton;
}
template<> WWISEOBJECTUTILS_API UScriptStruct* StaticStruct<FAkUInt64Wrapper>()
{
	return FAkUInt64Wrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUint64" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt64 Value" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UInt64Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt64Wrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value = { "UInt64Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkUInt64Wrapper, UInt64Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UInt64Value_MetaData), NewProp_UInt64Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseObjectUtils,
	nullptr,
	&NewStructOps,
	"AkUInt64Wrapper",
	Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers),
	sizeof(FAkUInt64Wrapper),
	alignof(FAkUInt64Wrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton;
}
// End ScriptStruct FAkUInt64Wrapper

// Begin ScriptStruct FAkUInt32Wrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt32Wrapper;
class UScriptStruct* FAkUInt32Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt32Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(), TEXT("AkUInt32Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton;
}
template<> WWISEOBJECTUTILS_API UScriptStruct* StaticStruct<FAkUInt32Wrapper>()
{
	return FAkUInt32Wrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUInt32" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt32 Value" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt32Wrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value = { "UInt32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkUInt32Wrapper, UInt32Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UInt32Value_MetaData), NewProp_UInt32Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseObjectUtils,
	nullptr,
	&NewStructOps,
	"AkUInt32Wrapper",
	Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers),
	sizeof(FAkUInt32Wrapper),
	alignof(FAkUInt32Wrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton;
}
// End ScriptStruct FAkUInt32Wrapper

// Begin ScriptStruct FAkOutputDeviceID
static_assert(std::is_polymorphic<FAkOutputDeviceID>() == std::is_polymorphic<FAkUInt64Wrapper>(), "USTRUCT FAkOutputDeviceID cannot be polymorphic unless super FAkUInt64Wrapper is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkOutputDeviceID;
class UScriptStruct* FAkOutputDeviceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputDeviceID, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(), TEXT("AkOutputDeviceID"));
	}
	return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton;
}
template<> WWISEOBJECTUTILS_API UScriptStruct* StaticStruct<FAkOutputDeviceID>()
{
	return FAkOutputDeviceID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkOutputDeviceID" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputDeviceID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseObjectUtils,
	Z_Construct_UScriptStruct_FAkUInt64Wrapper,
	&NewStructOps,
	"AkOutputDeviceID",
	nullptr,
	0,
	sizeof(FAkOutputDeviceID),
	alignof(FAkOutputDeviceID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton;
}
// End ScriptStruct FAkOutputDeviceID

// Begin ScriptStruct FAkUniqueID
static_assert(std::is_polymorphic<FAkUniqueID>() == std::is_polymorphic<FAkUInt32Wrapper>(), "USTRUCT FAkUniqueID cannot be polymorphic unless super FAkUInt32Wrapper is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUniqueID;
class UScriptStruct* FAkUniqueID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUniqueID, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(), TEXT("AkUniqueID"));
	}
	return Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton;
}
template<> WWISEOBJECTUTILS_API UScriptStruct* StaticStruct<FAkUniqueID>()
{
	return FAkUniqueID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkUniqueID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUniqueID" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUniqueID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUniqueID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseObjectUtils,
	Z_Construct_UScriptStruct_FAkUInt32Wrapper,
	&NewStructOps,
	"AkUniqueID",
	nullptr,
	0,
	sizeof(FAkUniqueID),
	alignof(FAkUniqueID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID()
{
	if (!Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton, Z_Construct_UScriptStruct_FAkUniqueID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton;
}
// End ScriptStruct FAkUniqueID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkUInt64Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps, TEXT("AkUInt64Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt64Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt64Wrapper), 3847756034U) },
		{ FAkUInt32Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps, TEXT("AkUInt32Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt32Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt32Wrapper), 283576164U) },
		{ FAkOutputDeviceID::StaticStruct, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps, TEXT("AkOutputDeviceID"), &Z_Registration_Info_UScriptStruct_AkOutputDeviceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputDeviceID), 2817702211U) },
		{ FAkUniqueID::StaticStruct, Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps, TEXT("AkUniqueID"), &Z_Registration_Info_UScriptStruct_AkUniqueID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUniqueID), 3690017339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h_441028269(TEXT("/Script/WwiseObjectUtils"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
