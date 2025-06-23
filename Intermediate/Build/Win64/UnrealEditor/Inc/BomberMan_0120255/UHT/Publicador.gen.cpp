// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/Publicador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicador() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APublicador();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_APublicador_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class APublicador
void APublicador::StaticRegisterNativesAPublicador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APublicador);
UClass* Z_Construct_UClass_APublicador_NoRegister()
{
	return APublicador::StaticClass();
}
struct Z_Construct_UClass_APublicador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Publicador.h" },
		{ "ModuleRelativePath", "Public/Publicador.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Subscribers of this Publisher\n" },
#endif
		{ "ModuleRelativePath", "Public/Publicador.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Subscribers of this Publisher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APublicador_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APublicador_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APublicador, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subscribers_MetaData), NewProp_Subscribers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APublicador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicador_Statics::NewProp_Subscribers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicador_Statics::NewProp_Subscribers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APublicador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APublicador_Statics::ClassParams = {
	&APublicador::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APublicador_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_Statics::Class_MetaDataParams), Z_Construct_UClass_APublicador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APublicador()
{
	if (!Z_Registration_Info_UClass_APublicador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APublicador.OuterSingleton, Z_Construct_UClass_APublicador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APublicador.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<APublicador>()
{
	return APublicador::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APublicador);
APublicador::~APublicador() {}
// End Class APublicador

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Publicador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APublicador, APublicador::StaticClass, TEXT("APublicador"), &Z_Registration_Info_UClass_APublicador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APublicador), 4040244757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Publicador_h_334417079(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Publicador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Publicador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
