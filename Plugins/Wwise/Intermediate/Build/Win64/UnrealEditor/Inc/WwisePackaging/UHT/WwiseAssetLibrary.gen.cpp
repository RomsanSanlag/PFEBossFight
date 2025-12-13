// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwisePackaging/Public/Wwise/Packaging/WwiseAssetLibrary.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibrary() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwisePackaging();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary();
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary_NoRegister();
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary();
// End Cross Module References

// Begin Class UWwiseAssetLibrary Function LoadData
struct Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAssetLibrary, nullptr, "LoadData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWwiseAssetLibrary_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseAssetLibrary::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// End Class UWwiseAssetLibrary Function LoadData

// Begin Class UWwiseAssetLibrary Function UnloadData
struct Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics
{
	struct WwiseAssetLibrary_eventUnloadData_Parms
	{
		bool bAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "CPP_Default_bAsync", "false" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::NewProp_bAsync_SetBit(void* Obj)
{
	((WwiseAssetLibrary_eventUnloadData_Parms*)Obj)->bAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WwiseAssetLibrary_eventUnloadData_Parms), &Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAssetLibrary, nullptr, "UnloadData", nullptr, nullptr, Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::WwiseAssetLibrary_eventUnloadData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::WwiseAssetLibrary_eventUnloadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWwiseAssetLibrary::execUnloadData)
{
	P_GET_UBOOL(Z_Param_bAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadData(Z_Param_bAsync);
	P_NATIVE_END;
}
// End Class UWwiseAssetLibrary Function UnloadData

// Begin Class UWwiseAssetLibrary
void UWwiseAssetLibrary::StaticRegisterNativesUWwiseAssetLibrary()
{
	UClass* Class = UWwiseAssetLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadData", &UWwiseAssetLibrary::execLoadData },
		{ "UnloadData", &UWwiseAssetLibrary::execUnloadData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAssetLibrary);
UClass* Z_Construct_UClass_UWwiseAssetLibrary_NoRegister()
{
	return UWwiseAssetLibrary::StaticClass();
}
struct Z_Construct_UClass_UWwiseAssetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A group of Wwise Assets selected according to filter criteria.\n */" },
#endif
		{ "DisplayName", "Wwise Asset Library" },
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A group of Wwise Assets selected according to filter criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Automatically load SoundBanks and associated media associated when Unreal loads this asset.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically load SoundBanks and associated media associated when Unreal loads this asset." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallthrough_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// When selected, assets in this library can be found by other asset libraries as well.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When selected, assets in this library can be found by other asset libraries as well." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackageAssets_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Package the assets found according to the filter criteria. When this option is cleared, this library is only used for filtering.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package the assets found according to the filter criteria. When this option is cleared, this library is only used for filtering." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bAutoLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_EDITORONLY_DATA
	static void NewProp_bFallthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallthrough;
	static void NewProp_bPackageAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageAssets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseAssetLibrary_LoadData, "LoadData" }, // 860624465
		{ &Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData, "UnloadData" }, // 1380789865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
{
	((UWwiseAssetLibrary*)Obj)->bAutoLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bFallthrough_SetBit(void* Obj)
{
	((UWwiseAssetLibrary*)Obj)->bFallthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bFallthrough = { "bFallthrough", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bFallthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallthrough_MetaData), NewProp_bFallthrough_MetaData) };
void Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bPackageAssets_SetBit(void* Obj)
{
	((UWwiseAssetLibrary*)Obj)->bPackageAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bPackageAssets = { "bPackageAssets", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bPackageAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackageAssets_MetaData), NewProp_bPackageAssets_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAssetLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bAutoLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bFallthrough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAssetLibrary_Statics::NewProp_bPackageAssets,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWwiseAssetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAssetLibrary_Statics::ClassParams = {
	&UWwiseAssetLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWwiseAssetLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibrary_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAssetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAssetLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWwiseAssetLibrary()
{
	if (!Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton, Z_Construct_UClass_UWwiseAssetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton;
}
template<> WWISEPACKAGING_API UClass* StaticClass<UWwiseAssetLibrary>()
{
	return UWwiseAssetLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAssetLibrary);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWwiseAssetLibrary)
// End Class UWwiseAssetLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibrary, UWwiseAssetLibrary::StaticClass, TEXT("UWwiseAssetLibrary"), &Z_Registration_Info_UClass_UWwiseAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibrary), 1231374276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_353688439(TEXT("/Script/WwisePackaging"),
	Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_santi_Documents_UnrealProjects_BossFight_PFEBossFight_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
