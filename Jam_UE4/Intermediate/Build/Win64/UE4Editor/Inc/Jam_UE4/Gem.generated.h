// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGem;
struct FVector;
struct FRotator;
class AActor;
#ifdef JAM_UE4_Gem_generated_h
#error "Gem.generated.h already included, missing '#pragma once' in Gem.h"
#endif
#define JAM_UE4_Gem_generated_h

#define Jam_UE4_Source_Jam_UE4_Gem_h_12_SPARSE_DATA
#define Jam_UE4_Source_Jam_UE4_Gem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInstantiateGem); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInstantiateGem); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGem(); \
	friend struct Z_Construct_UClass_AGem_Statics; \
public: \
	DECLARE_CLASS(AGem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Jam_UE4"), NO_API) \
	DECLARE_SERIALIZER(AGem)


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGem(); \
	friend struct Z_Construct_UClass_AGem_Statics; \
public: \
	DECLARE_CLASS(AGem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Jam_UE4"), NO_API) \
	DECLARE_SERIALIZER(AGem)


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGem(AGem&&); \
	NO_API AGem(const AGem&); \
public:


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGem(AGem&&); \
	NO_API AGem(const AGem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGem)


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_PRIVATE_PROPERTY_OFFSET
#define Jam_UE4_Source_Jam_UE4_Gem_h_9_PROLOG
#define Jam_UE4_Source_Jam_UE4_Gem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_PRIVATE_PROPERTY_OFFSET \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_SPARSE_DATA \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_RPC_WRAPPERS \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_INCLASS \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Jam_UE4_Source_Jam_UE4_Gem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_PRIVATE_PROPERTY_OFFSET \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_SPARSE_DATA \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_INCLASS_NO_PURE_DECLS \
	Jam_UE4_Source_Jam_UE4_Gem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAM_UE4_API UClass* StaticClass<class AGem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Jam_UE4_Source_Jam_UE4_Gem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
