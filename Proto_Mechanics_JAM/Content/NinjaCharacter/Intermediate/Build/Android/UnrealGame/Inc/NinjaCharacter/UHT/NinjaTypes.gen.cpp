// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaTypes() {}
// Cross Module References
	NINJACHARACTER_API UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENinjaGravityDirectionMode;
	static UEnum* ENinjaGravityDirectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, (UObject*)Z_Construct_UPackage__Script_NinjaCharacter(), TEXT("ENinjaGravityDirectionMode"));
		}
		return Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.OuterSingleton;
	}
	template<> NINJACHARACTER_API UEnum* StaticEnum<ENinjaGravityDirectionMode>()
	{
		return ENinjaGravityDirectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enumerators[] = {
		{ "ENinjaGravityDirectionMode::Fixed", (int64)ENinjaGravityDirectionMode::Fixed },
		{ "ENinjaGravityDirectionMode::SplineTangent", (int64)ENinjaGravityDirectionMode::SplineTangent },
		{ "ENinjaGravityDirectionMode::Point", (int64)ENinjaGravityDirectionMode::Point },
		{ "ENinjaGravityDirectionMode::Line", (int64)ENinjaGravityDirectionMode::Line },
		{ "ENinjaGravityDirectionMode::Segment", (int64)ENinjaGravityDirectionMode::Segment },
		{ "ENinjaGravityDirectionMode::Spline", (int64)ENinjaGravityDirectionMode::Spline },
		{ "ENinjaGravityDirectionMode::Plane", (int64)ENinjaGravityDirectionMode::Plane },
		{ "ENinjaGravityDirectionMode::SplinePlane", (int64)ENinjaGravityDirectionMode::SplinePlane },
		{ "ENinjaGravityDirectionMode::Box", (int64)ENinjaGravityDirectionMode::Box },
		{ "ENinjaGravityDirectionMode::Collision", (int64)ENinjaGravityDirectionMode::Collision },
		{ "ENinjaGravityDirectionMode::Unused1", (int64)ENinjaGravityDirectionMode::Unused1 },
		{ "ENinjaGravityDirectionMode::Unused2", (int64)ENinjaGravityDirectionMode::Unused2 },
		{ "ENinjaGravityDirectionMode::Unused3", (int64)ENinjaGravityDirectionMode::Unused3 },
		{ "ENinjaGravityDirectionMode::Unused4", (int64)ENinjaGravityDirectionMode::Unused4 },
		{ "ENinjaGravityDirectionMode::Unused5", (int64)ENinjaGravityDirectionMode::Unused5 },
		{ "ENinjaGravityDirectionMode::Unused6", (int64)ENinjaGravityDirectionMode::Unused6 },
		{ "ENinjaGravityDirectionMode::Unused7", (int64)ENinjaGravityDirectionMode::Unused7 },
		{ "ENinjaGravityDirectionMode::Unused8", (int64)ENinjaGravityDirectionMode::Unused8 },
		{ "ENinjaGravityDirectionMode::Unused9", (int64)ENinjaGravityDirectionMode::Unused9 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Comment", "/** Gravity direction points to an axis-aligned box. */" },
		{ "Box.Name", "ENinjaGravityDirectionMode::Box" },
		{ "Box.ToolTip", "Gravity direction points to an axis-aligned box." },
		{ "Collision.Comment", "/** Gravity direction points to collision geometry of an Actor. */" },
		{ "Collision.Name", "ENinjaGravityDirectionMode::Collision" },
		{ "Collision.ToolTip", "Gravity direction points to collision geometry of an Actor." },
		{ "Comment", "/** Provides modes that determine direction of gravity. */" },
		{ "Fixed.Comment", "/** Gravity direction is fixed (it can be aligned to floor normal too). */" },
		{ "Fixed.Name", "ENinjaGravityDirectionMode::Fixed" },
		{ "Fixed.ToolTip", "Gravity direction is fixed (it can be aligned to floor normal too)." },
		{ "Line.Comment", "/** Gravity direction points to an infinite line. */" },
		{ "Line.Name", "ENinjaGravityDirectionMode::Line" },
		{ "Line.ToolTip", "Gravity direction points to an infinite line." },
		{ "ModuleRelativePath", "Public/NinjaTypes.h" },
		{ "Plane.Comment", "/** Gravity direction points to an infinite plane. */" },
		{ "Plane.Name", "ENinjaGravityDirectionMode::Plane" },
		{ "Plane.ToolTip", "Gravity direction points to an infinite plane." },
		{ "Point.Comment", "/** Gravity direction points to a fixed location or moving Actor. */" },
		{ "Point.Name", "ENinjaGravityDirectionMode::Point" },
		{ "Point.ToolTip", "Gravity direction points to a fixed location or moving Actor." },
		{ "Segment.Comment", "/** Gravity direction points to a line bounded by two points. */" },
		{ "Segment.Name", "ENinjaGravityDirectionMode::Segment" },
		{ "Segment.ToolTip", "Gravity direction points to a line bounded by two points." },
		{ "Spline.Comment", "/** Gravity direction points to a spline. */" },
		{ "Spline.Name", "ENinjaGravityDirectionMode::Spline" },
		{ "Spline.ToolTip", "Gravity direction points to a spline." },
		{ "SplinePlane.Comment", "/** Gravity direction points to an infinite plane determined by closest spline up vector. */" },
		{ "SplinePlane.Name", "ENinjaGravityDirectionMode::SplinePlane" },
		{ "SplinePlane.ToolTip", "Gravity direction points to an infinite plane determined by closest spline up vector." },
		{ "SplineTangent.Comment", "/** Gravity direction is determined by closest spline tangent. */" },
		{ "SplineTangent.Name", "ENinjaGravityDirectionMode::SplineTangent" },
		{ "SplineTangent.ToolTip", "Gravity direction is determined by closest spline tangent." },
		{ "ToolTip", "Provides modes that determine direction of gravity." },
		{ "Unused1.Comment", "/** Mode not used (#1). */" },
		{ "Unused1.Name", "ENinjaGravityDirectionMode::Unused1" },
		{ "Unused1.ToolTip", "Mode not used (#1)." },
		{ "Unused2.Comment", "/** Mode not used (#2). */" },
		{ "Unused2.Name", "ENinjaGravityDirectionMode::Unused2" },
		{ "Unused2.ToolTip", "Mode not used (#2)." },
		{ "Unused3.Comment", "/** Mode not used (#3). */" },
		{ "Unused3.Name", "ENinjaGravityDirectionMode::Unused3" },
		{ "Unused3.ToolTip", "Mode not used (#3)." },
		{ "Unused4.Comment", "/** Mode not used (#4). */" },
		{ "Unused4.Name", "ENinjaGravityDirectionMode::Unused4" },
		{ "Unused4.ToolTip", "Mode not used (#4)." },
		{ "Unused5.Comment", "/** Mode not used (#5). */" },
		{ "Unused5.Name", "ENinjaGravityDirectionMode::Unused5" },
		{ "Unused5.ToolTip", "Mode not used (#5)." },
		{ "Unused6.Comment", "/** Mode not used (#6). */" },
		{ "Unused6.Name", "ENinjaGravityDirectionMode::Unused6" },
		{ "Unused6.ToolTip", "Mode not used (#6)." },
		{ "Unused7.Comment", "/** Mode not used (#7). */" },
		{ "Unused7.Name", "ENinjaGravityDirectionMode::Unused7" },
		{ "Unused7.ToolTip", "Mode not used (#7)." },
		{ "Unused8.Comment", "/** Mode not used (#8). */" },
		{ "Unused8.Name", "ENinjaGravityDirectionMode::Unused8" },
		{ "Unused8.ToolTip", "Mode not used (#8)." },
		{ "Unused9.Comment", "/** Mode not used (#9). */" },
		{ "Unused9.Name", "ENinjaGravityDirectionMode::Unused9" },
		{ "Unused9.ToolTip", "Mode not used (#9)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NinjaCharacter,
		nullptr,
		"ENinjaGravityDirectionMode",
		"ENinjaGravityDirectionMode",
		Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode()
	{
		if (!Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.InnerSingleton, Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENinjaGravityDirectionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaTypes_h_Statics::EnumInfo[] = {
		{ ENinjaGravityDirectionMode_StaticEnum, TEXT("ENinjaGravityDirectionMode"), &Z_Registration_Info_UEnum_ENinjaGravityDirectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3274413042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaTypes_h_1701632294(TEXT("/Script/NinjaCharacter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
