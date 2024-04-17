// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaPhysicsVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef NINJACHARACTER_NinjaPhysicsVolume_generated_h
#error "NinjaPhysicsVolume.generated.h already included, missing '#pragma once' in NinjaPhysicsVolume.h"
#endif
#define NINJACHARACTER_NinjaPhysicsVolume_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGravityScale); \
	DECLARE_FUNCTION(execGetGravityScale); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetFinalGravityScale); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravity);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGravityScale); \
	DECLARE_FUNCTION(execGetGravityScale); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetFinalGravityScale); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravity);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaPhysicsVolume(); \
	friend struct Z_Construct_UClass_ANinjaPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ANinjaPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaPhysicsVolume)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesANinjaPhysicsVolume(); \
	friend struct Z_Construct_UClass_ANinjaPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ANinjaPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaPhysicsVolume)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANinjaPhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaPhysicsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaPhysicsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaPhysicsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaPhysicsVolume(ANinjaPhysicsVolume&&); \
	NO_API ANinjaPhysicsVolume(const ANinjaPhysicsVolume&); \
public: \
	NO_API virtual ~ANinjaPhysicsVolume();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaPhysicsVolume(ANinjaPhysicsVolume&&); \
	NO_API ANinjaPhysicsVolume(const ANinjaPhysicsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaPhysicsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaPhysicsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaPhysicsVolume) \
	NO_API virtual ~ANinjaPhysicsVolume();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class ANinjaPhysicsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
