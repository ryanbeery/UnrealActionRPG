#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActionRPGCharacter.generated.h"

UCLASS()
class UDEMY_SU_COURSE_API AActionRPGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AActionRPGCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	virtual void BeginPlay() override;
	void MoveForward(float Value);
};
