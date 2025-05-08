// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/PuertaTransportadora2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertaTransportadora2() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APuertaTransportadora2();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APuertaTransportadora2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class APuertaTransportadora2
void APuertaTransportadora2::StaticRegisterNativesAPuertaTransportadora2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuertaTransportadora2);
UClass* Z_Construct_UClass_APuertaTransportadora2_NoRegister()
{
	return APuertaTransportadora2::StaticClass();
}
struct Z_Construct_UClass_APuertaTransportadora2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PuertaTransportadora2.h" },
		{ "ModuleRelativePath", "Public/PuertaTransportadora2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanciaUnica_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instancia \xef\xbf\xbdnica que se conserva (no es est\xef\xbf\xbdtica)\n" },
#endif
		{ "ModuleRelativePath", "Public/PuertaTransportadora2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instancia \xef\xbf\xbdnica que se conserva (no es est\xef\xbf\xbdtica)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "PuertaTransportadora2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente visual\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PuertaTransportadora2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente visual" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanciaUnica;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertaTransportadora2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuertaTransportadora2_Statics::NewProp_InstanciaUnica = { "InstanciaUnica", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuertaTransportadora2, InstanciaUnica), Z_Construct_UClass_APuertaTransportadora2_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanciaUnica_MetaData), NewProp_InstanciaUnica_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuertaTransportadora2_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuertaTransportadora2, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuertaTransportadora2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuertaTransportadora2_Statics::NewProp_InstanciaUnica,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuertaTransportadora2_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuertaTransportadora2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuertaTransportadora2_Statics::ClassParams = {
	&APuertaTransportadora2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APuertaTransportadora2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora2_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaTransportadora2_Statics::Class_MetaDataParams), Z_Construct_UClass_APuertaTransportadora2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuertaTransportadora2()
{
	if (!Z_Registration_Info_UClass_APuertaTransportadora2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuertaTransportadora2.OuterSingleton, Z_Construct_UClass_APuertaTransportadora2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuertaTransportadora2.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<APuertaTransportadora2>()
{
	return APuertaTransportadora2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuertaTransportadora2);
APuertaTransportadora2::~APuertaTransportadora2() {}
// End Class APuertaTransportadora2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuertaTransportadora2, APuertaTransportadora2::StaticClass, TEXT("APuertaTransportadora2"), &Z_Registration_Info_UClass_APuertaTransportadora2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuertaTransportadora2), 2174055230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora2_h_473381318(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_PuertaTransportadora2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
