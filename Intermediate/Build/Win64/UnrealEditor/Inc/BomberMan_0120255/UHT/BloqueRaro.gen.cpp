// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/BloqueRaro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueRaro() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloqueRaro();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloqueRaro_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UIBloque_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ABloqueRaro
void ABloqueRaro::StaticRegisterNativesABloqueRaro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueRaro);
UClass* Z_Construct_UClass_ABloqueRaro_NoRegister()
{
	return ABloqueRaro::StaticClass();
}
struct Z_Construct_UClass_ABloqueRaro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueRaro.h" },
		{ "ModuleRelativePath", "Public/BloqueRaro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_MetaData[] = {
		{ "Category", "Bloque" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueRaro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueRaro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueRaro_Statics::NewProp_MallaBloque = { "MallaBloque", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueRaro, MallaBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloque_MetaData), NewProp_MallaBloque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueRaro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueRaro_Statics::NewProp_MallaBloque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRaro_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueRaro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRaro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueRaro_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloque_NoRegister, (int32)VTABLE_OFFSET(ABloqueRaro, IIBloque), false },  // 303431048
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueRaro_Statics::ClassParams = {
	&ABloqueRaro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueRaro_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRaro_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueRaro_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueRaro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueRaro()
{
	if (!Z_Registration_Info_UClass_ABloqueRaro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueRaro.OuterSingleton, Z_Construct_UClass_ABloqueRaro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueRaro.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ABloqueRaro>()
{
	return ABloqueRaro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueRaro);
ABloqueRaro::~ABloqueRaro() {}
// End Class ABloqueRaro

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloqueRaro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueRaro, ABloqueRaro::StaticClass, TEXT("ABloqueRaro"), &Z_Registration_Info_UClass_ABloqueRaro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueRaro), 2706488737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloqueRaro_h_1198005854(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloqueRaro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_BloqueRaro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
