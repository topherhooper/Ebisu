// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject3/UnrealProject3GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealProject3GameModeBase() {}
// Cross Module References
	UNREALPROJECT3_API UClass* Z_Construct_UClass_AUnrealProject3GameModeBase_NoRegister();
	UNREALPROJECT3_API UClass* Z_Construct_UClass_AUnrealProject3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealProject3();
// End Cross Module References
	void AUnrealProject3GameModeBase::StaticRegisterNativesAUnrealProject3GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealProject3GameModeBase_NoRegister()
	{
		return AUnrealProject3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealProject3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealProject3GameModeBase.h" },
		{ "ModuleRelativePath", "UnrealProject3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealProject3GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::ClassParams = {
		&AUnrealProject3GameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealProject3GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealProject3GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealProject3GameModeBase, 590323404);
	template<> UNREALPROJECT3_API UClass* StaticClass<AUnrealProject3GameModeBase>()
	{
		return AUnrealProject3GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealProject3GameModeBase(Z_Construct_UClass_AUnrealProject3GameModeBase, &AUnrealProject3GameModeBase::StaticClass, TEXT("/Script/UnrealProject3"), TEXT("AUnrealProject3GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealProject3GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
