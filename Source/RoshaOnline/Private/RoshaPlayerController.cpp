// Fill out your copyright notice in the Description page of Project Settings.


#include "RoshaPlayerController.h"
#include "Kismet/GameplayStatics.h" 
#include "MMOCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "RoshaGameInstance.h"

ARoshaPlayerController::ARoshaPlayerController()
{
	CheatClass = nullptr;
	//LocalMMOCharacter = nullptr;
}

bool ARoshaPlayerController::AuthorizeEnter_Validate(float ValAccountID, float ValPlayerID)
{
	return true;
}

void ARoshaPlayerController::AuthorizeEnter_Implementation(float ValAccountID, float ValPlayerID)
{
	UE_LOG(LogTemp, Warning, TEXT("Account ID: %d"), ValAccountID);
	UE_LOG(LogTemp, Warning, TEXT("Player ID: %d"), ValPlayerID);
}

void ARoshaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (PlayerCharacter)
	{
		LocalMMOCharacter = Cast<AMMOCharacter>(PlayerCharacter);

		URoshaGameInstance* MMOInstance = Cast<URoshaGameInstance>(UGameplayStatics::GetGameInstance(this));

		if (MMOInstance)
		{
			UE_LOG(LogTemp, Warning, TEXT("MMOInstance jest OK!"));
			//local variable from MMOInstance
			float AccountID = MMOInstance->MyAccountID;
			float PlayerID = MMOInstance->MyPlayerID;

			if (HasAuthority())
			{
				UE_LOG(LogTemp, Warning, TEXT("Jestem na serwerze!"));
				AuthorizeEnter(AccountID, PlayerID);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Jestem na kliencie!"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MMOInstance is NULL"));
		}
	}
}
