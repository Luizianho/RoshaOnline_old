// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "RoshaGameInstance.h"
#include "Net/UnrealNetwork.h"

void URoshaGameInstance::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URoshaGameInstance, MyAccountID);
    DOREPLIFETIME(URoshaGameInstance, MyPlayerID);
}

URoshaGameInstance::URoshaGameInstance()
{
	MyAccountID = 15.f;
	MyPlayerID = 20.f;
}