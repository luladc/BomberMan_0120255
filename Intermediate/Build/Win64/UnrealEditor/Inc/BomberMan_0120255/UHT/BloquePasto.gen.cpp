// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/BloquePasto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquePasto() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloquePasto();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloquePasto_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ABloquePasto
void ABloquePasto::StaticRegisterNativesABloquePasto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquePasto);
UClass* Z_Construct_UClass_ABloquePasto_NoRegister()
{
	return ABloquePasto::StaticClass();
}
struct Z_Construct_UClass_ABloquePasto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloquePasto.h" },
		{ "ModuleRelativePath", "Public/BloquePasto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquePasto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloquePasto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePasto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquePasto_Statics::ClassParams = {
	&ABloquePasto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePasto_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquePasto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquePasto()
{
	if (!Z_Registration_Info_UClass_ABloquePasto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquePasto.OuterSingleton, Z_Construct_UClass_ABloquePasto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquePasto.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ABloquePasto>()
{
	return ABloquePasto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquePasto);
ABloquePasto::~ABloquePasto() {}
// End Class ABloquePasto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloquePasto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquePasto, ABloquePasto::StaticClass, TEXT("ABloquePasto"), &Z_Registration_Info_UClass_ABloquePasto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquePasto), 2580734243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloquePasto_h_3077199706(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloquePasto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloquePasto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
