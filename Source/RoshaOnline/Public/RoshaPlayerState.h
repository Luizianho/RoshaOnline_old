// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "RoshaPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ROSHAONLINE_API ARoshaPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	ARoshaPlayerState();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	int32 StateCharacterID;
	
};
