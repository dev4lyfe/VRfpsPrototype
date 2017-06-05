// Fill out your copyright notice in the Description page of Project Settings.

#include "VRFPSCharacter.h"
#include "Engine.h"
#include "HeadMountedDisplay.h"
#include "GameFramework/InputSettings.h"

// Sets default values
AVRFPSCharacter::AVRFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVRFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	switch (GEngine->HMDDevice->GetHMDDeviceType()) {
	case EHMDDeviceType::DT_OculusRift:
		GEngine->HMDDevice->SetTrackingOrigin(EHMDTrackingOrigin::Floor);
		break;

	case EHMDDeviceType::DT_SteamVR:
		GEngine->HMDDevice->SetTrackingOrigin(EHMDTrackingOrigin::Floor);

		break;

	case EHMDDeviceType::DT_Morpheus:
		GEngine->HMDDevice->SetTrackingOrigin(EHMDTrackingOrigin::Eye);

		break;
	}

	if (GEngine)
	{
		// Put up a debug message for five seconds. The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));
	}
}

// Called every frame
void AVRFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MotionControllerThumbLeft_Y", this, &AVRFPSCharacter::MoveForward);
	InputComponent->BindAxis("MotionControllerThumbLeft_X", this, &AVRFPSCharacter::MoveRight);
}

void AVRFPSCharacter::MoveForward(float Val)
{

	if (Val != 0.0f)
	{
		FString TheFloatStr = FString::SanitizeFloat(Val);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TheFloatStr);
		AddMovementInput(GetActorForwardVector(), Val);
	}
}

void AVRFPSCharacter::MoveRight(float Val)
{
	if (Val != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Val);
	}
}
