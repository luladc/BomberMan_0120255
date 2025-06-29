// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/Bloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABomba_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UIBloque_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_USubscriptor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ABloque
void ABloque::StaticRegisterNativesABloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque);
UClass* Z_Construct_UClass_ABloque_NoRegister()
{
	return ABloque::StaticClass();
}
struct Z_Construct_UClass_ABloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Public/Bloque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_MetaData[] = {
		{ "Category", "Bloque" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bloque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEsDestructible_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Public/Bloque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bomba_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bloque.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloque;
	static void NewProp_bEsDestructible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEsDestructible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MallaBloque = { "MallaBloque", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque, MallaBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloque_MetaData), NewProp_MallaBloque_MetaData) };
void Z_Construct_UClass_ABloque_Statics::NewProp_bEsDestructible_SetBit(void* Obj)
{
	((ABloque*)Obj)->bEsDestructible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_bEsDestructible = { "bEsDestructible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloque), &Z_Construct_UClass_ABloque_Statics::NewProp_bEsDestructible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEsDestructible_MetaData), NewProp_bEsDestructible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_Bomba = { "Bomba", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque, Bomba), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bomba_MetaData), NewProp_Bomba_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MallaBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_bEsDestructible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_Bomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloque_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloque_NoRegister, (int32)VTABLE_OFFSET(ABloque, IIBloque), false },  // 303431048
	{ Z_Construct_UClass_USubscriptor_NoRegister, (int32)VTABLE_OFFSET(ABloque, ISubscriptor), false },  // 82344296
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
	&ABloque::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque()
{
	if (!Z_Registration_Info_UClass_ABloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque.OuterSingleton, Z_Construct_UClass_ABloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ABloque>()
{
	return ABloque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
ABloque::~ABloque() {}
// End Class ABloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Bloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque, ABloque::StaticClass, TEXT("ABloque"), &Z_Registration_Info_UClass_ABloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque), 2603480601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Bloque_h_1523289020(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Bloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_Bloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
