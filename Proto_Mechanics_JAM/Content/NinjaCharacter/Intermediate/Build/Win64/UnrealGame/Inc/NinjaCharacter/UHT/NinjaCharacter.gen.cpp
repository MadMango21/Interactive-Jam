// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaCharacter();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaCharacter_NoRegister();
	NINJACHARACTER_API UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode();
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature();
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature();
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics
	{
		struct _Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms
		{
			FVector OldAxisZ;
			FVector CurrentAxisZ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAxisZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAxisZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_OldAxisZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_OldAxisZ = { "OldAxisZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms, OldAxisZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_OldAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_OldAxisZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_CurrentAxisZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_CurrentAxisZ = { "CurrentAxisZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms, CurrentAxisZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_CurrentAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_CurrentAxisZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_OldAxisZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::NewProp_CurrentAxisZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCharacter, nullptr, "CharMovementAxisChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::_Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms), Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCharMovementAxisChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementAxisChangedSignature, FVector const& OldAxisZ, FVector const& CurrentAxisZ)
{
	struct _Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms
	{
		FVector OldAxisZ;
		FVector CurrentAxisZ;
	};
	_Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms Parms;
	Parms.OldAxisZ=OldAxisZ;
	Parms.CurrentAxisZ=CurrentAxisZ;
	CharMovementAxisChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics
	{
		struct _Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms
		{
			ENinjaGravityDirectionMode OldGravityDirectionMode;
			ENinjaGravityDirectionMode CurrentGravityDirectionMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldGravityDirectionMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldGravityDirectionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGravityDirectionMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGravityDirectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_OldGravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_OldGravityDirectionMode = { "OldGravityDirectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms, OldGravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(nullptr, 0) }; // 3274413042
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_CurrentGravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_CurrentGravityDirectionMode = { "CurrentGravityDirectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms, CurrentGravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(nullptr, 0) }; // 3274413042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_OldGravityDirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_OldGravityDirectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_CurrentGravityDirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::NewProp_CurrentGravityDirectionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCharacter, nullptr, "CharMovementGravityChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::_Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms), Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCharMovementGravityChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementGravityChangedSignature, ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode)
{
	struct _Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms
	{
		ENinjaGravityDirectionMode OldGravityDirectionMode;
		ENinjaGravityDirectionMode CurrentGravityDirectionMode;
	};
	_Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms Parms;
	Parms.OldGravityDirectionMode=OldGravityDirectionMode;
	Parms.CurrentGravityDirectionMode=CurrentGravityDirectionMode;
	CharMovementGravityChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics
	{
		struct _Script_NinjaCharacter_eventUnwalkableHitSignature_Parms
		{
			FHitResult Hit;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCharacter_eventUnwalkableHitSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCharacter, nullptr, "UnwalkableHitSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::_Script_NinjaCharacter_eventUnwalkableHitSignature_Parms), Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUnwalkableHitSignature_DelegateWrapper(const FMulticastScriptDelegate& UnwalkableHitSignature, FHitResult const& Hit)
{
	struct _Script_NinjaCharacter_eventUnwalkableHitSignature_Parms
	{
		FHitResult Hit;
	};
	_Script_NinjaCharacter_eventUnwalkableHitSignature_Parms Parms;
	Parms.Hit=Hit;
	UnwalkableHitSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ANinjaCharacter::execSmoothComponentRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationSpeed);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RelativeRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothComponentRotation(Z_Param_SceneComponent,Z_Param_DeltaTime,Z_Param_RotationSpeed,Z_Param_Out_RelativeRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCharacter::execSmoothComponentLocation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationSpeed);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RelativeLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothComponentLocation(Z_Param_SceneComponent,Z_Param_DeltaTime,Z_Param_LocationSpeed,Z_Param_Out_RelativeLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCharacter::execSmoothComponentLocationAndRotation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationSpeed);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RelativeLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RelativeRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothComponentLocationAndRotation(Z_Param_SceneComponent,Z_Param_DeltaTime,Z_Param_LocationSpeed,Z_Param_RotationSpeed,Z_Param_Out_RelativeLocation,Z_Param_Out_RelativeRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCharacter::execSetCharMovementAxis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAxisZ);
		P_GET_UBOOL(Z_Param_bForceFindFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCharMovementAxis(Z_Param_Out_NewAxisZ,Z_Param_bForceFindFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCharacter::execLaunchCharacterRotated)
	{
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_GET_UBOOL(Z_Param_bHorizontalOverride);
		P_GET_UBOOL(Z_Param_bVerticalOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchCharacterRotated(Z_Param_LaunchVelocity,Z_Param_bHorizontalOverride,Z_Param_bVerticalOverride);
		P_NATIVE_END;
	}
	struct NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms
	{
		FVector OldAxisZ;
		FVector CurrentAxisZ;
	};
	struct NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms
	{
		ENinjaGravityDirectionMode OldGravityDirectionMode;
		ENinjaGravityDirectionMode CurrentGravityDirectionMode;
	};
	struct NinjaCharacter_eventK2_OnUnwalkableHit_Parms
	{
		FHitResult Hit;
	};
	static FName NAME_ANinjaCharacter_K2_OnCharMovementAxisChanged = FName(TEXT("K2_OnCharMovementAxisChanged"));
	void ANinjaCharacter::K2_OnCharMovementAxisChanged(FVector const& OldAxisZ, FVector const& CurrentAxisZ)
	{
		NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms Parms;
		Parms.OldAxisZ=OldAxisZ;
		Parms.CurrentAxisZ=CurrentAxisZ;
		ProcessEvent(FindFunctionChecked(NAME_ANinjaCharacter_K2_OnCharMovementAxisChanged),&Parms);
	}
	static FName NAME_ANinjaCharacter_K2_OnGravityDirectionChanged = FName(TEXT("K2_OnGravityDirectionChanged"));
	void ANinjaCharacter::K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode)
	{
		NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms Parms;
		Parms.OldGravityDirectionMode=OldGravityDirectionMode;
		Parms.CurrentGravityDirectionMode=CurrentGravityDirectionMode;
		ProcessEvent(FindFunctionChecked(NAME_ANinjaCharacter_K2_OnGravityDirectionChanged),&Parms);
	}
	static FName NAME_ANinjaCharacter_K2_OnUnwalkableHit = FName(TEXT("K2_OnUnwalkableHit"));
	void ANinjaCharacter::K2_OnUnwalkableHit(FHitResult const& Hit)
	{
		NinjaCharacter_eventK2_OnUnwalkableHit_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ANinjaCharacter_K2_OnUnwalkableHit),&Parms);
	}
	void ANinjaCharacter::StaticRegisterNativesANinjaCharacter()
	{
		UClass* Class = ANinjaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LaunchCharacterRotated", &ANinjaCharacter::execLaunchCharacterRotated },
			{ "SetCharMovementAxis", &ANinjaCharacter::execSetCharMovementAxis },
			{ "SmoothComponentLocation", &ANinjaCharacter::execSmoothComponentLocation },
			{ "SmoothComponentLocationAndRotation", &ANinjaCharacter::execSmoothComponentLocationAndRotation },
			{ "SmoothComponentRotation", &ANinjaCharacter::execSmoothComponentRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAxisZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAxisZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_OldAxisZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_OldAxisZ = { "OldAxisZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms, OldAxisZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_OldAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_OldAxisZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_CurrentAxisZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_CurrentAxisZ = { "CurrentAxisZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms, CurrentAxisZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_CurrentAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_CurrentAxisZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_OldAxisZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::NewProp_CurrentAxisZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Event called after changing vertical axis of the capsule (movement collider).\n\x09 * @param OldAxisZ - old vertical axis of the capsule\n\x09 * @param CurrentAxisZ - current vertical axis of the capsule\n\x09 */" },
		{ "DisplayName", "On Char Axis Changed" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ScriptName", "OnCharacterMovementAxisChanged" },
		{ "ToolTip", "Event called after changing vertical axis of the capsule (movement collider).\n@param OldAxisZ - old vertical axis of the capsule\n@param CurrentAxisZ - current vertical axis of the capsule" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "K2_OnCharMovementAxisChanged", nullptr, nullptr, sizeof(NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms), Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldGravityDirectionMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldGravityDirectionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGravityDirectionMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGravityDirectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_OldGravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_OldGravityDirectionMode = { "OldGravityDirectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms, OldGravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(nullptr, 0) }; // 3274413042
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_CurrentGravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_CurrentGravityDirectionMode = { "CurrentGravityDirectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms, CurrentGravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(nullptr, 0) }; // 3274413042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_OldGravityDirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_OldGravityDirectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_CurrentGravityDirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::NewProp_CurrentGravityDirectionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Event called after GravityDirectionMode (or related data) has changed in the movement component.\n\x09 * @param OldGravityDirectionMode - previous value of GravityDirectionMode\n\x09 * @param CurrentGravityDirectionMode - current value of GravityDirectionMode\n\x09 */" },
		{ "DisplayName", "On Char Gravity Direction Changed" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ScriptName", "OnGravityDirectionChanged" },
		{ "ToolTip", "Event called after GravityDirectionMode (or related data) has changed in the movement component.\n@param OldGravityDirectionMode - previous value of GravityDirectionMode\n@param CurrentGravityDirectionMode - current value of GravityDirectionMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "K2_OnGravityDirectionChanged", nullptr, nullptr, sizeof(NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms), Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventK2_OnUnwalkableHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Event called when the capsule (movement collider) bumps into an unwalkable blocking object.\n\x09 * @param Hit - contains info about the hit, such as point of impact and surface normal at that point\n\x09 */" },
		{ "DisplayName", "On Unwalkable Hit" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ScriptName", "OnUnwalkableHit" },
		{ "ToolTip", "Event called when the capsule (movement collider) bumps into an unwalkable blocking object.\n@param Hit - contains info about the hit, such as point of impact and surface normal at that point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "K2_OnUnwalkableHit", nullptr, nullptr, sizeof(NinjaCharacter_eventK2_OnUnwalkableHit_Parms), Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics
	{
		struct NinjaCharacter_eventLaunchCharacterRotated_Parms
		{
			FVector LaunchVelocity;
			bool bHorizontalOverride;
			bool bVerticalOverride;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static void NewProp_bHorizontalOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHorizontalOverride;
		static void NewProp_bVerticalOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventLaunchCharacterRotated_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bHorizontalOverride_SetBit(void* Obj)
	{
		((NinjaCharacter_eventLaunchCharacterRotated_Parms*)Obj)->bHorizontalOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bHorizontalOverride = { "bHorizontalOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacter_eventLaunchCharacterRotated_Parms), &Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bHorizontalOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bVerticalOverride_SetBit(void* Obj)
	{
		((NinjaCharacter_eventLaunchCharacterRotated_Parms*)Obj)->bVerticalOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bVerticalOverride = { "bVerticalOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacter_eventLaunchCharacterRotated_Parms), &Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bVerticalOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_LaunchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bHorizontalOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NewProp_bVerticalOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Set a pending launch velocity on the Character. This velocity will be processed on the next\n\x09 * CharacterMovementComponent tick, and will set it to the \"falling\" state. Triggers the OnLaunched event.\n\x09 * @note This version has a different behavior for the boolean parameters that take into account the Character's orientation\n\x09 * @param LaunchVelocity - the velocity to impart to the Character\n\x09 * @param bHorizontalOverride - if true, replace the horizontal part of the Character's velocity instead of adding to it\n\x09 * @param bVerticalOverride - if true, replace the vertical part of the Character's velocity instead of adding to it\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "Set a pending launch velocity on the Character. This velocity will be processed on the next\nCharacterMovementComponent tick, and will set it to the \"falling\" state. Triggers the OnLaunched event.\n@note This version has a different behavior for the boolean parameters that take into account the Character's orientation\n@param LaunchVelocity - the velocity to impart to the Character\n@param bHorizontalOverride - if true, replace the horizontal part of the Character's velocity instead of adding to it\n@param bVerticalOverride - if true, replace the vertical part of the Character's velocity instead of adding to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "LaunchCharacterRotated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::NinjaCharacter_eventLaunchCharacterRotated_Parms), Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics
	{
		struct NinjaCharacter_eventSetCharMovementAxis_Parms
		{
			FVector NewAxisZ;
			bool bForceFindFloor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAxisZ;
		static void NewProp_bForceFindFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFindFloor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_NewAxisZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_NewAxisZ = { "NewAxisZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSetCharMovementAxis_Parms, NewAxisZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_NewAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_NewAxisZ_MetaData)) };
	void Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_bForceFindFloor_SetBit(void* Obj)
	{
		((NinjaCharacter_eventSetCharMovementAxis_Parms*)Obj)->bForceFindFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_bForceFindFloor = { "bForceFindFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacter_eventSetCharMovementAxis_Parms), &Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_bForceFindFloor_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NinjaCharacter_eventSetCharMovementAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaCharacter_eventSetCharMovementAxis_Parms), &Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_NewAxisZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_bForceFindFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Changes the vertical axis of the capsule (movement collider).\n\x09 * @param NewAxisZ - new vertical axis of the capsule\n\x09 * @param bForceFindFloor - force find a floor and attach to it\n\x09 * @return false if couldn't rotate/move the capsule\n\x09 */" },
		{ "DisplayName", "Change Char Axis" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "Changes the vertical axis of the capsule (movement collider).\n@param NewAxisZ - new vertical axis of the capsule\n@param bForceFindFloor - force find a floor and attach to it\n@return false if couldn't rotate/move the capsule" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "SetCharMovementAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::NinjaCharacter_eventSetCharMovementAxis_Parms), Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics
	{
		struct NinjaCharacter_eventSmoothComponentLocation_Parms
		{
			USceneComponent* SceneComponent;
			float DeltaTime;
			float LocationSpeed;
			FVector RelativeLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocation_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_LocationSpeed = { "LocationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocation_Parms, LocationSpeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocation_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_RelativeLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_LocationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NewProp_RelativeLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Smoothly interpolates location of an attached component.\n\x09 * @note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n\x09 * @note Use \"Set Absolute\" and \"Set Relative Location\" on the attached component to cancel the smooth interpolation\n\x09 * @param SceneComponent - attached scene component that will be moved\n\x09 * @param DeltaTime - game time elapsed since last frame\n\x09 * @param LocationSpeed - controls how the component lags behind target location; zero is instant, low value is slower, high value is faster\n\x09 * @param RelativeLocation - location of the component relative to its parent (suggestion: use with \"Get Base Translation Offset\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "Smoothly interpolates location of an attached component.\n@note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n@note Use \"Set Absolute\" and \"Set Relative Location\" on the attached component to cancel the smooth interpolation\n@param SceneComponent - attached scene component that will be moved\n@param DeltaTime - game time elapsed since last frame\n@param LocationSpeed - controls how the component lags behind target location; zero is instant, low value is slower, high value is faster\n@param RelativeLocation - location of the component relative to its parent (suggestion: use with \"Get Base Translation Offset\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "SmoothComponentLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::NinjaCharacter_eventSmoothComponentLocation_Parms), Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics
	{
		struct NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms
		{
			USceneComponent* SceneComponent;
			float DeltaTime;
			float LocationSpeed;
			float RotationSpeed;
			FVector RelativeLocation;
			FRotator RelativeRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_LocationSpeed = { "LocationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, LocationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, RotationSpeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_LocationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NewProp_RelativeRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Smoothly interpolates location and rotation of an attached component.\n\x09 * @note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n\x09 * @note Use \"Set Absolute\" and \"Set Relative Location and Rotation\" on the attached component to cancel the smooth interpolation\n\x09 * @param SceneComponent - attached scene component that will be moved\n\x09 * @param DeltaTime - game time elapsed since last frame\n\x09 * @param LocationSpeed - controls how the component lags behind target location; zero is instant, low value is slower, high value is faster\n\x09 * @param RotationSpeed - controls how the component lags behind target rotation; zero is instant, low value is slower, high value is faster\n\x09 * @param RelativeLocation - location of the component relative to its parent (suggestion: use with \"Get Base Translation Offset\")\n\x09 * @param RelativeRotation - rotation of the component relative to its parent (suggestion: use with \"Get Base Rotation Offset\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "Smoothly interpolates location and rotation of an attached component.\n@note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n@note Use \"Set Absolute\" and \"Set Relative Location and Rotation\" on the attached component to cancel the smooth interpolation\n@param SceneComponent - attached scene component that will be moved\n@param DeltaTime - game time elapsed since last frame\n@param LocationSpeed - controls how the component lags behind target location; zero is instant, low value is slower, high value is faster\n@param RotationSpeed - controls how the component lags behind target rotation; zero is instant, low value is slower, high value is faster\n@param RelativeLocation - location of the component relative to its parent (suggestion: use with \"Get Base Translation Offset\")\n@param RelativeRotation - rotation of the component relative to its parent (suggestion: use with \"Get Base Rotation Offset\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "SmoothComponentLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::NinjaCharacter_eventSmoothComponentLocationAndRotation_Parms), Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics
	{
		struct NinjaCharacter_eventSmoothComponentRotation_Parms
		{
			USceneComponent* SceneComponent;
			float DeltaTime;
			float RotationSpeed;
			FRotator RelativeRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentRotation_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentRotation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentRotation_Parms, RotationSpeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCharacter_eventSmoothComponentRotation_Parms, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RelativeRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NewProp_RelativeRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/**\n\x09 * Smoothly interpolates rotation of an attached component.\n\x09 * @note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n\x09 * @note Use \"Set Absolute\" and \"Set Relative Rotation\" on the attached component to cancel the smooth interpolation\n\x09 * @param SceneComponent - attached scene component that will be moved\n\x09 * @param DeltaTime - game time elapsed since last frame\n\x09 * @param RotationSpeed - controls how the component lags behind target rotation; zero is instant, low value is slower, high value is faster\n\x09 * @param RelativeRotation - rotation of the component relative to its parent (suggestion: use with \"Get Base Rotation Offset\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "Smoothly interpolates rotation of an attached component.\n@note Doesn't work with the associated \"Mesh\" if NetworkSmoothingMode of \"CharacterMovement\" is enabled\n@note Use \"Set Absolute\" and \"Set Relative Rotation\" on the attached component to cancel the smooth interpolation\n@param SceneComponent - attached scene component that will be moved\n@param DeltaTime - game time elapsed since last frame\n@param RotationSpeed - controls how the component lags behind target rotation; zero is instant, low value is slower, high value is faster\n@param RelativeRotation - rotation of the component relative to its parent (suggestion: use with \"Get Base Rotation Offset\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCharacter, nullptr, "SmoothComponentRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::NinjaCharacter_eventSmoothComponentRotation_Parms), Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCharacter);
	UClass* Z_Construct_UClass_ANinjaCharacter_NoRegister()
	{
		return ANinjaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCapsuleRotatesControlRotation_MetaData[];
#endif
		static void NewProp_bCapsuleRotatesControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapsuleRotatesControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltFlipControlRotation_MetaData[];
#endif
		static void NewProp_bAltFlipControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltFlipControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANinjaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCharacter_K2_OnCharMovementAxisChanged, "K2_OnCharMovementAxisChanged" }, // 485221556
		{ &Z_Construct_UFunction_ANinjaCharacter_K2_OnGravityDirectionChanged, "K2_OnGravityDirectionChanged" }, // 215226438
		{ &Z_Construct_UFunction_ANinjaCharacter_K2_OnUnwalkableHit, "K2_OnUnwalkableHit" }, // 2708436811
		{ &Z_Construct_UFunction_ANinjaCharacter_LaunchCharacterRotated, "LaunchCharacterRotated" }, // 3768879419
		{ &Z_Construct_UFunction_ANinjaCharacter_SetCharMovementAxis, "SetCharMovementAxis" }, // 607192236
		{ &Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocation, "SmoothComponentLocation" }, // 1737444317
		{ &Z_Construct_UFunction_ANinjaCharacter_SmoothComponentLocationAndRotation, "SmoothComponentLocationAndRotation" }, // 1808593723
		{ &Z_Construct_UFunction_ANinjaCharacter_SmoothComponentRotation, "SmoothComponentRotation" }, // 1567982406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Pawns are the physical representations of players and creatures in a level.\n * Characters are Pawns that have a mesh, collision, and physics. This type is\n * able to handle arbitrary gravity direction and collision capsule orientation.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NinjaCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Pawns are the physical representations of players and creatures in a level.\nCharacters are Pawns that have a mesh, collision, and physics. This type is\nable to handle arbitrary gravity direction and collision capsule orientation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation_MetaData[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/** If true, the aim control rotation of the Controller is rotated whenever the capsule is aligned to something. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "If true, the aim control rotation of the Controller is rotated whenever the capsule is aligned to something." },
	};
#endif
	void Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation_SetBit(void* Obj)
	{
		((ANinjaCharacter*)Obj)->bCapsuleRotatesControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation = { "bCapsuleRotatesControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANinjaCharacter), &Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation_MetaData[] = {
		{ "Category", "NinjaCharacter" },
		{ "Comment", "/** If true, when the aim control rotation of the Controller is flipped, another axis is preserved. */" },
		{ "EditCondition", "bCapsuleRotatesControlRotation" },
		{ "ModuleRelativePath", "Public/NinjaCharacter.h" },
		{ "ToolTip", "If true, when the aim control rotation of the Controller is flipped, another axis is preserved." },
	};
#endif
	void Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation_SetBit(void* Obj)
	{
		((ANinjaCharacter*)Obj)->bAltFlipControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation = { "bAltFlipControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANinjaCharacter), &Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bCapsuleRotatesControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCharacter_Statics::NewProp_bAltFlipControlRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCharacter_Statics::ClassParams = {
		&ANinjaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANinjaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaCharacter()
	{
		if (!Z_Registration_Info_UClass_ANinjaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCharacter.OuterSingleton, Z_Construct_UClass_ANinjaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANinjaCharacter.OuterSingleton;
	}
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaCharacter>()
	{
		return ANinjaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCharacter);
	ANinjaCharacter::~ANinjaCharacter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCharacter, ANinjaCharacter::StaticClass, TEXT("ANinjaCharacter"), &Z_Registration_Info_UClass_ANinjaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCharacter), 3298644736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_2228150667(TEXT("/Script/NinjaCharacter"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
