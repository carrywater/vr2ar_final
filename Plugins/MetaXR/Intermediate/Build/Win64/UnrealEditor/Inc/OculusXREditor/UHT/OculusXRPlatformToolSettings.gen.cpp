// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXREditor/Public/OculusXRPlatformToolSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPlatformToolSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings();
	OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings_NoRegister();
	OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType();
	OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation();
	OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget();
	OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfig();
	OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray();
	OCULUSXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRedistPackage();
	UPackage* Z_Construct_UPackage__Script_OculusXREditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRPlatformTarget;
	static UEnum* EOculusXRPlatformTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPlatformTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRPlatformTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("EOculusXRPlatformTarget"));
		}
		return Z_Registration_Info_UEnum_EOculusXRPlatformTarget.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRPlatformTarget>()
	{
		return EOculusXRPlatformTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enumerators[] = {
		{ "EOculusXRPlatformTarget::Rift", (int64)EOculusXRPlatformTarget::Rift },
		{ "EOculusXRPlatformTarget::Quest", (int64)EOculusXRPlatformTarget::Quest },
		{ "EOculusXRPlatformTarget::Length", (int64)EOculusXRPlatformTarget::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enum_MetaDataParams[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRPlatformTarget::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EOculusXRPlatformTarget::Quest" },
		{ "Rift.DisplayName", "Rift" },
		{ "Rift.Name", "EOculusXRPlatformTarget::Rift" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		"EOculusXRPlatformTarget",
		"EOculusXRPlatformTarget",
		Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPlatformTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRPlatformTarget.InnerSingleton, Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRPlatformTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRGamepadEmulation;
	static UEnum* EOculusXRGamepadEmulation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("EOculusXRGamepadEmulation"));
		}
		return Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRGamepadEmulation>()
	{
		return EOculusXRGamepadEmulation_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enumerators[] = {
		{ "EOculusXRGamepadEmulation::Off", (int64)EOculusXRGamepadEmulation::Off },
		{ "EOculusXRGamepadEmulation::Twinstick", (int64)EOculusXRGamepadEmulation::Twinstick },
		{ "EOculusXRGamepadEmulation::RightDPad", (int64)EOculusXRGamepadEmulation::RightDPad },
		{ "EOculusXRGamepadEmulation::LeftDPad", (int64)EOculusXRGamepadEmulation::LeftDPad },
		{ "EOculusXRGamepadEmulation::Length", (int64)EOculusXRGamepadEmulation::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enum_MetaDataParams[] = {
		{ "LeftDPad.DisplayName", "Left D Pad" },
		{ "LeftDPad.Name", "EOculusXRGamepadEmulation::LeftDPad" },
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRGamepadEmulation::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EOculusXRGamepadEmulation::Off" },
		{ "RightDPad.DisplayName", "Right D Pad" },
		{ "RightDPad.Name", "EOculusXRGamepadEmulation::RightDPad" },
		{ "Twinstick.DisplayName", "Twinstick" },
		{ "Twinstick.Name", "EOculusXRGamepadEmulation::Twinstick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		"EOculusXRGamepadEmulation",
		"EOculusXRGamepadEmulation",
		Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.InnerSingleton, Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRGamepadEmulation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRAssetType;
	static UEnum* EOculusXRAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("EOculusXRAssetType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRAssetType.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRAssetType>()
	{
		return EOculusXRAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enumerators[] = {
		{ "EOculusXRAssetType::Default", (int64)EOculusXRAssetType::Default },
		{ "EOculusXRAssetType::Store", (int64)EOculusXRAssetType::Store },
		{ "EOculusXRAssetType::Language_Pack", (int64)EOculusXRAssetType::Language_Pack },
		{ "EOculusXRAssetType::Length", (int64)EOculusXRAssetType::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EOculusXRAssetType::Default" },
		{ "Language_Pack.DisplayName", "Language Pack" },
		{ "Language_Pack.Name", "EOculusXRAssetType::Language_Pack" },
		{ "Length.DisplayName", "Invlaid" },
		{ "Length.Name", "EOculusXRAssetType::Length" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
		{ "Store.DisplayName", "Store" },
		{ "Store.Name", "EOculusXRAssetType::Store" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		"EOculusXRAssetType",
		"EOculusXRAssetType",
		Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRAssetType.InnerSingleton, Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRAssetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRRedistPackage;
class UScriptStruct* FOculusXRRedistPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRedistPackage, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("OculusXRRedistPackage"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.OuterSingleton;
}
template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<FOculusXRRedistPackage>()
{
	return FOculusXRRedistPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Included_MetaData[];
#endif
		static void NewProp_Included_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Included;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRedistPackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included_SetBit(void* Obj)
	{
		((FOculusXRRedistPackage*)Obj)->Included = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included = { "Included", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRRedistPackage), &Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included_MetaData), Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRedistPackage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRedistPackage, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Included,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		&NewStructOps,
		"OculusXRRedistPackage",
		Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::PropPointers),
		sizeof(FOculusXRRedistPackage),
		alignof(FOculusXRRedistPackage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRedistPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRRedistPackage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRAssetConfig;
class UScriptStruct* FOculusXRAssetConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAssetConfig, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("OculusXRAssetConfig"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.OuterSingleton;
}
template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<FOculusXRAssetConfig>()
{
	return FOculusXRAssetConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Required_MetaData[];
#endif
		static void NewProp_Required_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Required;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Sku;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAssetConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, AssetType), Z_Construct_UEnum_OculusXREditor_EOculusXRAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType_MetaData), Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType_MetaData) }; // 1309014877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required_SetBit(void* Obj)
	{
		((FOculusXRAssetConfig*)Obj)->Required = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required = { "Required", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRAssetConfig), &Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required_MetaData), Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Sku_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfig, Sku), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Sku_MetaData), Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Sku_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_AssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Required,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewProp_Sku,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		&NewStructOps,
		"OculusXRAssetConfig",
		Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::PropPointers),
		sizeof(FOculusXRAssetConfig),
		alignof(FOculusXRAssetConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRAssetConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray;
class UScriptStruct* FOculusXRAssetConfigArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("OculusXRAssetConfigArray"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.OuterSingleton;
}
template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<FOculusXRAssetConfigArray>()
{
	return FOculusXRAssetConfigArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAssetConfigArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray_Inner = { "ConfigArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRAssetConfig, METADATA_PARAMS(0, nullptr) }; // 3785879861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray = { "ConfigArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAssetConfigArray, ConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray_MetaData), Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray_MetaData) }; // 3785879861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewProp_ConfigArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		&NewStructOps,
		"OculusXRAssetConfigArray",
		Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::PropPointers),
		sizeof(FOculusXRAssetConfigArray),
		alignof(FOculusXRAssetConfigArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAssetConfigArray()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray.InnerSingleton;
	}
	void UOculusXRPlatformToolSettings::StaticRegisterNativesUOculusXRPlatformToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPlatformToolSettings);
	UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings_NoRegister()
	{
		return UOculusXRPlatformToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftLaunchParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftLaunchParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftFireWallException_MetaData[];
#endif
		static void NewProp_OculusRiftFireWallException_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OculusRiftFireWallException;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OculusRedistPackages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRedistPackages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusRedistPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadDebugSymbols_MetaData[];
#endif
		static void NewProp_UploadDebugSymbols_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UploadDebugSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSymbolsOnly_MetaData[];
#endif
		static void NewProp_DebugSymbolsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugSymbolsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OculusTargetPlatform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusTargetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusTargetPlatform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationID_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationID_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationToken_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationToken_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationToken;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseNote_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseNote_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseNote;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLaunchFilePath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusLaunchFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLaunchFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OculusRiftGamepadEmulation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftGamepadEmulation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusRiftGamepadEmulation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLanguagePacksPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusLanguagePacksPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLanguagePacksPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusExpansionFilesPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusExpansionFilesPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusExpansionFilesPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusSymbolDirPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusSymbolDirPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusSymbolDirPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OculusAssetConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusAssetConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusAssetConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OculusXRPlatformToolSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory = { "OculusRiftBuildDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftBuildDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion = { "OculusRiftBuildVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftBuildVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams = { "OculusRiftLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftLaunchParams), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->OculusRiftFireWallException = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException = { "OculusRiftFireWallException", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath = { "OculusRift2DLaunchPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRift2DLaunchPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams = { "OculusRift2DLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRift2DLaunchParams), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages_Inner = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRRedistPackage, METADATA_PARAMS(0, nullptr) }; // 3412122287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRedistPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData) }; // 3412122287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->UploadDebugSymbols = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols = { "UploadDebugSymbols", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_SetBit(void* Obj)
	{
		((UOculusXRPlatformToolSettings*)Obj)->DebugSymbolsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly = { "DebugSymbolsOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPlatformToolSettings), &Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_BuildID_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, BuildID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_BuildID_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_BuildID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform = { "OculusTargetPlatform", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusTargetPlatform), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatformTarget, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData) }; // 3249641918
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID_Inner = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusApplicationID), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken_Inner = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusApplicationToken), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_Inner = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusReleaseChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote_Inner = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusReleaseNote), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_Inner = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusLaunchFilePath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation = { "OculusRiftGamepadEmulation", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusRiftGamepadEmulation), Z_Construct_UEnum_OculusXREditor_EOculusXRGamepadEmulation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData) }; // 464484576
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_Inner = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusLanguagePacksPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_Inner = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusExpansionFilesPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_Inner = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusSymbolDirPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_Inner = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRAssetConfigArray, METADATA_PARAMS(0, nullptr) }; // 1125029298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPlatformToolSettings, OculusAssetConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData) }; // 1125029298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRedistPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_UploadDebugSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_BuildID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusTargetPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusApplicationToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusReleaseNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::NewProp_OculusAssetConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPlatformToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::ClassParams = {
		&UOculusXRPlatformToolSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRPlatformToolSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton, Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPlatformToolSettings.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UClass* StaticClass<UOculusXRPlatformToolSettings>()
	{
		return UOculusXRPlatformToolSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPlatformToolSettings);
	UOculusXRPlatformToolSettings::~UOculusXRPlatformToolSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::EnumInfo[] = {
		{ EOculusXRPlatformTarget_StaticEnum, TEXT("EOculusXRPlatformTarget"), &Z_Registration_Info_UEnum_EOculusXRPlatformTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3249641918U) },
		{ EOculusXRGamepadEmulation_StaticEnum, TEXT("EOculusXRGamepadEmulation"), &Z_Registration_Info_UEnum_EOculusXRGamepadEmulation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 464484576U) },
		{ EOculusXRAssetType_StaticEnum, TEXT("EOculusXRAssetType"), &Z_Registration_Info_UEnum_EOculusXRAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1309014877U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRRedistPackage::StaticStruct, Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics::NewStructOps, TEXT("OculusXRRedistPackage"), &Z_Registration_Info_UScriptStruct_OculusXRRedistPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRedistPackage), 3412122287U) },
		{ FOculusXRAssetConfig::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics::NewStructOps, TEXT("OculusXRAssetConfig"), &Z_Registration_Info_UScriptStruct_OculusXRAssetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAssetConfig), 3785879861U) },
		{ FOculusXRAssetConfigArray::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics::NewStructOps, TEXT("OculusXRAssetConfigArray"), &Z_Registration_Info_UScriptStruct_OculusXRAssetConfigArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAssetConfigArray), 1125029298U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPlatformToolSettings, UOculusXRPlatformToolSettings::StaticClass, TEXT("UOculusXRPlatformToolSettings"), &Z_Registration_Info_UClass_UOculusXRPlatformToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPlatformToolSettings), 467569863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_4172194250(TEXT("/Script/OculusXREditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
