// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Udemy_SU_Course/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

float AItem::TransformedSin()
{
	float transformedSin = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	// Educational logs
	// UE_LOG(LogTemp, Warning, TEXT("TransformedSin: %f"), transformedSin);
	// UE_LOG(LogTemp, Warning, TEXT("Item Z location: %f"), GetActorLocation().Z);

	return transformedSin;
}

float AItem::TransformedCos()
{
	float transformedCos = FMath::Cos(RunningTime * TimeConstant);
	return transformedCos;
}

FRotator AItem::TransformedRotation()
{
	FRotator transformedRotation =
		FRotator(0, RunningTime * RotationConstant, 0);
	return transformedRotation;
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;
}
