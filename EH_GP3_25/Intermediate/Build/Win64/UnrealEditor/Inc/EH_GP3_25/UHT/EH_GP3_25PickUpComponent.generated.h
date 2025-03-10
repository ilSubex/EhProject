// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EH_GP3_25PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AEH_GP3_25Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EH_GP3_25_EH_GP3_25PickUpComponent_generated_h
#error "EH_GP3_25PickUpComponent.generated.h already included, missing '#pragma once' in EH_GP3_25PickUpComponent.h"
#endif
#define EH_GP3_25_EH_GP3_25PickUpComponent_generated_h

#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_12_DELEGATE \
EH_GP3_25_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AEH_GP3_25Character* PickUpCharacter);


#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEH_GP3_25PickUpComponent(); \
	friend struct Z_Construct_UClass_UEH_GP3_25PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UEH_GP3_25PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EH_GP3_25"), NO_API) \
	DECLARE_SERIALIZER(UEH_GP3_25PickUpComponent)


#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEH_GP3_25PickUpComponent(UEH_GP3_25PickUpComponent&&); \
	UEH_GP3_25PickUpComponent(const UEH_GP3_25PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEH_GP3_25PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEH_GP3_25PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEH_GP3_25PickUpComponent) \
	NO_API virtual ~UEH_GP3_25PickUpComponent();


#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_14_PROLOG
#define FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EH_GP3_25_API UClass* StaticClass<class UEH_GP3_25PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jesus_Desktop_EH_GP3_25_Source_EH_GP3_25_EH_GP3_25PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
