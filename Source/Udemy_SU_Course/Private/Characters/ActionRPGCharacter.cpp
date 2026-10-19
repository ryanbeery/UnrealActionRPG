#include "Characters/ActionRPGCharacter.h"

AActionRPGCharacter::AActionRPGCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AActionRPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AActionRPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActionRPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &AActionRPGCharacter::MoveForward);
}

void AActionRPGCharacter::MoveForward(float Value)
{
	if (Controller && Value != 0.f)
	{
		FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, Value);
	}
}

