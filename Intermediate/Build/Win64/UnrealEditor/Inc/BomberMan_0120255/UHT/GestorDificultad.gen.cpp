// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/GestorDificultad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorDificultad() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorDificultad();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorDificultad_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class AGestorDificultad
void AGestorDificultad::StaticRegisterNativesAGestorDificultad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestorDificultad);
UClass* Z_Construct_UClass_AGestorDificultad_NoRegister()
{
	return AGestorDificultad::StaticClass();
}
struct Z_Construct_UClass_AGestorDificultad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GestorDificultad.h" },
		{ "ModuleRelativePath", "Public/GestorDificultad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorDificultad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGestorDificultad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificultad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestorDificultad_Statics::ClassParams = {
	&AGestorDificultad::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificultad_Statics::Class_MetaDataParams), Z_Construct_UClass_AGestorDificultad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGestorDificultad()
{
	if (!Z_Registration_Info_UClass_AGestorDificultad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestorDificultad.OuterSingleton, Z_Construct_UClass_AGestorDificultad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGestorDificultad.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<AGestorDificultad>()
{
	return AGestorDificultad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorDificultad);
AGestorDificultad::~AGestorDificultad() {}
// End Class AGestorDificultad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificultad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGestorDificultad, AGestorDificultad::StaticClass, TEXT("AGestorDificultad"), &Z_Registration_Info_UClass_AGestorDificultad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestorDificultad), 2051833732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificultad_h_3392540275(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificultad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificultad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
