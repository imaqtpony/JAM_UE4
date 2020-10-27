// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Jam_UE4/DropGem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropGem() {}
// Cross Module References
	JAM_UE4_API UClass* Z_Construct_UClass_UDropGem_NoRegister();
	JAM_UE4_API UClass* Z_Construct_UClass_UDropGem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Jam_UE4();
// End Cross Module References
	void UDropGem::StaticRegisterNativesUDropGem()
	{
	}
	UClass* Z_Construct_UClass_UDropGem_NoRegister()
	{
		return UDropGem::StaticClass();
	}
	struct Z_Construct_UClass_UDropGem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropGem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Jam_UE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropGem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DropGem.h" },
		{ "ModuleRelativePath", "DropGem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropGem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropGem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDropGem_Statics::ClassParams = {
		&UDropGem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDropGem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDropGem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropGem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDropGem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropGem, 3054492625);
	template<> JAM_UE4_API UClass* StaticClass<UDropGem>()
	{
		return UDropGem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropGem(Z_Construct_UClass_UDropGem, &UDropGem::StaticClass, TEXT("/Script/Jam_UE4"), TEXT("UDropGem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropGem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
