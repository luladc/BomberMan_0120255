// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/GestorFacil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorFacil() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ADirector_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorFacil();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorFacil_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class AGestorFacil
void AGestorFacil::StaticRegisterNativesAGestorFacil()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestorFacil);
UClass* Z_Construct_UClass_AGestorFacil_NoRegister()
{
	return AGestorFacil::StaticClass();
}
struct Z_Construct_UClass_AGestorFacil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GestorFacil.h" },
		{ "ModuleRelativePath", "Public/GestorFacil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorFacil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorLab_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorFacil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorLab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorFacil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorFacil_Statics::NewProp_BuilderLab = { "BuilderLab", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorFacil, BuilderLab), Z_Construct_UClass_ALaberintoConcreto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab_MetaData), NewProp_BuilderLab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorFacil_Statics::NewProp_DirectorLab = { "DirectorLab", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorFacil, DirectorLab), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorLab_MetaData), NewProp_DirectorLab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGestorFacil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorFacil_Statics::NewProp_BuilderLab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorFacil_Statics::NewProp_DirectorLab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorFacil_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGestorFacil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorFacil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorFacil_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UConfiguracionNivel_NoRegister, (int32)VTABLE_OFFSET(AGestorFacil, IConfiguracionNivel), false },  // 1071098063
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestorFacil_Statics::ClassParams = {
	&AGestorFacil::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGestorFacil_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGestorFacil_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorFacil_Statics::Class_MetaDataParams), Z_Construct_UClass_AGestorFacil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGestorFacil()
{
	if (!Z_Registration_Info_UClass_AGestorFacil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestorFacil.OuterSingleton, Z_Construct_UClass_AGestorFacil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGestorFacil.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<AGestorFacil>()
{
	return AGestorFacil::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorFacil);
AGestorFacil::~AGestorFacil() {}
// End Class AGestorFacil

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorFacil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGestorFacil, AGestorFacil::StaticClass, TEXT("AGestorFacil"), &Z_Registration_Info_UClass_AGestorFacil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestorFacil), 300654409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorFacil_h_2896486460(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorFacil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorFacil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
