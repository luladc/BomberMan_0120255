// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/ConfiguracionNivel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfiguracionNivel() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UConfiguracionNivel();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Interface UConfiguracionNivel
void UConfiguracionNivel::StaticRegisterNativesUConfiguracionNivel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfiguracionNivel);
UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister()
{
	return UConfiguracionNivel::StaticClass();
}
struct Z_Construct_UClass_UConfiguracionNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguracionNivel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConfiguracionNivel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConfiguracionNivel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfiguracionNivel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfiguracionNivel_Statics::ClassParams = {
	&UConfiguracionNivel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConfiguracionNivel_Statics::Class_MetaDataParams), Z_Construct_UClass_UConfiguracionNivel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConfiguracionNivel()
{
	if (!Z_Registration_Info_UClass_UConfiguracionNivel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfiguracionNivel.OuterSingleton, Z_Construct_UClass_UConfiguracionNivel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConfiguracionNivel.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<UConfiguracionNivel>()
{
	return UConfiguracionNivel::StaticClass();
}
UConfiguracionNivel::UConfiguracionNivel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConfiguracionNivel);
UConfiguracionNivel::~UConfiguracionNivel() {}
// End Interface UConfiguracionNivel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_ConfiguracionNivel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConfiguracionNivel, UConfiguracionNivel::StaticClass, TEXT("UConfiguracionNivel"), &Z_Registration_Info_UClass_UConfiguracionNivel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfiguracionNivel), 1071098063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_ConfiguracionNivel_h_2539209525(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_ConfiguracionNivel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_ConfiguracionNivel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
