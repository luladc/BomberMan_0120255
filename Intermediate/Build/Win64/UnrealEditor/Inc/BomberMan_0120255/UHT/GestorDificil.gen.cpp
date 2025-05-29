// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/GestorDificil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorDificil() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ADirector_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorDificil();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorDificil_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto3_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class AGestorDificil
void AGestorDificil::StaticRegisterNativesAGestorDificil()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestorDificil);
UClass* Z_Construct_UClass_AGestorDificil_NoRegister()
{
	return AGestorDificil::StaticClass();
}
struct Z_Construct_UClass_AGestorDificil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GestorDificil.h" },
		{ "ModuleRelativePath", "Public/GestorDificil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab3_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorDificil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorLab3_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorDificil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorLab3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorDificil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorDificil_Statics::NewProp_BuilderLab3 = { "BuilderLab3", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorDificil, BuilderLab3), Z_Construct_UClass_ALaberintoConcreto3_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab3_MetaData), NewProp_BuilderLab3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorDificil_Statics::NewProp_DirectorLab3 = { "DirectorLab3", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorDificil, DirectorLab3), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorLab3_MetaData), NewProp_DirectorLab3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGestorDificil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorDificil_Statics::NewProp_BuilderLab3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorDificil_Statics::NewProp_DirectorLab3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificil_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGestorDificil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorDificil_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UConfiguracionNivel_NoRegister, (int32)VTABLE_OFFSET(AGestorDificil, IConfiguracionNivel), false },  // 1071098063
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestorDificil_Statics::ClassParams = {
	&AGestorDificil::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGestorDificil_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificil_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDificil_Statics::Class_MetaDataParams), Z_Construct_UClass_AGestorDificil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGestorDificil()
{
	if (!Z_Registration_Info_UClass_AGestorDificil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestorDificil.OuterSingleton, Z_Construct_UClass_AGestorDificil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGestorDificil.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<AGestorDificil>()
{
	return AGestorDificil::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorDificil);
AGestorDificil::~AGestorDificil() {}
// End Class AGestorDificil

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGestorDificil, AGestorDificil::StaticClass, TEXT("AGestorDificil"), &Z_Registration_Info_UClass_AGestorDificil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestorDificil), 2976811998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificil_h_4213573237(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorDificil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
