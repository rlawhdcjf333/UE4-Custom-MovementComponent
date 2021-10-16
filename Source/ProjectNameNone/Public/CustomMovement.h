// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "CustomMovement.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTNAMENONE_API UCustomMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()

protected:
	
	virtual void BeginPlay() override;

public:

	UCustomMovement();
};
