// Fill out your copyright notice in the Description page of Project Settings.

#include "VRFPSPawn.h"
#include "Engine.h"
#include "HeadMountedDisplay.h"
#include "GameFramework/InputSettings.h"

// Sets default values
AVRFPSPawn::AVRFPSPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ThisMovementComponent = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("VRMovementComponent"));
	ThisMovementComponent->UpdatedComponent = RootComponent;
}

// Called when the game starts or when spawned
void AVRFPSPawn::BeginPlay()
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

	
}

UPawnMovementComponent* AVRFPSPawn::GetMovementComponent() const
{
	return ThisMovementComponent;
}

void AVRFPSPawn::MoveForward(float Val)
{
	
	//if (Val != 0.0f)
//	{
		FString TheFloatStr = FString::SanitizeFloat(Val);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TheFloatStr);
		AddMovementInput(GetActorForwardVector(), Val);

//	}
}

void AVRFPSPawn::MoveRight(float Val)
{
	if (Val != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Val);
	}
}

// Called every frame
void AVRFPSPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AVRFPSPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MotionControllerThumbLeft_Y", this, &AVRFPSPawn::MoveForward);
	InputComponent->BindAxis("MotionControllerThumbLeft_X", this, &AVRFPSPawn::MoveRight);




}

