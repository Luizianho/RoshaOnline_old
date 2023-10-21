// Fill out your copyright notice in the Description page of Project Settings.


#include "Movement_AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MMOCharacter.h"


void UMovement_AnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			MMOCharacter = Cast<AMMOCharacter>(Pawn);
		}
	}
}

void UMovement_AnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();

		if (MMOCharacter == nullptr)
		{
			MMOCharacter = Cast<AMMOCharacter>(Pawn);
		}
	}
}