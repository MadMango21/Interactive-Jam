// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCharacter_init() {}
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature();
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature();
	NINJACHARACTER_API UFunction* Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaCharacter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaCharacter()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaCharacter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementAxisChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaCharacter_CharMovementGravityChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaCharacter_UnwalkableHitSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaCharacter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA4E48159,
				0x3E297A2B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaCharacter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaCharacter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaCharacter(Z_Construct_UPackage__Script_NinjaCharacter, TEXT("/Script/NinjaCharacter"), Z_Registration_Info_UPackage__Script_NinjaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA4E48159, 0x3E297A2B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
