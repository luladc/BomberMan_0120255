// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IEnemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_0120255_IEnemigo_generated_h
#error "IEnemigo.generated.h already included, missing '#pragma once' in IEnemigo.h"
#endif
#define BOMBERMAN_0120255_IEnemigo_generated_h

#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_0120255_API UIEnemigo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIEnemigo(UIEnemigo&&); \
	UIEnemigo(const UIEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_0120255_API, UIEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEnemigo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEnemigo) \
	BOMBERMAN_0120255_API virtual ~UIEnemigo();


#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIEnemigo(); \
	friend struct Z_Construct_UClass_UIEnemigo_Statics; \
public: \
	DECLARE_CLASS(UIEnemigo, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan_0120255"), BOMBERMAN_0120255_API) \
	DECLARE_SERIALIZER(UIEnemigo)


#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIEnemigo() {} \
public: \
	typedef UIEnemigo UClassType; \
	typedef IIEnemigo ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_10_PROLOG
#define FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_0120255_API UClass* StaticClass<class UIEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
