// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackagingEditor/Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterLanguage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilterLanguage() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackagingEditor();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage();
WWISEPACKAGINGEDITOR_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter();
// End Cross Module References

// Begin Class UWwiseAssetLibraryFilterLanguage Function GetAvailableLanguages
struct Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics
{
	struct WwiseAssetLibraryFilterLanguage_eventGetAvailableLanguages_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterLanguage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseAssetLibraryFilterLanguage_eventGetAvailableLanguages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage, nullptr, "GetAvailableLanguages", nullptr, nullptr, Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::WwiseAssetLibraryFilterLanguage_eventGetAvailableLanguages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::WwiseAssetLibraryFilterLanguage_eventGetAvailableLanguages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseAssetLibraryFilterLanguage::execGetAvailableLanguages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetAvailableLanguages();
	P_NATIVE_END;
}
// End Class UWwiseAssetLibraryFilterLanguage Function GetAvailableLanguages

// Begin Class UWwiseAssetLibraryFilterLanguage
void UWwiseAssetLibraryFilterLanguage::StaticRegisterNativesUWwiseAssetLibraryFilterLanguage()
{
	UClass* Class = UWwiseAssetLibraryFilterLanguage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableLanguages", &UWwiseAssetLibraryFilterLanguage::execGetAvailableLanguages },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibraryFilterLanguage);
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_NoRegister()
{
	return UWwiseAssetLibraryFilterLanguage::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Filter" },
		{ "DisplayName", "Keep Assets from a Specific Language" },
		{ "IncludePath", "Wwise/Packaging/Filters/WwiseAssetLibraryFilterLanguage.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterLanguage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLanguages_MetaData[] = {
		{ "Category", "Default" },
		{ "GetOptions", "GetAvailableLanguages" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/Filters/WwiseAssetLibraryFilterLanguage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedLanguages_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedLanguages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseAssetLibraryFilterLanguage_GetAvailableLanguages, "GetAvailableLanguages" }, // 333474034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilterLanguage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::NewProp_SelectedLanguages_ElementProp = { "SelectedLanguages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::NewProp_SelectedLanguages = { "SelectedLanguages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryFilterLanguage, SelectedLanguages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLanguages_MetaData), NewProp_SelectedLanguages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::NewProp_SelectedLanguages_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::NewProp_SelectedLanguages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseAssetLibraryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackagingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::ClassParams = {
	&UWwiseAssetLibraryFilterLanguage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilterLanguage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilterLanguage.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilterLanguage.OuterSingleton;
}
template<> WWISEPACKAGINGEDITOR_API UClass* StaticClass<UWwiseAssetLibraryFilterLanguage>()
{
	return UWwiseAssetLibraryFilterLanguage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibraryFilterLanguage);
UWwiseAssetLibraryFilterLanguage::~UWwiseAssetLibraryFilterLanguage() {}
// End Class UWwiseAssetLibraryFilterLanguage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterLanguage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilterLanguage, UWwiseAssetLibraryFilterLanguage::StaticClass, TEXT("UWwiseAssetLibraryFilterLanguage"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilterLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilterLanguage), 2904234464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterLanguage_h_1819623258(TEXT("/Script/WwisePackagingEditor"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterLanguage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackagingEditor_Public_Wwise_Packaging_Filters_WwiseAssetLibraryFilterLanguage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
