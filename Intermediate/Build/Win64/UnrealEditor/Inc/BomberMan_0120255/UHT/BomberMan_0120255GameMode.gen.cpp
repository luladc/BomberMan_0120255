// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/BomberMan_0120255GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_0120255GameMode() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABloqueRaro_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABomberMan_0120255GameMode();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ABomberMan_0120255GameMode_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ADirector_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ABomberMan_0120255GameMode
void ABomberMan_0120255GameMode::StaticRegisterNativesABomberMan_0120255GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_0120255GameMode);
UClass* Z_Construct_UClass_ABomberMan_0120255GameMode_NoRegister()
{
	return ABomberMan_0120255GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_0120255GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_0120255GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_0120255GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab_MetaData[] = {
		{ "Category", "GameModeBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El actor constructor\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_0120255GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El actor constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorLab_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "BomberMan_0120255GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquePrototipo_MetaData[] = {
		{ "Category", "Prototype" },
		{ "ModuleRelativePath", "BomberMan_0120255GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorLab;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloquePrototipo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_0120255GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_BuilderLab = { "BuilderLab", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_0120255GameMode, BuilderLab), Z_Construct_UClass_ALaberintoConcreto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab_MetaData), NewProp_BuilderLab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_DirectorLab = { "DirectorLab", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_0120255GameMode, DirectorLab), Z_Construct_UClass_ADirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorLab_MetaData), NewProp_DirectorLab_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_BloquePrototipo = { "BloquePrototipo", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_0120255GameMode, BloquePrototipo), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueRaro_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquePrototipo_MetaData), NewProp_BloquePrototipo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_BuilderLab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_DirectorLab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::NewProp_BloquePrototipo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::ClassParams = {
	&ABomberMan_0120255GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_0120255GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_0120255GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_0120255GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_0120255GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_0120255GameMode.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ABomberMan_0120255GameMode>()
{
	return ABomberMan_0120255GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_0120255GameMode);
ABomberMan_0120255GameMode::~ABomberMan_0120255GameMode() {}
// End Class ABomberMan_0120255GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_BomberMan_0120255GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_0120255GameMode, ABomberMan_0120255GameMode::StaticClass, TEXT("ABomberMan_0120255GameMode"), &Z_Registration_Info_UClass_ABomberMan_0120255GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_0120255GameMode), 3220529940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_BomberMan_0120255GameMode_h_805650016(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_BomberMan_0120255GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_BomberMan_0120255GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
