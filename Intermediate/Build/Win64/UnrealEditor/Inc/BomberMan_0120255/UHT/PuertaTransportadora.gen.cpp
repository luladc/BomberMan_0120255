// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/PuertaTransportadora.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertaTransportadora() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APuertaTransportadora();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APuertaTransportadora_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class APuertaTransportadora
void APuertaTransportadora::StaticRegisterNativesAPuertaTransportadora()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuertaTransportadora);
UClass* Z_Construct_UClass_APuertaTransportadora_NoRegister()
{
	return APuertaTransportadora::StaticClass();
}
struct Z_Construct_UClass_APuertaTransportadora_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PuertaTransportadora.h" },
		{ "ModuleRelativePath", "Public/PuertaTransportadora.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertaTransportadora>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APuertaTransportadora_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuertaTransportadora_Statics::ClassParams = {
	&APuertaTransportadora::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora_Statics::Class_MetaDataParams), Z_Construct_UClass_APuertaTransportadora_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuertaTransportadora()
{
	if (!Z_Registration_Info_UClass_APuertaTransportadora.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuertaTransportadora.OuterSingleton, Z_Construct_UClass_APuertaTransportadora_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuertaTransportadora.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<APuertaTransportadora>()
{
	return APuertaTransportadora::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuertaTransportadora);
APuertaTransportadora::~APuertaTransportadora() {}
// End Class APuertaTransportadora

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuertaTransportadora, APuertaTransportadora::StaticClass, TEXT("APuertaTransportadora"), &Z_Registration_Info_UClass_APuertaTransportadora, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuertaTransportadora), 2577265903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora_h_63594254(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
