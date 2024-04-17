// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
enum class ENinjaGravityDirectionMode : uint8;
struct FHitResult;
#ifdef NINJACHARACTER_NinjaCharacter_generated_h
#error "NinjaCharacter.generated.h already included, missing '#pragma once' in NinjaCharacter.h"
#endif
#define NINJACHARACTER_NinjaCharacter_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_12_DELEGATE \
NINJACHARACTER_API void FCharMovementAxisChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementAxisChangedSignature, FVector const& OldAxisZ, FVector const& CurrentAxisZ);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_13_DELEGATE \
NINJACHARACTER_API void FCharMovementGravityChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementGravityChangedSignature, ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_14_DELEGATE \
NINJACHARACTER_API void FUnwalkableHitSignature_DelegateWrapper(const FMulticastScriptDelegate& UnwalkableHitSignature, FHitResult const& Hit);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSmoothComponentRotation); \
	DECLARE_FUNCTION(execSmoothComponentLocation); \
	DECLARE_FUNCTION(execSmoothComponentLocationAndRotation); \
	DECLARE_FUNCTION(execSetCharMovementAxis); \
	DECLARE_FUNCTION(execLaunchCharacterRotated);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSmoothComponentRotation); \
	DECLARE_FUNCTION(execSmoothComponentLocation); \
	DECLARE_FUNCTION(execSmoothComponentLocationAndRotation); \
	DECLARE_FUNCTION(execSetCharMovementAxis); \
	DECLARE_FUNCTION(execLaunchCharacterRotated);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCharacter)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesANinjaCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCharacter)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANinjaCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCharacter(ANinjaCharacter&&); \
	NO_API ANinjaCharacter(const ANinjaCharacter&); \
public: \
	NO_API virtual ~ANinjaCharacter();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCharacter(ANinjaCharacter&&); \
	NO_API ANinjaCharacter(const ANinjaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCharacter) \
	NO_API virtual ~ANinjaCharacter();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_22_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class ANinjaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
