// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRfpsPrototype.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1VRfpsPrototype() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();

	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSCharacter_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSCharacter();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSPawn_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSPawn();
	VRFPSPROTOTYPE_API class UPackage* Z_Construct_UPackage__Script_VRfpsPrototype();
	void AVRFPSCharacter::StaticRegisterNativesAVRFPSCharacter()
	{
	}
	UClass* Z_Construct_UClass_AVRFPSCharacter_NoRegister()
	{
		return AVRFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = AVRFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AVRFPSCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRFPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VRFPSCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRFPSCharacter, 3732945560);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRFPSCharacter(Z_Construct_UClass_AVRFPSCharacter, &AVRFPSCharacter::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("AVRFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRFPSCharacter);
	void AVRFPSPawn::StaticRegisterNativesAVRFPSPawn()
	{
	}
	UClass* Z_Construct_UClass_AVRFPSPawn_NoRegister()
	{
		return AVRFPSPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRFPSPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = AVRFPSPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ThisMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThisMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ThisMovementComponent, AVRFPSPawn), 0x00200800000a001d, Z_Construct_UClass_UPawnMovementComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRFPSPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRFPSPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VRFPSPawn.h"));
				MetaData->SetValue(NewProp_ThisMovementComponent, TEXT("Category"), TEXT("VRFPSPawn"));
				MetaData->SetValue(NewProp_ThisMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ThisMovementComponent, TEXT("ModuleRelativePath"), TEXT("VRFPSPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRFPSPawn, 619025206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRFPSPawn(Z_Construct_UClass_AVRFPSPawn, &AVRFPSPawn::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("AVRFPSPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRFPSPawn);
	UPackage* Z_Construct_UPackage__Script_VRfpsPrototype()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/VRfpsPrototype")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x4B341FD9;
			Guid.B = 0xAA191961;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
