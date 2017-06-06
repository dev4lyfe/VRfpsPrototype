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
	AIMODULE_API class UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API class UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API class UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();

	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_UBTService_CheckForPlayer();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_UBTTask_MoveToPlayer_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_UBTTask_MoveToPlayer();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AEnemyAI_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AEnemyAI();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AEnemyCharacter();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSCharacter_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSCharacter();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSPawn_NoRegister();
	VRFPSPROTOTYPE_API class UClass* Z_Construct_UClass_AVRFPSPawn();
	VRFPSPROTOTYPE_API class UPackage* Z_Construct_UPackage__Script_VRfpsPrototype();
	void UBTService_CheckForPlayer::StaticRegisterNativesUBTService_CheckForPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister()
	{
		return UBTService_CheckForPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBTService();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = UBTService_CheckForPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UBTService_CheckForPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BTService_CheckForPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BTService_CheckForPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_CheckForPlayer, 2007840501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CheckForPlayer(Z_Construct_UClass_UBTService_CheckForPlayer, &UBTService_CheckForPlayer::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("UBTService_CheckForPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CheckForPlayer);
	void UBTTask_MoveToPlayer::StaticRegisterNativesUBTTask_MoveToPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToPlayer_NoRegister()
	{
		return UBTTask_MoveToPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBTTask_BlackboardBase();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = UBTTask_MoveToPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UBTTask_MoveToPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BTTask_MoveToPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BTTask_MoveToPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveToPlayer, 1206744095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveToPlayer(Z_Construct_UClass_UBTTask_MoveToPlayer, &UBTTask_MoveToPlayer::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("UBTTask_MoveToPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveToPlayer);
	void AEnemyAI::StaticRegisterNativesAEnemyAI()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAI_NoRegister()
	{
		return AEnemyAI::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyAI()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = AEnemyAI::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BehaviorComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BehaviorComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BehaviorComp, AEnemyAI), 0x0040000000082008, Z_Construct_UClass_UBehaviorTreeComponent_NoRegister());
				UProperty* NewProp_BlackboardComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlackboardComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlackboardComp, AEnemyAI), 0x0040000000082008, Z_Construct_UClass_UBlackboardComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyAI> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyAI.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyAI.h"));
				MetaData->SetValue(NewProp_BehaviorComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BehaviorComp, TEXT("ModuleRelativePath"), TEXT("EnemyAI.h"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("ModuleRelativePath"), TEXT("EnemyAI.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAI, 521582834);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAI(Z_Construct_UClass_AEnemyAI, &AEnemyAI::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("AEnemyAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAI);
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_VRfpsPrototype();
			OuterClass = AEnemyCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BotBehavior = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BotBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BotBehavior, AEnemyCharacter), 0x0010000000000001, Z_Construct_UClass_UBehaviorTree_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
				MetaData->SetValue(NewProp_BotBehavior, TEXT("Category"), TEXT("Behavior"));
				MetaData->SetValue(NewProp_BotBehavior, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacter, 1129781819);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter(Z_Construct_UClass_AEnemyCharacter, &AEnemyCharacter::StaticClass, TEXT("/Script/VRfpsPrototype"), TEXT("AEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
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
			Guid.A = 0x7573F382;
			Guid.B = 0xFDC3778B;
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
