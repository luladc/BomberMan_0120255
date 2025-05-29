// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/Laberinto3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberinto3() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberinto3();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberinto3_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ALaberinto3
void ALaberinto3::StaticRegisterNativesALaberinto3()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberinto3);
UClass* Z_Construct_UClass_ALaberinto3_NoRegister()
{
	return ALaberinto3::StaticClass();
}
struct Z_Construct_UClass_ALaberinto3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Laberinto3.h" },
		{ "ModuleRelativePath", "Public/Laberinto3.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberinto3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberinto3_Statics::ClassParams = {
	&ALaberinto3::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto3_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberinto3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberinto3()
{
	if (!Z_Registration_Info_UClass_ALaberinto3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberinto3.OuterSingleton, Z_Construct_UClass_ALaberinto3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberinto3.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ALaberinto3>()
{
	return ALaberinto3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberinto3);
ALaberinto3::~ALaberinto3() {}
// End Class ALaberinto3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Laberinto3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberinto3, ALaberinto3::StaticClass, TEXT("ALaberinto3"), &Z_Registration_Info_UClass_ALaberinto3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto3), 937005035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Laberinto3_h_3456294795(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Laberinto3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Laberinto3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
