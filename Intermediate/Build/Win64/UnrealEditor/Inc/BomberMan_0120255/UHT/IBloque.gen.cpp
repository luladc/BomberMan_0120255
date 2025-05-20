// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/IBloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBloque() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UIBloque();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UIBloque_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Interface UIBloque
void UIBloque::StaticRegisterNativesUIBloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBloque);
UClass* Z_Construct_UClass_UIBloque_NoRegister()
{
	return UIBloque::StaticClass();
}
struct Z_Construct_UClass_UIBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IBloque.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBloque_Statics::ClassParams = {
	&UIBloque::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloque_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBloque()
{
	if (!Z_Registration_Info_UClass_UIBloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBloque.OuterSingleton, Z_Construct_UClass_UIBloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBloque.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<UIBloque>()
{
	return UIBloque::StaticClass();
}
UIBloque::UIBloque(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBloque);
UIBloque::~UIBloque() {}
// End Interface UIBloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IBloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBloque, UIBloque::StaticClass, TEXT("UIBloque"), &Z_Registration_Info_UClass_UIBloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBloque), 303431048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IBloque_h_2747859914(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IBloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_IBloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
