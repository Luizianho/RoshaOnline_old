// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RoshaPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ROSHAONLINE_API ARoshaPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ARoshaPlayerController();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	class AMMOCharacter* LocalMMOCharacter;

	UPROPERTY()
	class ARoshaPlayerState* LocalPlayerState;

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
	void AuthorizeEnter(int32 ValAccountID, int32 ValPlayerID);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Info")
	int32 InstanceAccountID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Info")
	int32 InstancePlayerID;


};
