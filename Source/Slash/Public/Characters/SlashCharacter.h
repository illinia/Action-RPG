// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterTypes.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "SlashCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputMappingContext;
class UInputAction;
class UGroomComponent;
class AItem;

UCLASS()
class SLASH_API ASlashCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASlashCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputMappingContext* SlashContext;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* MovementAction;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* LookAction;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* JumpAction;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* EKeyAction;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* AttackAction;
	//
	// UPROPERTY(EditAnywhere, Category=Input)
	// UInputAction* DodgeAction;
	//
	// void Move(const FInputActionValue& Value);
	// void Look(const FInputActionValue& Value);
	// void EKeyPressed();
	// virtual void Attack();
	// void Dodge();

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void EKeyPressed();

private:
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;
	
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;

	UPROPERTY(VisibleAnywhere, Category=Hair)
	UGroomComponent* Hair;

	UPROPERTY(VisibleAnywhere, Category=Hair)
	UGroomComponent* Eyebrows;

	UPROPERTY(VisibleInstanceOnly)
	AItem* OverlappingItem;

public:
	FORCEINLINE void SetOverlappingItem(AItem* Item) {OverlappingItem = Item;}
	FORCEINLINE ECharacterState GetCharacterState() const {return CharacterState;}
};
