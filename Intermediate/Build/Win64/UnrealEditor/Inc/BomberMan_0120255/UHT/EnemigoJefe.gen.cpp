// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_0120255/Public/EnemigoJefe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoJefe() {}

// Begin Cross Module References
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AEnemigoJefe();
BOMBERMAN_0120255_API UClass* Z_Construct_UClass_AEnemigoJefe_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_0120255();
// End Cross Module References

// Begin Class AEnemigoJefe Function AtaqueEspecial
struct Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Jefe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo especial\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemigoJefe.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo especial" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigoJefe, nullptr, "AtaqueEspecial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigoJefe::execAtaqueEspecial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AtaqueEspecial();
	P_NATIVE_END;
}
// End Class AEnemigoJefe Function AtaqueEspecial

// Begin Class AEnemigoJefe Function InvocarRefuerzos
struct Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Jefe" },
		{ "ModuleRelativePath", "Public/EnemigoJefe.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigoJefe, nullptr, "InvocarRefuerzos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigoJefe::execInvocarRefuerzos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvocarRefuerzos();
	P_NATIVE_END;
}
// End Class AEnemigoJefe Function InvocarRefuerzos

// Begin Class AEnemigoJefe
void AEnemigoJefe::StaticRegisterNativesAEnemigoJefe()
{
	UClass* Class = AEnemigoJefe::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AtaqueEspecial", &AEnemigoJefe::execAtaqueEspecial },
		{ "InvocarRefuerzos", &AEnemigoJefe::execInvocarRefuerzos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoJefe);
UClass* Z_Construct_UClass_AEnemigoJefe_NoRegister()
{
	return AEnemigoJefe::StaticClass();
}
struct Z_Construct_UClass_AEnemigoJefe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoJefe.h" },
		{ "ModuleRelativePath", "Public/EnemigoJefe.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigoJefe_AtaqueEspecial, "AtaqueEspecial" }, // 2958418086
		{ &Z_Construct_UFunction_AEnemigoJefe_InvocarRefuerzos, "InvocarRefuerzos" }, // 2715455140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoJefe>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoJefe_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_0120255,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoJefe_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoJefe_Statics::ClassParams = {
	&AEnemigoJefe::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoJefe_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoJefe_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoJefe()
{
	if (!Z_Registration_Info_UClass_AEnemigoJefe.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoJefe.OuterSingleton, Z_Construct_UClass_AEnemigoJefe_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoJefe.OuterSingleton;
}
template<> BOMBERMAN_0120255_API UClass* StaticClass<AEnemigoJefe>()
{
	return AEnemigoJefe::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoJefe);
AEnemigoJefe::~AEnemigoJefe() {}
// End Class AEnemigoJefe

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_EnemigoJefe_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoJefe, AEnemigoJefe::StaticClass, TEXT("AEnemigoJefe"), &Z_Registration_Info_UClass_AEnemigoJefe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoJefe), 3683203184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_EnemigoJefe_h_3562190147(TEXT("/Script/BomberMan_0120255"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_EnemigoJefe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_BomberMan_0120255_Source_BomberMan_0120255_Public_EnemigoJefe_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
