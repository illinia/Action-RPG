// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"
#include "Slash/DebugMacros.h"

#define THIRTY 30


AItems::AItems()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItems::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	SetActorLocation(FVector(0.f, 0.f, 50.f));
	SetActorRotation(FRotator(FRotator(0.f, 45.f, 0.f)));
	
	
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();


	DRAW_SPHERE(Location, FColor::Red)
	// DRAW_LINE(Location, Location + Forward * 100.f)
	// DRAW_POINT(Location + Forward * 100.f);
	DRAW_VECTOR(Location, Location + Forward * 100.f);
}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

