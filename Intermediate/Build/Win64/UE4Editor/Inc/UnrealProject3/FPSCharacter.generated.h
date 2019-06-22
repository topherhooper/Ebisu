// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT3_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define UNREALPROJECT3_FPSCharacter_generated_h

#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealProject3"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealProject3"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_9_PROLOG
#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_RPC_WRAPPERS \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_INCLASS \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealProject3_Source_UnrealProject3_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPROJECT3_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject3_Source_UnrealProject3_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
