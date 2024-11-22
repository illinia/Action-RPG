// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"

AItems::AItems()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItems::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called!"))
}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

