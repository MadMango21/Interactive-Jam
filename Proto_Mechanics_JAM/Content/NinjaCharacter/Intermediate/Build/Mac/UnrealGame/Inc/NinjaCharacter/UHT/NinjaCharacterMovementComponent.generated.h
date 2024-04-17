// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NINJACHARACTER_NinjaCharacterMovementComponent_generated_h
#error "NinjaCharacterMovementComponent.generated.h already included, missing '#pragma once' in NinjaCharacterMovementComponent.h"
#endif
#define NINJACHARACTER_NinjaCharacterMovementComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS \
	virtual void MulticastDisableAlignComponentToGravity_Implementation(); \
	virtual void MulticastEnableAlignComponentToGravity_Implementation(); \
	virtual void MulticastDisableAlignComponentToFloor_Implementation(); \
	virtual void MulticastEnableAlignComponentToFloor_Implementation(); \
	virtual void MulticastDisableAlignGravityToBase_Implementation(); \
	virtual void MulticastEnableAlignGravityToBase_Implementation(); \
	virtual void MulticastSetGravityScale_Implementation(float NewGravityScale); \
	virtual void MulticastSetCollisionGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetBoxGravityDirection_Implementation(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent); \
	virtual void MulticastSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetPlaneGravityDirection_Implementation(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal); \
	virtual void MulticastSetSplineGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetSegmentGravityDirection_Implementation(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd); \
	virtual void MulticastSetLineGravityDirection_Implementation(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd); \
	virtual void MulticastSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetPointGravityDirection_Implementation(FVector const& NewGravityPoint); \
	virtual void MulticastSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetFixedGravityDirection_Implementation(FVector const& NewFixedGravityDirection); \
 \
	DECLARE_FUNCTION(execMulticastDisableAlignComponentToGravity); \
	DECLARE_FUNCTION(execMulticastEnableAlignComponentToGravity); \
	DECLARE_FUNCTION(execSetAlignComponentToGravity); \
	DECLARE_FUNCTION(execMulticastDisableAlignComponentToFloor); \
	DECLARE_FUNCTION(execMulticastEnableAlignComponentToFloor); \
	DECLARE_FUNCTION(execSetAlignComponentToFloor); \
	DECLARE_FUNCTION(execMulticastDisableAlignGravityToBase); \
	DECLARE_FUNCTION(execMulticastEnableAlignGravityToBase); \
	DECLARE_FUNCTION(execSetAlignGravityToBase); \
	DECLARE_FUNCTION(execMulticastSetGravityScale); \
	DECLARE_FUNCTION(execMulticastSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execMulticastSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetPlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execMulticastSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetFixedGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetFinalGravityScale); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execOnComponentHit);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastDisableAlignComponentToGravity_Implementation(); \
	virtual void MulticastEnableAlignComponentToGravity_Implementation(); \
	virtual void MulticastDisableAlignComponentToFloor_Implementation(); \
	virtual void MulticastEnableAlignComponentToFloor_Implementation(); \
	virtual void MulticastDisableAlignGravityToBase_Implementation(); \
	virtual void MulticastEnableAlignGravityToBase_Implementation(); \
	virtual void MulticastSetGravityScale_Implementation(float NewGravityScale); \
	virtual void MulticastSetCollisionGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetBoxGravityDirection_Implementation(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent); \
	virtual void MulticastSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetPlaneGravityDirection_Implementation(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal); \
	virtual void MulticastSetSplineGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetSegmentGravityDirection_Implementation(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd); \
	virtual void MulticastSetLineGravityDirection_Implementation(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd); \
	virtual void MulticastSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetPointGravityDirection_Implementation(FVector const& NewGravityPoint); \
	virtual void MulticastSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void MulticastSetFixedGravityDirection_Implementation(FVector const& NewFixedGravityDirection); \
 \
	DECLARE_FUNCTION(execMulticastDisableAlignComponentToGravity); \
	DECLARE_FUNCTION(execMulticastEnableAlignComponentToGravity); \
	DECLARE_FUNCTION(execSetAlignComponentToGravity); \
	DECLARE_FUNCTION(execMulticastDisableAlignComponentToFloor); \
	DECLARE_FUNCTION(execMulticastEnableAlignComponentToFloor); \
	DECLARE_FUNCTION(execSetAlignComponentToFloor); \
	DECLARE_FUNCTION(execMulticastDisableAlignGravityToBase); \
	DECLARE_FUNCTION(execMulticastEnableAlignGravityToBase); \
	DECLARE_FUNCTION(execSetAlignGravityToBase); \
	DECLARE_FUNCTION(execMulticastSetGravityScale); \
	DECLARE_FUNCTION(execMulticastSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execMulticastSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetPlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execMulticastSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execMulticastSetFixedGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetFinalGravityScale); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execOnComponentHit);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCharacterMovementComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUNinjaCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCharacterMovementComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaCharacterMovementComponent(UNinjaCharacterMovementComponent&&); \
	NO_API UNinjaCharacterMovementComponent(const UNinjaCharacterMovementComponent&); \
public: \
	NO_API virtual ~UNinjaCharacterMovementComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaCharacterMovementComponent(UNinjaCharacterMovementComponent&&); \
	NO_API UNinjaCharacterMovementComponent(const UNinjaCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCharacterMovementComponent) \
	NO_API virtual ~UNinjaCharacterMovementComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class UNinjaCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
