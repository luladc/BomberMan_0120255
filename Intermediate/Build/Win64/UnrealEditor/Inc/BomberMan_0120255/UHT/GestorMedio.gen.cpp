// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/GestorMedio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorMedio() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ADirector_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorMedio();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AGestorMedio_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto2_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UConfiguracionNivel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class AGestorMedio
void AGestorMedio::StaticRegisterNativesAGestorMedio()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestorMedio);
UClass* Z_Construct_UClass_AGestorMedio_NoRegister()
{
	return AGestorMedio::StaticClass();
}
struct Z_Construct_UClass_AGestorMedio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GestorMedio.h" },
		{ "ModuleRelativePath", "Public/GestorMedio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab2_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorMedio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorLab2_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Public/GestorMedio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorLab2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorMedio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorMedio_Statics::NewProp_BuilderLab2 = { "BuilderLab2", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorMedio, BuilderLab2), Z_Construct_UClass_ALaberintoConcreto2_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab2_MetaData), NewProp_BuilderLab2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGestorMedio_Statics::NewProp_DirectorLab2 = { "DirectorLab2", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGestorMedio, DirectorLab2), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorLab2_MetaData), NewProp_DirectorLab2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGestorMedio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorMedio_Statics::NewProp_BuilderLab2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGestorMedio_Statics::NewProp_DirectorLab2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorMedio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGestorMedio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorMedio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGestorMedio_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UConfiguracionNivel_NoRegister, (int32)VTABLE_OFFSET(AGestorMedio, IConfiguracionNivel), false },  // 1071098063
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestorMedio_Statics::ClassParams = {
	&AGestorMedio::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGestorMedio_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGestorMedio_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorMedio_Statics::Class_MetaDataParams), Z_Construct_UClass_AGestorMedio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGestorMedio()
{
	if (!Z_Registration_Info_UClass_AGestorMedio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestorMedio.OuterSingleton, Z_Construct_UClass_AGestorMedio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGestorMedio.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<AGestorMedio>()
{
	return AGestorMedio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorMedio);
AGestorMedio::~AGestorMedio() {}
// End Class AGestorMedio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorMedio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGestorMedio, AGestorMedio::StaticClass, TEXT("AGestorMedio"), &Z_Registration_Info_UClass_AGestorMedio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestorMedio), 3758688499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorMedio_h_3553584851(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorMedio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_GestorMedio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
