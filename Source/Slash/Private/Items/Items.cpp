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
}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;
	
	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	
	
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f)
}

