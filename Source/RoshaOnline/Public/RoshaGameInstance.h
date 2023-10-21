// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Net/UnrealNetwork.h"
#include "RoshaGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ROSHAONLINE_API URoshaGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	URoshaGameInstance();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Player DB")
	int MyAccountID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Player DB")
	int MyPlayerID;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
	
};
