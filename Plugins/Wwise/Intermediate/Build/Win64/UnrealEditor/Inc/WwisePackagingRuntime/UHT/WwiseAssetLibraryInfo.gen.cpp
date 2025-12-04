// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingRuntime/Public/Wwise/Packaging/WwiseAssetLibraryInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister();
WWISEPACKAGINGRUNTIME_API UEnum* Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType();
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo();
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryRef();
// End Cross Module References

// Begin Enum EWwiseAssetLibraryRefType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType;
static UEnum* EWwiseAssetLibraryRefType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(), TEXT("EWwiseAssetLibraryRefType"));
	}
	return Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UEnum* StaticEnum<EWwiseAssetLibraryRefType>()
{
	return EWwiseAssetLibraryRefType_StaticEnum();
}
struct Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * List of possible asset library references, as defined in the filtered assets\n */" },
#endif
		{ "ExternalSource.Name", "EWwiseAssetLibraryRefType::ExternalSource" },
		{ "InitBank.Name", "EWwiseAssetLibraryRefType::InitBank" },
		{ "Media.Name", "EWwiseAssetLibraryRefType::Media" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
		{ "SoundBank.Name", "EWwiseAssetLibraryRefType::SoundBank" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of possible asset library references, as defined in the filtered assets" },
#endif
		{ "Unknown.Name", "EWwiseAssetLibraryRefType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseAssetLibraryRefType::Unknown", (int64)EWwiseAssetLibraryRefType::Unknown },
		{ "EWwiseAssetLibraryRefType::InitBank", (int64)EWwiseAssetLibraryRefType::InitBank },
		{ "EWwiseAssetLibraryRefType::SoundBank", (int64)EWwiseAssetLibraryRefType::SoundBank },
		{ "EWwiseAssetLibraryRefType::Media", (int64)EWwiseAssetLibraryRefType::Media },
		{ "EWwiseAssetLibraryRefType::ExternalSource", (int64)EWwiseAssetLibraryRefType::ExternalSource },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	"EWwiseAssetLibraryRefType",
	"EWwiseAssetLibraryRefType",
	Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType()
{
	if (!Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.InnerSingleton, Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType.InnerSingleton;
}
// End Enum EWwiseAssetLibraryRefType

// Begin ScriptStruct FWwiseAssetLibraryRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef;
class UScriptStruct* FWwiseAssetLibraryRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryRef, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(), TEXT("WwiseAssetLibraryRef"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UScriptStruct* StaticStruct<FWwiseAssetLibraryRef>()
{
	return FWwiseAssetLibraryRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * One asset library reference towards a Wwise asset. This is the equivalent of a short-hand Wwise Project Database's AnyRef.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One asset library reference towards a Wwise asset. This is the equivalent of a short-hand Wwise Project Database's AnyRef." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditCondition", "Type == EWwiseAssetLibraryRefType::Media" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Type), Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2494850664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, LanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageId_MetaData), NewProp_LanguageId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_LanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewProp_SoundBankId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryRef",
	Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::PropPointers),
	sizeof(FWwiseAssetLibraryRef),
	alignof(FWwiseAssetLibraryRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryRef()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef.InnerSingleton;
}
// End ScriptStruct FWwiseAssetLibraryRef

// Begin ScriptStruct FWwiseAssetLibraryInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo;
class UScriptStruct* FWwiseAssetLibraryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(), TEXT("WwiseAssetLibraryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.OuterSingleton;
}
template<> WWISEPACKAGINGRUNTIME_API UScriptStruct* StaticStruct<FWwiseAssetLibraryInfo>()
{
	return FWwiseAssetLibraryInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Information used to define the contents included in the Asset Library, to be cooked in the FWwiseAssetLibraryCookedData.\n */" },
#endif
		{ "DisplayName", "Asset Library Info" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information used to define the contents included in the Asset Library, to be cooked in the FWwiseAssetLibraryCookedData." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Filters to use to select assets to include in this Asset Library.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters to use to select assets to include in this Asset Library." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedFilters_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shared filters to use to select assets to include in this Asset Library, and that can be applied to multiple Asset Libraries.\n\x09 */" },
#endif
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared filters to use to select assets to include in this Asset Library, and that can be applied to multiple Asset Libraries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SharedFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedFilters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreloadedFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreloadedFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibraryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_SharedFilters_Inner = { "SharedFilters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_SharedFilters = { "SharedFilters", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, SharedFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedFilters_MetaData), NewProp_SharedFilters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_PreloadedFilters_Inner = { "PreloadedFilters", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_PreloadedFilters = { "PreloadedFilters", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, PreloadedFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreloadedFilters_MetaData), NewProp_PreloadedFilters_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_SharedFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_SharedFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_PreloadedFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewProp_PreloadedFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryInfo",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::PropPointers), 0),
	sizeof(FWwiseAssetLibraryInfo),
	alignof(FWwiseAssetLibraryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo.InnerSingleton;
}
// End ScriptStruct FWwiseAssetLibraryInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWwiseAssetLibraryRefType_StaticEnum, TEXT("EWwiseAssetLibraryRefType"), &Z_Registration_Info_UEnum_EWwiseAssetLibraryRefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2494850664U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAssetLibraryRef::StaticStruct, Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewStructOps, TEXT("WwiseAssetLibraryRef"), &Z_Registration_Info_UScriptStruct_WwiseAssetLibraryRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryRef), 3822889118U) },
		{ FWwiseAssetLibraryInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewStructOps, TEXT("WwiseAssetLibraryInfo"), &Z_Registration_Info_UScriptStruct_WwiseAssetLibraryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryInfo), 2298368809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_784578881(TEXT("/Script/WwisePackagingRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clemc_Documents_GitHub_PFEBossFight_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
