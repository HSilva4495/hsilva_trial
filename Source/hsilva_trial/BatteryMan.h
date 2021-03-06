// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Blueprint/UserWidget.h"


#include "BatteryMan.generated.h"

UCLASS()
class HSILVA_TRIAL_API ABatteryMan : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABatteryMan();
    //third person camera
     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
         USpringArmComponent* CameraBoom;
     //follows a camera 
     UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
         UCameraComponent* FollowCamera; 

     //Starting from here it would dictate the movement of the character in question
     void MoveForward(float Axis);
     void MoveRight(float Axis);
     
     //determines end dead game condition
     bool bDead; 

    

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
