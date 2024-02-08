// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/CryptRaiderCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRaiderCharacter() {}
// Cross Module References
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderCharacter();
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderCharacter_NoRegister();
	CRYPTRAIDER_API UFunction* Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CryptRaider, nullptr, "OnItemUsed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed)
{
	OnItemUsed.ProcessMulticastDelegate<UObject>(NULL);
}
	void ACryptRaiderCharacter::StaticRegisterNativesACryptRaiderCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRaiderCharacter);
	UClass* Z_Construct_UClass_ACryptRaiderCharacter_NoRegister()
	{
		return ACryptRaiderCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACryptRaiderCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUsed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptRaiderCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CryptRaiderCharacter.h" },
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACryptRaiderCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACryptRaiderCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACryptRaiderCharacter, TurnRateGamepad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_TurnRateGamepad_MetaData), Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_TurnRateGamepad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_OnItemUsed_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "CryptRaiderCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_OnItemUsed = { "OnItemUsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACryptRaiderCharacter, OnItemUsed), Z_Construct_UDelegateFunction_CryptRaider_OnItemUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_OnItemUsed_MetaData), Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_OnItemUsed_MetaData) }; // 2580921812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACryptRaiderCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptRaiderCharacter_Statics::NewProp_OnItemUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptRaiderCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRaiderCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRaiderCharacter_Statics::ClassParams = {
		&ACryptRaiderCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACryptRaiderCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACryptRaiderCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACryptRaiderCharacter()
	{
		if (!Z_Registration_Info_UClass_ACryptRaiderCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRaiderCharacter.OuterSingleton, Z_Construct_UClass_ACryptRaiderCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptRaiderCharacter.OuterSingleton;
	}
	template<> CRYPTRAIDER_API UClass* StaticClass<ACryptRaiderCharacter>()
	{
		return ACryptRaiderCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRaiderCharacter);
	ACryptRaiderCharacter::~ACryptRaiderCharacter() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UNREAL_ENGINE_UE_CryptRaider_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UNREAL_ENGINE_UE_CryptRaider_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRaiderCharacter, ACryptRaiderCharacter::StaticClass, TEXT("ACryptRaiderCharacter"), &Z_Registration_Info_UClass_ACryptRaiderCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRaiderCharacter), 3153408047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UNREAL_ENGINE_UE_CryptRaider_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_2061424317(TEXT("/Script/CryptRaider"),
		Z_CompiledInDeferFile_FID_GitHub_UNREAL_ENGINE_UE_CryptRaider_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UNREAL_ENGINE_UE_CryptRaider_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
