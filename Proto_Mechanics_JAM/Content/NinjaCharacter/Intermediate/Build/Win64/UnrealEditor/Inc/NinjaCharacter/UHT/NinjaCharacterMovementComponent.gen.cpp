// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaCharacterMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCharacterMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister();
	NINJACHARACTER_API UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastDisableAlignComponentToGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDisableAlignComponentToGravity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastEnableAlignComponentToGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEnableAlignComponentToGravity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignComponentToGravity)
	{
		P_GET_UBOOL(Z_Param_bNewAlignComponentToGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignComponentToGravity(Z_Param_bNewAlignComponentToGravity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastDisableAlignComponentToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDisableAlignComponentToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastEnableAlignComponentToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEnableAlignComponentToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignComponentToFloor)
	{
		P_GET_UBOOL(Z_Param_bNewAlignComponentToFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignComponentToFloor(Z_Param_bNewAlignComponentToFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastDisableAlignGravityToBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDisableAlignGravityToBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastEnableAlignGravityToBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEnableAlignGravityToBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignGravityToBase)
	{
		P_GET_UBOOL(Z_Param_bNewAlignGravityToBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignGravityToBase(Z_Param_bNewAlignGravityToBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetGravityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetGravityScale_Implementation(Z_Param_NewGravityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetCollisionGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetCollisionGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetCollisionGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetBoxGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetBoxGravityDirectionFromActor_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetBoxGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityBoxOrigin);
		P_GET_STRUCT(FVector,Z_Param_NewGravityBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetBoxGravityDirection_Implementation(Z_Param_NewGravityBoxOrigin,Z_Param_NewGravityBoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetBoxGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetBoxGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirection(Z_Param_Out_NewGravityBoxOrigin,Z_Param_Out_NewGravityBoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetSplinePlaneGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSplinePlaneGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplinePlaneGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePlaneGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetPlaneGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityPlaneBase);
		P_GET_STRUCT(FVector,Z_Param_NewGravityPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetPlaneGravityDirection_Implementation(Z_Param_NewGravityPlaneBase,Z_Param_NewGravityPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execK2_SetPlaneGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneBase);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetPlaneGravityDirection(Z_Param_Out_NewGravityPlaneBase,Z_Param_Out_NewGravityPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetSplineGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSplineGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplineGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetSegmentGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravitySegmentStart);
		P_GET_STRUCT(FVector,Z_Param_NewGravitySegmentEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSegmentGravityDirection_Implementation(Z_Param_NewGravitySegmentStart,Z_Param_NewGravitySegmentEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSegmentGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSegmentGravityDirection(Z_Param_Out_NewGravitySegmentStart,Z_Param_Out_NewGravitySegmentEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetLineGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityLineStart);
		P_GET_STRUCT(FVector,Z_Param_NewGravityLineEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetLineGravityDirection_Implementation(Z_Param_NewGravityLineStart,Z_Param_NewGravityLineEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetLineGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineGravityDirection(Z_Param_Out_NewGravityLineStart,Z_Param_Out_NewGravityLineEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetPointGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetPointGravityDirectionFromActor_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetPointGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetPointGravityDirection_Implementation(Z_Param_NewGravityPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetPointGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetPointGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirection(Z_Param_Out_NewGravityPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetSplineTangentGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSplineTangentGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplineTangentGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineTangentGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execMulticastSetFixedGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewFixedGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetFixedGravityDirection_Implementation(Z_Param_NewFixedGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execK2_SetFixedGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetFixedGravityDirection(Z_Param_Out_NewGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execGetFinalGravityScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFinalGravityScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execGetGravityMagnitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityMagnitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execGetGravityDirection)
	{
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	struct NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirection_Parms
	{
		FVector NewGravityBoxOrigin;
		FVector NewGravityBoxExtent;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirectionFromActor_Parms
	{
		AActor* NewGravityActor;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetCollisionGravityDirection_Parms
	{
		AActor* NewGravityActor;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetFixedGravityDirection_Parms
	{
		FVector NewFixedGravityDirection;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetGravityScale_Parms
	{
		float NewGravityScale;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetLineGravityDirection_Parms
	{
		FVector NewGravityLineStart;
		FVector NewGravityLineEnd;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetPlaneGravityDirection_Parms
	{
		FVector NewGravityPlaneBase;
		FVector NewGravityPlaneNormal;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirection_Parms
	{
		FVector NewGravityPoint;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirectionFromActor_Parms
	{
		AActor* NewGravityActor;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetSegmentGravityDirection_Parms
	{
		FVector NewGravitySegmentStart;
		FVector NewGravitySegmentEnd;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetSplineGravityDirection_Parms
	{
		AActor* NewGravityActor;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetSplinePlaneGravityDirection_Parms
	{
		AActor* NewGravityActor;
	};
	struct NinjaCharacterMovementComponent_eventMulticastSetSplineTangentGravityDirection_Parms
	{
		AActor* NewGravityActor;
	};
	static FName NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor = FName(TEXT("MulticastDisableAlignComponentToFloor"));
	void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToFloor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity = FName(TEXT("MulticastDisableAlignComponentToGravity"));
	void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToGravity()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase = FName(TEXT("MulticastDisableAlignGravityToBase"));
	void UNinjaCharacterMovementComponent::MulticastDisableAlignGravityToBase()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor = FName(TEXT("MulticastEnableAlignComponentToFloor"));
	void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToFloor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity = FName(TEXT("MulticastEnableAlignComponentToGravity"));
	void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToGravity()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase = FName(TEXT("MulticastEnableAlignGravityToBase"));
	void UNinjaCharacterMovementComponent::MulticastEnableAlignGravityToBase()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection = FName(TEXT("MulticastSetBoxGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirection(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent)
	{
		NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirection_Parms Parms;
		Parms.NewGravityBoxOrigin=NewGravityBoxOrigin;
		Parms.NewGravityBoxExtent=NewGravityBoxExtent;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor = FName(TEXT("MulticastSetBoxGravityDirectionFromActor"));
	void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirectionFromActor(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirectionFromActor_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection = FName(TEXT("MulticastSetCollisionGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetCollisionGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetCollisionGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection = FName(TEXT("MulticastSetFixedGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetFixedGravityDirection(FVector const& NewFixedGravityDirection)
	{
		NinjaCharacterMovementComponent_eventMulticastSetFixedGravityDirection_Parms Parms;
		Parms.NewFixedGravityDirection=NewFixedGravityDirection;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetGravityScale = FName(TEXT("MulticastSetGravityScale"));
	void UNinjaCharacterMovementComponent::MulticastSetGravityScale(float NewGravityScale)
	{
		NinjaCharacterMovementComponent_eventMulticastSetGravityScale_Parms Parms;
		Parms.NewGravityScale=NewGravityScale;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetGravityScale),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection = FName(TEXT("MulticastSetLineGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetLineGravityDirection(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd)
	{
		NinjaCharacterMovementComponent_eventMulticastSetLineGravityDirection_Parms Parms;
		Parms.NewGravityLineStart=NewGravityLineStart;
		Parms.NewGravityLineEnd=NewGravityLineEnd;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection = FName(TEXT("MulticastSetPlaneGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetPlaneGravityDirection(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal)
	{
		NinjaCharacterMovementComponent_eventMulticastSetPlaneGravityDirection_Parms Parms;
		Parms.NewGravityPlaneBase=NewGravityPlaneBase;
		Parms.NewGravityPlaneNormal=NewGravityPlaneNormal;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection = FName(TEXT("MulticastSetPointGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirection(FVector const& NewGravityPoint)
	{
		NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirection_Parms Parms;
		Parms.NewGravityPoint=NewGravityPoint;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor = FName(TEXT("MulticastSetPointGravityDirectionFromActor"));
	void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirectionFromActor(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirectionFromActor_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection = FName(TEXT("MulticastSetSegmentGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetSegmentGravityDirection(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd)
	{
		NinjaCharacterMovementComponent_eventMulticastSetSegmentGravityDirection_Parms Parms;
		Parms.NewGravitySegmentStart=NewGravitySegmentStart;
		Parms.NewGravitySegmentEnd=NewGravitySegmentEnd;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection = FName(TEXT("MulticastSetSplineGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetSplineGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetSplineGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection = FName(TEXT("MulticastSetSplinePlaneGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetSplinePlaneGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetSplinePlaneGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection = FName(TEXT("MulticastSetSplineTangentGravityDirection"));
	void UNinjaCharacterMovementComponent::MulticastSetSplineTangentGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventMulticastSetSplineTangentGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection),&Parms);
	}
	void UNinjaCharacterMovementComponent::StaticRegisterNativesUNinjaCharacterMovementComponent()
	{
		UClass* Class = UNinjaCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFinalGravityScale", &UNinjaCharacterMovementComponent::execGetFinalGravityScale },
			{ "GetGravityDirection", &UNinjaCharacterMovementComponent::execGetGravityDirection },
			{ "GetGravityMagnitude", &UNinjaCharacterMovementComponent::execGetGravityMagnitude },
			{ "K2_SetFixedGravityDirection", &UNinjaCharacterMovementComponent::execK2_SetFixedGravityDirection },
			{ "K2_SetPlaneGravityDirection", &UNinjaCharacterMovementComponent::execK2_SetPlaneGravityDirection },
			{ "MulticastDisableAlignComponentToFloor", &UNinjaCharacterMovementComponent::execMulticastDisableAlignComponentToFloor },
			{ "MulticastDisableAlignComponentToGravity", &UNinjaCharacterMovementComponent::execMulticastDisableAlignComponentToGravity },
			{ "MulticastDisableAlignGravityToBase", &UNinjaCharacterMovementComponent::execMulticastDisableAlignGravityToBase },
			{ "MulticastEnableAlignComponentToFloor", &UNinjaCharacterMovementComponent::execMulticastEnableAlignComponentToFloor },
			{ "MulticastEnableAlignComponentToGravity", &UNinjaCharacterMovementComponent::execMulticastEnableAlignComponentToGravity },
			{ "MulticastEnableAlignGravityToBase", &UNinjaCharacterMovementComponent::execMulticastEnableAlignGravityToBase },
			{ "MulticastSetBoxGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetBoxGravityDirection },
			{ "MulticastSetBoxGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execMulticastSetBoxGravityDirectionFromActor },
			{ "MulticastSetCollisionGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetCollisionGravityDirection },
			{ "MulticastSetFixedGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetFixedGravityDirection },
			{ "MulticastSetGravityScale", &UNinjaCharacterMovementComponent::execMulticastSetGravityScale },
			{ "MulticastSetLineGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetLineGravityDirection },
			{ "MulticastSetPlaneGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetPlaneGravityDirection },
			{ "MulticastSetPointGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetPointGravityDirection },
			{ "MulticastSetPointGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execMulticastSetPointGravityDirectionFromActor },
			{ "MulticastSetSegmentGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetSegmentGravityDirection },
			{ "MulticastSetSplineGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetSplineGravityDirection },
			{ "MulticastSetSplinePlaneGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetSplinePlaneGravityDirection },
			{ "MulticastSetSplineTangentGravityDirection", &UNinjaCharacterMovementComponent::execMulticastSetSplineTangentGravityDirection },
			{ "OnComponentHit", &UNinjaCharacterMovementComponent::execOnComponentHit },
			{ "SetAlignComponentToFloor", &UNinjaCharacterMovementComponent::execSetAlignComponentToFloor },
			{ "SetAlignComponentToGravity", &UNinjaCharacterMovementComponent::execSetAlignComponentToGravity },
			{ "SetAlignGravityToBase", &UNinjaCharacterMovementComponent::execSetAlignGravityToBase },
			{ "SetBoxGravityDirection", &UNinjaCharacterMovementComponent::execSetBoxGravityDirection },
			{ "SetBoxGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execSetBoxGravityDirectionFromActor },
			{ "SetCollisionGravityDirection", &UNinjaCharacterMovementComponent::execSetCollisionGravityDirection },
			{ "SetLineGravityDirection", &UNinjaCharacterMovementComponent::execSetLineGravityDirection },
			{ "SetPointGravityDirection", &UNinjaCharacterMovementComponent::execSetPointGravityDirection },
			{ "SetPointGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execSetPointGravityDirectionFromActor },
			{ "SetSegmentGravityDirection", &UNinjaCharacterMovementComponent::execSetSegmentGravityDirection },
			{ "SetSplineGravityDirection", &UNinjaCharacterMovementComponent::execSetSplineGravityDirection },
			{ "SetSplinePlaneGravityDirection", &UNinjaCharacterMovementComponent::execSetSplinePlaneGravityDirection },
			{ "SetSplineTangentGravityDirection", &UNinjaCharacterMovementComponent::execSetSplineTangentGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics
	{
		struct NinjaCharacterMovementComponent_eventGetFinalGravityScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventGetFinalGravityScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Obtains the scale factor that affects magnitude of current gravity.\n\x09 * @note Returns GravityScale multiplied by other gravity scales\n\x09 * @return final gravity scale factor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Obtains the scale factor that affects magnitude of current gravity.\n@note Returns GravityScale multiplied by other gravity scales\n@return final gravity scale factor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "GetFinalGravityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::NinjaCharacterMovementComponent_eventGetFinalGravityScale_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventGetGravityDirection_Parms
		{
			bool bAvoidZeroGravity;
			FVector ReturnValue;
		};
		static void NewProp_bAvoidZeroGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidZeroGravity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventGetGravityDirection_Parms*)Obj)->bAvoidZeroGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity = { "bAvoidZeroGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventGetGravityDirection_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Obtains the normalized direction of the current gravity.\n\x09 * @note Could return no gravity direction due to zero gravity\n\x09 * @param bAvoidZeroGravity - if true, a gravity direction is always returned\n\x09 * @return normalized direction of current gravity\n\x09 */" },
		{ "CPP_Default_bAvoidZeroGravity", "false" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Obtains the normalized direction of the current gravity.\n@note Could return no gravity direction due to zero gravity\n@param bAvoidZeroGravity - if true, a gravity direction is always returned\n@return normalized direction of current gravity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NinjaCharacterMovementComponent_eventGetGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics
	{
		struct NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Obtains the absolute (positive) magnitude of the current gravity.\n\x09 * @return magnitude of current gravity\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Obtains the absolute (positive) magnitude of the current gravity.\n@return magnitude of current gravity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "GetGravityMagnitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new fixed gravity direction.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityDirection - new gravity direction, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Fixed Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ScriptName", "SetFixedGravityDirection" },
		{ "ToolTip", "Sets a new fixed gravity direction.\n@note It can be influenced by GravityScale\n@param NewGravityDirection - new gravity direction, assumes it isn't normalized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "K2_SetFixedGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms
		{
			FVector NewGravityPlaneBase;
			FVector NewGravityPlaneNormal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase = { "NewGravityPlaneBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal = { "NewGravityPlaneNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPlaneBase - a point that belongs to the plane\n\x09 * @param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Plane Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ScriptName", "SetPlaneGravityDirection" },
		{ "ToolTip", "Sets a new infinite plane which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPlaneBase - a point that belongs to the plane\n@param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "K2_SetPlaneGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignComponentToFloor flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignComponentToFloor flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastDisableAlignComponentToFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignComponentToGravity flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignComponentToGravity flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastDisableAlignComponentToGravity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignGravityToBase flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignGravityToBase flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastDisableAlignGravityToBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignComponentToFloor flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignComponentToFloor flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastEnableAlignComponentToFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignComponentToGravity flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignComponentToGravity flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastEnableAlignComponentToGravity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignGravityToBase flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignGravityToBase flag for clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastEnableAlignGravityToBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin = { "NewGravityBoxOrigin", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirection_Parms, NewGravityBoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent = { "NewGravityBoxExtent", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirection_Parms, NewGravityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new axis-aligned box for gravity to clients.\n\x09 * @param NewGravityBoxOrigin - origin of the box\n\x09 * @param NewGravityBoxExtent - extents of the box\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new axis-aligned box for gravity to clients.\n@param NewGravityBoxOrigin - origin of the box\n@param NewGravityBoxExtent - extents of the box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetBoxGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new axis-aligned box for gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides its collision bounding box as gravity target\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new axis-aligned box for gravity to clients.\n@param NewGravityActor - Actor that provides its collision bounding box as gravity target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetBoxGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetBoxGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetCollisionGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new collision geometry for gravity to clients.\n\x09 * @param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new collision geometry for gravity to clients.\n@param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetCollisionGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetCollisionGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFixedGravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFixedGravityDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection = { "NewFixedGravityDirection", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetFixedGravityDirection_Parms, NewFixedGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new fixed gravity direction to clients.\n\x09 * @param NewFixedGravityDirection - new fixed gravity direction, assumes it is normalized\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new fixed gravity direction to clients.\n@param NewFixedGravityDirection - new fixed gravity direction, assumes it is normalized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetFixedGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetFixedGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGravityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::NewProp_NewGravityScale = { "NewGravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetGravityScale_Parms, NewGravityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::NewProp_NewGravityScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates gravity scale factor to clients.\n\x09 * @param NewGravityScale - new gravity scale factor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates gravity scale factor to clients.\n@param NewGravityScale - new gravity scale factor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetGravityScale", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetGravityScale_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityLineStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityLineEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineStart = { "NewGravityLineStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetLineGravityDirection_Parms, NewGravityLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd = { "NewGravityLineEnd", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetLineGravityDirection_Parms, NewGravityLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite line for gravity to clients.\n\x09 * @param NewGravityLineStart - a point that belongs to the infinite line\n\x09 * @param NewGravityLineEnd - another point that belongs to the infinite line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite line for gravity to clients.\n@param NewGravityLineStart - a point that belongs to the infinite line\n@param NewGravityLineEnd - another point that belongs to the infinite line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetLineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetLineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase = { "NewGravityPlaneBase", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetPlaneGravityDirection_Parms, NewGravityPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal = { "NewGravityPlaneNormal", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetPlaneGravityDirection_Parms, NewGravityPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite plane for gravity to clients.\n\x09 * @param NewGravityPlaneBase - a point that belongs to the plane\n\x09 * @param NewGravityPlaneNormal - normal of the plane, assumes it is normalized\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite plane for gravity to clients.\n@param NewGravityPlaneBase - a point that belongs to the plane\n@param NewGravityPlaneNormal - normal of the plane, assumes it is normalized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetPlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetPlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::NewProp_NewGravityPoint = { "NewGravityPoint", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirection_Parms, NewGravityPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::NewProp_NewGravityPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new gravity point to clients.\n\x09 * @param NewGravityPoint - new point which gravity direction points to\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new gravity point to clients.\n@param NewGravityPoint - new point which gravity direction points to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetPointGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new gravity point to clients.\n\x09 * @param NewGravityActor - Actor that provides its location as gravity point\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new gravity point to clients.\n@param NewGravityActor - Actor that provides its location as gravity point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetPointGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetPointGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart = { "NewGravitySegmentStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetSegmentGravityDirection_Parms, NewGravitySegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd = { "NewGravitySegmentEnd", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetSegmentGravityDirection_Parms, NewGravitySegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new segment line for gravity to clients.\n\x09 * @param NewGravitySegmentStart - start point of the segment line\n\x09 * @param NewGravitySegmentEnd - end point of the segment line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new segment line for gravity to clients.\n@param NewGravitySegmentStart - start point of the segment line\n@param NewGravitySegmentEnd - end point of the segment line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetSegmentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetSegmentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetSplineGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new spline for gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new spline for gravity to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetSplineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetSplineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetSplinePlaneGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite plane determined by closest spline point for\n\x09 * gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite plane determined by closest spline point for\ngravity to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetSplinePlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetSplinePlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventMulticastSetSplineTangentGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new spline gravity direction to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new spline gravity direction to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "MulticastSetSplineTangentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventMulticastSetSplineTangentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics
	{
		struct NinjaCharacterMovementComponent_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventOnComponentHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when the updated component hits (or is hit by) something solid.\n\x09 * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n\x09 * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled\n\x09 * @note When receiving a hit from another object's movement (bSelfMoved is false), directions of Hit.Normal and Hit.ImpactNormal are adjusted to indicate force from the other object against this object\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Called when the updated component hits (or is hit by) something solid.\nThis could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.\n@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled\n@note When receiving a hit from another object's movement (bSelfMoved is false), directions of Hit.Normal and Hit.ImpactNormal are adjusted to indicate force from the other object against this object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "OnComponentHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::NinjaCharacterMovementComponent_eventOnComponentHit_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms
		{
			bool bNewAlignComponentToFloor;
		};
		static void NewProp_bNewAlignComponentToFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAlignComponentToFloor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms*)Obj)->bNewAlignComponentToFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor = { "bNewAlignComponentToFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignComponentToFloor flag.\n\x09 * @param bNewAlignComponentToFloor - new value for bAlignComponentToFloor flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignComponentToFloor flag.\n@param bNewAlignComponentToFloor - new value for bAlignComponentToFloor flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignComponentToFloor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms
		{
			bool bNewAlignComponentToGravity;
		};
		static void NewProp_bNewAlignComponentToGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAlignComponentToGravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms*)Obj)->bNewAlignComponentToGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity = { "bNewAlignComponentToGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignComponentToGravity flag.\n\x09 * @param bNewAlignComponentToGravity - new value for bAlignComponentToGravity flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignComponentToGravity flag.\n@param bNewAlignComponentToGravity - new value for bAlignComponentToGravity flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignComponentToGravity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms
		{
			bool bNewAlignGravityToBase;
		};
		static void NewProp_bNewAlignGravityToBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAlignGravityToBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms*)Obj)->bNewAlignGravityToBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase = { "bNewAlignGravityToBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignGravityToBase flag.\n\x09 * @param bNewAlignGravityToBase - new value for bAlignGravityToBase flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignGravityToBase flag.\n@param bNewAlignGravityToBase - new value for bAlignGravityToBase flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignGravityToBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms
		{
			FVector NewGravityBoxOrigin;
			FVector NewGravityBoxExtent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin = { "NewGravityBoxOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms, NewGravityBoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent = { "NewGravityBoxExtent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms, NewGravityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityBoxOrigin - origin of the box\n\x09 * @param NewGravityBoxExtent - extents of the box\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityBoxOrigin - origin of the box\n@param NewGravityBoxExtent - extents of the box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetBoxGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its collision bounding box as gravity target\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its collision bounding box as gravity target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetBoxGravityDirectionFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new collision geometry which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new collision geometry which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetCollisionGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms
		{
			FVector NewGravityLineStart;
			FVector NewGravityLineEnd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityLineStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityLineEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart = { "NewGravityLineStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms, NewGravityLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd = { "NewGravityLineEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms, NewGravityLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityLineStart - a point that belongs to the infinite line\n\x09 * @param NewGravityLineEnd - another point that belongs to the infinite line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new infinite line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityLineStart - a point that belongs to the infinite line\n@param NewGravityLineEnd - another point that belongs to the infinite line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetLineGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms
		{
			FVector NewGravityPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint = { "NewGravityPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms, NewGravityPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPoint - new point which gravity direction points to\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPoint - new point which gravity direction points to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetPointGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its location as gravity point\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its location as gravity point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetPointGravityDirectionFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms
		{
			FVector NewGravitySegmentStart;
			FVector NewGravitySegmentEnd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart = { "NewGravitySegmentStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms, NewGravitySegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd = { "NewGravitySegmentEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms, NewGravitySegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new segment line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravitySegmentStart - start point of the segment line\n\x09 * @param NewGravitySegmentEnd - end point of the segment line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new segment line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravitySegmentStart - start point of the segment line\n@param NewGravitySegmentEnd - end point of the segment line" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSegmentGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new spline which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new spline which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplineGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane determined by closest spline point and spline\n\x09 * up vector which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new infinite plane determined by closest spline point and spline\nup vector which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplinePlaneGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new gravity direction determined by closest spline tangent.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new gravity direction determined by closest spline tangent.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplineTangentGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCharacterMovementComponent);
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSimulateMovement_MetaData[];
#endif
		static void NewProp_bForceSimulateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSimulateMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertToDefaultGravity_MetaData[];
#endif
		static void NewProp_bRevertToDefaultGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertToDefaultGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandOnAnySurface_MetaData[];
#endif
		static void NewProp_bLandOnAnySurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandOnAnySurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerUnwalkableHits_MetaData[];
#endif
		static void NewProp_bTriggerUnwalkableHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerUnwalkableHits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GravityDirectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDirectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GravityDirectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityVectorA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVectorA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityVectorB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVectorB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GravityActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableGravityReplication_MetaData[];
#endif
		static void NewProp_bDisableGravityReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableGravityReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOtherGravityScales_MetaData[];
#endif
		static void NewProp_bIgnoreOtherGravityScales_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOtherGravityScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignGravityToBase_MetaData[];
#endif
		static void NewProp_bAlignGravityToBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignGravityToBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignComponentToFloor_MetaData[];
#endif
		static void NewProp_bAlignComponentToFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignComponentToFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignComponentToGravity_MetaData[];
#endif
		static void NewProp_bAlignComponentToGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignComponentToGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRotateAroundCenter_MetaData[];
#endif
		static void NewProp_bAlwaysRotateAroundCenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRotateAroundCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateVelocityOnGround_MetaData[];
#endif
		static void NewProp_bRotateVelocityOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateVelocityOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdParallelAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdParallelAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdOrthogonalCosine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdOrthogonalCosine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdParallelCosine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdParallelCosine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetFinalGravityScale, "GetFinalGravityScale" }, // 176491845
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 1185550493
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude, "GetGravityMagnitude" }, // 491638479
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection, "K2_SetFixedGravityDirection" }, // 1216765247
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection, "K2_SetPlaneGravityDirection" }, // 3356691767
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToFloor, "MulticastDisableAlignComponentToFloor" }, // 169937950
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignComponentToGravity, "MulticastDisableAlignComponentToGravity" }, // 716588469
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastDisableAlignGravityToBase, "MulticastDisableAlignGravityToBase" }, // 1212103397
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToFloor, "MulticastEnableAlignComponentToFloor" }, // 1715681816
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignComponentToGravity, "MulticastEnableAlignComponentToGravity" }, // 278840905
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastEnableAlignGravityToBase, "MulticastEnableAlignGravityToBase" }, // 1605357465
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirection, "MulticastSetBoxGravityDirection" }, // 1334662411
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetBoxGravityDirectionFromActor, "MulticastSetBoxGravityDirectionFromActor" }, // 1617421411
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetCollisionGravityDirection, "MulticastSetCollisionGravityDirection" }, // 2060324614
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetFixedGravityDirection, "MulticastSetFixedGravityDirection" }, // 55806236
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetGravityScale, "MulticastSetGravityScale" }, // 2618249749
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetLineGravityDirection, "MulticastSetLineGravityDirection" }, // 915267222
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPlaneGravityDirection, "MulticastSetPlaneGravityDirection" }, // 1196664604
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirection, "MulticastSetPointGravityDirection" }, // 3102755874
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetPointGravityDirectionFromActor, "MulticastSetPointGravityDirectionFromActor" }, // 3602634712
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSegmentGravityDirection, "MulticastSetSegmentGravityDirection" }, // 2696752708
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineGravityDirection, "MulticastSetSplineGravityDirection" }, // 1743496937
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplinePlaneGravityDirection, "MulticastSetSplinePlaneGravityDirection" }, // 1629146770
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_MulticastSetSplineTangentGravityDirection, "MulticastSetSplineTangentGravityDirection" }, // 3376633068
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_OnComponentHit, "OnComponentHit" }, // 702021152
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor, "SetAlignComponentToFloor" }, // 4203656002
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity, "SetAlignComponentToGravity" }, // 2565877802
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase, "SetAlignGravityToBase" }, // 2158689385
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection, "SetBoxGravityDirection" }, // 1227686851
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor, "SetBoxGravityDirectionFromActor" }, // 1951282892
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection, "SetCollisionGravityDirection" }, // 1251865655
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection, "SetLineGravityDirection" }, // 1375666151
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection, "SetPointGravityDirection" }, // 811148370
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor, "SetPointGravityDirectionFromActor" }, // 3387332131
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection, "SetSegmentGravityDirection" }, // 3844825540
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection, "SetSplineGravityDirection" }, // 3880673701
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection, "SetSplinePlaneGravityDirection" }, // 2899454974
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection, "SetSplineTangentGravityDirection" }, // 3387744149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A MovementComponent updates the position of the associated PrimitiveComponent\n * during its tick. This type handles the movement for Characters, and is able\n * to handle arbitrary gravity direction and collision capsule orientation.\n */" },
		{ "IncludePath", "NinjaCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A MovementComponent updates the position of the associated PrimitiveComponent\nduring its tick. This type handles the movement for Characters, and is able\nto handle arbitrary gravity direction and collision capsule orientation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, non-owning network clients won't skip simulating movement if base isn't replicated. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, non-owning network clients won't skip simulating movement if base isn't replicated." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bForceSimulateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement = { "bForceSimulateMovement", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true, revert to engine's hardcoded gravity direction when entering the DefaultPhysicsVolume.\n\x09 * @note The DefaultPhysicsVolume is found in areas of the level with no PhysicsVolume\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, revert to engine's hardcoded gravity direction when entering the DefaultPhysicsVolume.\n@note The DefaultPhysicsVolume is found in areas of the level with no PhysicsVolume" },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bRevertToDefaultGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity = { "bRevertToDefaultGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If false when landing on a surface, gravity direction is also checked to know if the surface is walkable. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If false when landing on a surface, gravity direction is also checked to know if the surface is walkable." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bLandOnAnySurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface = { "bLandOnAnySurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, when the Character bumps into an unwalkable blocking object, triggers unwalkable hit events. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, when the Character bumps into an unwalkable blocking object, triggers unwalkable hit events." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bTriggerUnwalkableHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits = { "bTriggerUnwalkableHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Mode that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Mode that determines direction of gravity." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode = { "GravityDirectionMode", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData)) }; // 3274413042
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Stores information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Stores information that determines direction of gravity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA = { "GravityVectorA", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Stores additional information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Stores additional information that determines direction of gravity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB = { "GravityVectorB", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Optional Actor that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Optional Actor that determines direction of gravity." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor = { "GravityActor", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, gravity data isn't replicated from server to clients. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, gravity data isn't replicated from server to clients." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bDisableGravityReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication = { "bDisableGravityReplication", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, custom gravity scales from other Actors are ignored. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, custom gravity scales from other Actors are ignored." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bIgnoreOtherGravityScales = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales = { "bIgnoreOtherGravityScales", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData[] = {
		{ "BlueprintSetter", "SetAlignGravityToBase" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and a floor is found, rotate gravity direction and align it to floor base.\n\x09 * @note For \"Fixed\" gravity mode, gravity direction is set to reverse floor normal vector\n\x09 * @note For \"Point\" gravity mode, gravity direction points to base's location\n\x09 * @note For \"Box\" gravity mode, gravity direction points to base's bounding box\n\x09 * @note For \"Collision\" gravity mode, gravity direction points to base's collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and a floor is found, rotate gravity direction and align it to floor base.\n@note For \"Fixed\" gravity mode, gravity direction is set to reverse floor normal vector\n@note For \"Point\" gravity mode, gravity direction points to base's location\n@note For \"Box\" gravity mode, gravity direction points to base's bounding box\n@note For \"Collision\" gravity mode, gravity direction points to base's collision geometry" },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignGravityToBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase = { "bAlignGravityToBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData[] = {
		{ "BlueprintSetter", "SetAlignComponentToFloor" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and a floor is found, rotate the Character and align it to floor normal vector.\n\x09 * @note Activation of \"Use Flat Base for Floor Checks\" should be avoided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and a floor is found, rotate the Character and align it to floor normal vector.\n@note Activation of \"Use Flat Base for Floor Checks\" should be avoided." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignComponentToFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor = { "bAlignComponentToFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData[] = {
		{ "BlueprintSetter", "SetAlignComponentToGravity" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, rotate the Character and align it to the gravity direction. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, rotate the Character and align it to the gravity direction." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignComponentToGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity = { "bAlignComponentToGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true and the Character is aligned to something, always rotate the Character around its center. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and the Character is aligned to something, always rotate the Character around its center." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlwaysRotateAroundCenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter = { "bAlwaysRotateAroundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and the Character is aligned to something while walking, velocity direction is also rotated.\n\x09 * @note Activating this prevents speed loss on component rotation change.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and the Character is aligned to something while walking, velocity direction is also rotated.\n@note Activating this prevents speed loss on component rotation change." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bRotateVelocityOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround = { "bRotateVelocityOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelAngle_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.250000" },
		{ "Comment", "/**\n\x09 * Angle in degrees that determines if any two vectors are parallel.\n\x09 * @note Reducing this improves smoothness of certain rotation calculations\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Angle in degrees that determines if any two vectors are parallel.\n@note Reducing this improves smoothness of certain rotation calculations" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.250000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelAngle = { "ThresholdParallelAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, ThresholdParallelAngle), METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdOrthogonalCosine_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Threshold that determines if two unit vectors are perpendicular. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Threshold that determines if two unit vectors are perpendicular." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdOrthogonalCosine = { "ThresholdOrthogonalCosine", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, ThresholdOrthogonalCosine), METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdOrthogonalCosine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdOrthogonalCosine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelCosine_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Threshold that determines if two unit vectors are parallel. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Threshold that determines if two unit vectors are parallel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelCosine = { "ThresholdParallelCosine", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaCharacterMovementComponent, ThresholdParallelCosine), METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelCosine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelCosine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bForceSimulateMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bTriggerUnwalkableHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bIgnoreOtherGravityScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdOrthogonalCosine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_ThresholdParallelCosine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams = {
		&UNinjaCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton;
	}
	template<> NINJACHARACTER_API UClass* StaticClass<UNinjaCharacterMovementComponent>()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCharacterMovementComponent);
	UNinjaCharacterMovementComponent::~UNinjaCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCharacterMovementComponent, UNinjaCharacterMovementComponent::StaticClass, TEXT("UNinjaCharacterMovementComponent"), &Z_Registration_Info_UClass_UNinjaCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCharacterMovementComponent), 2527294383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_677186508(TEXT("/Script/NinjaCharacter"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
