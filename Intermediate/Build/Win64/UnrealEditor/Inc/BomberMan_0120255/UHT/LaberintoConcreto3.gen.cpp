// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/LaberintoConcreto3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcreto3() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto3();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_ALaberintoConcreto3_NoRegister();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class ALaberintoConcreto3
void ALaberintoConcreto3::StaticRegisterNativesALaberintoConcreto3()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoConcreto3);
UClass* Z_Construct_UClass_ALaberintoConcreto3_NoRegister()
{
	return ALaberintoConcreto3::StaticClass();
}
struct Z_Construct_UClass_ALaberintoConcreto3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoConcreto3.h" },
		{ "ModuleRelativePath", "Public/LaberintoConcreto3.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcreto3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberintoConcreto3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcreto3_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcreto3, IILaberintoBuilder), false },  // 2750216167
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcreto3_Statics::ClassParams = {
	&ALaberintoConcreto3::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto3_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoConcreto3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoConcreto3()
{
	if (!Z_Registration_Info_UClass_ALaberintoConcreto3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoConcreto3.OuterSingleton, Z_Construct_UClass_ALaberintoConcreto3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoConcreto3.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<ALaberintoConcreto3>()
{
	return ALaberintoConcreto3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcreto3);
ALaberintoConcreto3::~ALaberintoConcreto3() {}
// End Class ALaberintoConcreto3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoConcreto3, ALaberintoConcreto3::StaticClass, TEXT("ALaberintoConcreto3"), &Z_Registration_Info_UClass_ALaberintoConcreto3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoConcreto3), 265127796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto3_h_466953139(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_LaberintoConcreto3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
