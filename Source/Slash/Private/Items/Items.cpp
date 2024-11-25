// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"
#include "Slash/DebugMacros.h"

#define THIRTY 30


AItems::AItems()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

void AItems::BeginPlay()
{
	Super::BeginPlay();
}

float AItems::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItems::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	AddActorWorldRotation(FRotator(0.f, 90 * DeltaTime, 0.f));
}


