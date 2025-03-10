// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EH_GP3_25/EH_GP3_25GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEH_GP3_25GameMode() {}

// Begin Cross Module References
EH_GP3_25_API UClass* Z_Construct_UClass_AEH_GP3_25GameMode();
EH_GP3_25_API UClass* Z_Construct_UClass_AEH_GP3_25GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_EH_GP3_25();
// End Cross Module References

// Begin Class AEH_GP3_25GameMode
void AEH_GP3_25GameMode::StaticRegisterNativesAEH_GP3_25GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEH_GP3_25GameMode);
UClass* Z_Construct_UClass_AEH_GP3_25GameMode_NoRegister()
{
	return AEH_GP3_25GameMode::StaticClass();
}
struct Z_Construct_UClass_AEH_GP3_25GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EH_GP3_25GameMode.h" },
		{ "ModuleRelativePath", "EH_GP3_25GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEH_GP3_25GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEH_GP3_25GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EH_GP3_25,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEH_GP3_25GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEH_GP3_25GameMode_Statics::ClassParams = {
	&AEH_GP3_25GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEH_GP3_25GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEH_GP3_25GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEH_GP3_25GameMode()
{
	if (!Z_Registration_Info_UClass_AEH_GP3_25GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEH_GP3_25GameMode.OuterSingleton, Z_Construct_UClass_AEH_GP3_25GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEH_GP3_25GameMode.OuterSingleton;
}
template<> EH_GP3_25_API UClass* StaticClass<AEH_GP3_25GameMode>()
{
	return AEH_GP3_25GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEH_GP3_25GameMode);
AEH_GP3_25GameMode::~AEH_GP3_25GameMode() {}
// End Class AEH_GP3_25GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEH_GP3_25GameMode, AEH_GP3_25GameMode::StaticClass, TEXT("AEH_GP3_25GameMode"), &Z_Registration_Info_UClass_AEH_GP3_25GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEH_GP3_25GameMode), 3884962082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25GameMode_h_1979148999(TEXT("/Script/EH_GP3_25"),
	Z_CompiledInDeferFile_FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
