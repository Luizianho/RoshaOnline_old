// Fill out your copyright notice in the Description page of Project Settings.

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
	MyAccountID = 15;
	MyPlayerID = 20;
}