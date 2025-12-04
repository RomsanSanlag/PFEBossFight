// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryDetailsCustomization() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef();
WWISEPACKAGINGRUNTIME_API UEnum* Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType();
// End Cross Module References

// Begin ScriptStruct FWwiseAssetLibraryTreeViewRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef;
class UScriptStruct* FWwiseAssetLibraryTreeViewRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef, (UObject*)Z_Construct_UPackage__Script_WwisePackagingEditor(), TEXT("WwiseAssetLibraryTreeViewRef"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UScriptStruct* StaticStruct<FWwiseAssetLibraryTreeViewRef>()
{
	return FWwiseAssetLibraryTreeViewRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is a helper adding the Language Name that is slow to calculate in sorting order.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a helper adding the Language Name that is slow to calculate in sorting order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryDetailsCustomization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryTreeViewRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryTreeViewRef, Type), Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2494850664
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryTreeViewRef, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryTreeViewRef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryTreeViewRef, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryTreeViewRef, LanguageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageName_MetaData), NewProp_LanguageName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewProp_LanguageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryTreeViewRef",
	Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::PropPointers),
	sizeof(FWwiseAssetLibraryTreeViewRef),
	alignof(FWwiseAssetLibraryTreeViewRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef.InnerSingleton;
}
// End ScriptStruct FWwiseAssetLibraryTreeViewRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwiseAssetLibraryDetailsCustomization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseAssetLibraryTreeViewRef::StaticStruct, Z_Construct_UScriptStruct_FWwiseAssetLibraryTreeViewRef_Statics::NewStructOps, TEXT("WwiseAssetLibraryTreeViewRef"), &Z_Registration_Info_UScriptStruct_WwiseAssetLibraryTreeViewRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryTreeViewRef), 1110082284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwiseAssetLibraryDetailsCustomization_h_759618056(TEXT("/Script/WwisePackagingEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwiseAssetLibraryDetailsCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_WwiseAssetLibraryDetailsCustomization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
