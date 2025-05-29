// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/LaberintoConcreto2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcreto2() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto2();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto2_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ALaberintoConcreto2
void ALaberintoConcreto2::StaticRegisterNativesALaberintoConcreto2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoConcreto2);
UClass* Z_Construct_UClass_ALaberintoConcreto2_NoRegister()
{
	return ALaberintoConcreto2::StaticClass();
}
struct Z_Construct_UClass_ALaberintoConcreto2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoConcreto2.h" },
		{ "ModuleRelativePath", "Public/LaberintoConcreto2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcreto2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberintoConcreto2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcreto2_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcreto2, IILaberintoBuilder), false },  // 2750216167
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcreto2_Statics::ClassParams = {
	&ALaberintoConcreto2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto2_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoConcreto2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoConcreto2()
{
	if (!Z_Registration_Info_UClass_ALaberintoConcreto2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoConcreto2.OuterSingleton, Z_Construct_UClass_ALaberintoConcreto2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoConcreto2.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ALaberintoConcreto2>()
{
	return ALaberintoConcreto2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcreto2);
ALaberintoConcreto2::~ALaberintoConcreto2() {}
// End Class ALaberintoConcreto2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoConcreto2, ALaberintoConcreto2::StaticClass, TEXT("ALaberintoConcreto2"), &Z_Registration_Info_UClass_ALaberintoConcreto2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoConcreto2), 2124881313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto2_h_2586633863(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
