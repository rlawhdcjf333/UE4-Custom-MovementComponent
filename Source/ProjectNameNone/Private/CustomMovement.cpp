// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectNameNone/Public/CustomMovement.h"

#include "ProjectNameNone/ProjectNameNone.h"

UCustomMovement::UCustomMovement()
	:Super()
{
	bOrientRotationToMovement = true; 	
	RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	JumpZVelocity = 600.f;
	AirControl = 0.2f;
}

void UCustomMovement::BeginPlay()
{
	Super::BeginPlay();
	
	GAME_LOG("CustomMovment on Operation")
}
