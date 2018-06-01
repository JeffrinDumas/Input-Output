// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InputOutputGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputOutputGameModeBase() {}
// Cross Module References
	INPUTOUTPUT_API UClass* Z_Construct_UClass_AInputOutputGameModeBase_NoRegister();
	INPUTOUTPUT_API UClass* Z_Construct_UClass_AInputOutputGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InputOutput();
// End Cross Module References
	void AInputOutputGameModeBase::StaticRegisterNativesAInputOutputGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInputOutputGameModeBase_NoRegister()
	{
		return AInputOutputGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AInputOutputGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_InputOutput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "InputOutputGameModeBase.h" },
				{ "ModuleRelativePath", "InputOutputGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInputOutputGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInputOutputGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInputOutputGameModeBase, 3810947822);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInputOutputGameModeBase(Z_Construct_UClass_AInputOutputGameModeBase, &AInputOutputGameModeBase::StaticClass, TEXT("/Script/InputOutput"), TEXT("AInputOutputGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputOutputGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
