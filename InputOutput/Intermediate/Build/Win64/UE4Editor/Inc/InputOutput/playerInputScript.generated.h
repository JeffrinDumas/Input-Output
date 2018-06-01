// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTOUTPUT_playerInputScript_generated_h
#error "playerInputScript.generated.h already included, missing '#pragma once' in playerInputScript.h"
#endif
#define INPUTOUTPUT_playerInputScript_generated_h

#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_RPC_WRAPPERS
#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplayerInputScript(); \
	friend INPUTOUTPUT_API class UClass* Z_Construct_UClass_AplayerInputScript(); \
public: \
	DECLARE_CLASS(AplayerInputScript, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/InputOutput"), NO_API) \
	DECLARE_SERIALIZER(AplayerInputScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAplayerInputScript(); \
	friend INPUTOUTPUT_API class UClass* Z_Construct_UClass_AplayerInputScript(); \
public: \
	DECLARE_CLASS(AplayerInputScript, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/InputOutput"), NO_API) \
	DECLARE_SERIALIZER(AplayerInputScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplayerInputScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplayerInputScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerInputScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerInputScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerInputScript(AplayerInputScript&&); \
	NO_API AplayerInputScript(const AplayerInputScript&); \
public:


#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplayerInputScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerInputScript(AplayerInputScript&&); \
	NO_API AplayerInputScript(const AplayerInputScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerInputScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerInputScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplayerInputScript)


#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_PRIVATE_PROPERTY_OFFSET
#define InputOutput_Source_InputOutput_Public_playerInputScript_h_12_PROLOG
#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_PRIVATE_PROPERTY_OFFSET \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_RPC_WRAPPERS \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_INCLASS \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InputOutput_Source_InputOutput_Public_playerInputScript_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_PRIVATE_PROPERTY_OFFSET \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_INCLASS_NO_PURE_DECLS \
	InputOutput_Source_InputOutput_Public_playerInputScript_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InputOutput_Source_InputOutput_Public_playerInputScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
