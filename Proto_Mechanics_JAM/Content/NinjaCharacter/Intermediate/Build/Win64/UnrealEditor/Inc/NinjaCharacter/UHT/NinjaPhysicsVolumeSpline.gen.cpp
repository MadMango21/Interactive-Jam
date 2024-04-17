// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaPhysicsVolumeSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPhysicsVolumeSpline() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolume();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	void ANinjaPhysicsVolumeSpline::StaticRegisterNativesANinjaPhysicsVolumeSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaPhysicsVolumeSpline);
	UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline_NoRegister()
	{
		return ANinjaPhysicsVolumeSpline::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANinjaPhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A PhysicsVolume is a bounding volume that affects Actor physics. This type\n * allows overriding the gravity direction with the help of a spline.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NinjaPhysicsVolumeSpline.h" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolumeSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PhysicsVolume is a bounding volume that affects Actor physics. This type\nallows overriding the gravity direction with the help of a spline." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** The SplineComponent subobject. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolumeSpline.h" },
		{ "ToolTip", "The SplineComponent subobject." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaPhysicsVolumeSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPhysicsVolumeSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::ClassParams = {
		&ANinjaPhysicsVolumeSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline()
	{
		if (!Z_Registration_Info_UClass_ANinjaPhysicsVolumeSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaPhysicsVolumeSpline.OuterSingleton, Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANinjaPhysicsVolumeSpline.OuterSingleton;
	}
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaPhysicsVolumeSpline>()
	{
		return ANinjaPhysicsVolumeSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPhysicsVolumeSpline);
	ANinjaPhysicsVolumeSpline::~ANinjaPhysicsVolumeSpline() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolumeSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolumeSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaPhysicsVolumeSpline, ANinjaPhysicsVolumeSpline::StaticClass, TEXT("ANinjaPhysicsVolumeSpline"), &Z_Registration_Info_UClass_ANinjaPhysicsVolumeSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaPhysicsVolumeSpline), 2304879781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolumeSpline_h_3913267332(TEXT("/Script/NinjaCharacter"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolumeSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolumeSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
