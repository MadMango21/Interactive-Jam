// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPlayerCameraManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPlayerCameraManager();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPlayerCameraManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	void ANinjaPlayerCameraManager::StaticRegisterNativesANinjaPlayerCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaPlayerCameraManager);
	UClass* Z_Construct_UClass_ANinjaPlayerCameraManager_NoRegister()
	{
		return ANinjaPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that defines the master camera that the player actually uses to look\n * through. This type is able to handle arbitrary collision capsule orientation.\n */" },
		{ "IncludePath", "NinjaPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/NinjaPlayerCameraManager.h" },
		{ "ToolTip", "Object that defines the master camera that the player actually uses to look\nthrough. This type is able to handle arbitrary collision capsule orientation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::ClassParams = {
		&ANinjaPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_ANinjaPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANinjaPlayerCameraManager.OuterSingleton;
	}
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaPlayerCameraManager>()
	{
		return ANinjaPlayerCameraManager::StaticClass();
	}
	ANinjaPlayerCameraManager::ANinjaPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPlayerCameraManager);
	ANinjaPlayerCameraManager::~ANinjaPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaPlayerCameraManager, ANinjaPlayerCameraManager::StaticClass, TEXT("ANinjaPlayerCameraManager"), &Z_Registration_Info_UClass_ANinjaPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaPlayerCameraManager), 2195748756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPlayerCameraManager_h_1247048224(TEXT("/Script/NinjaCharacter"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
