// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Udemy_SU_Course/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	FVector MultForward = Location + Forward * 100.f;

	DRAW_BOX(Location, FVector(100.f, 100.f, 100.f));
	// DRAW_SPHERE(Location);
	// DRAW_COLOR_SPHERE(Location, FColor::Green);
	DRAW_VECTOR(Location, MultForward);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
