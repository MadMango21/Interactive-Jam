// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaProjectileMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaProjectileMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	void UNinjaProjectileMovementComponent::StaticRegisterNativesUNinjaProjectileMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaProjectileMovementComponent);
	UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent_NoRegister()
	{
		return UNinjaProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowGravityDirection_MetaData[];
#endif
		static void NewProp_bFollowGravityDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowGravityDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * A ProjectileMovementComponent updates the position of another component each\n * frame. This type allows overriding the gravity direction.\n */" },
		{ "IncludePath", "NinjaProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaProjectileMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ProjectileMovementComponent updates the position of another component each\nframe. This type allows overriding the gravity direction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData[] = {
		{ "Category", "NinjaProjectileMovement" },
		{ "Comment", "/** If true, rotate projectile trajectory with gravity direction changes. */" },
		{ "ModuleRelativePath", "Public/NinjaProjectileMovementComponent.h" },
		{ "ToolTip", "If true, rotate projectile trajectory with gravity direction changes." },
	};
#endif
	void Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_SetBit(void* Obj)
	{
		((UNinjaProjectileMovementComponent*)Obj)->bFollowGravityDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection = { "bFollowGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaProjectileMovementComponent), &Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaProjectileMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::ClassParams = {
		&UNinjaProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UNinjaProjectileMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaProjectileMovementComponent.OuterSingleton, Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNinjaProjectileMovementComponent.OuterSingleton;
	}
	template<> NINJACHARACTER_API UClass* StaticClass<UNinjaProjectileMovementComponent>()
	{
		return UNinjaProjectileMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaProjectileMovementComponent);
	UNinjaProjectileMovementComponent::~UNinjaProjectileMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaProjectileMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaProjectileMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaProjectileMovementComponent, UNinjaProjectileMovementComponent::StaticClass, TEXT("UNinjaProjectileMovementComponent"), &Z_Registration_Info_UClass_UNinjaProjectileMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaProjectileMovementComponent), 1313089145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaProjectileMovementComponent_h_3494130426(TEXT("/Script/NinjaCharacter"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaProjectileMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaProjectileMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
