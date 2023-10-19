// Fill out your copyright notice in the Description page of Project Settings.


#include "MMOCharacter.h"

// Sets default values
AMMOCharacter::AMMOCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Player Ring
	Ring = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Ring"));
	Ring->SetupAttachment(GetMesh());

	// Player Amulet
	Amulet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Amulet"));
	Amulet->SetupAttachment(GetMesh());

	// Player Tools
	Tools = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Tools"));
	Tools->SetupAttachment(GetMesh());

	// Player Head
	Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
	Head->SetupAttachment(GetMesh());

	// Player Hands
	Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
	Hands->SetupAttachment(GetMesh());

	// Player Legs
	Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
	Legs->SetupAttachment(GetMesh());

	// Player Feet
	Feet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Feet"));
	Feet->SetupAttachment(GetMesh());

	// Player ShieldSlot
	ShieldSlot = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShieldSlot"));
	ShieldSlot->SetupAttachment(GetMesh());

	// Player WeaponSlot
	WeaponSlot = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponSlot"));
	WeaponSlot->SetupAttachment(GetMesh());

	// Player Slot1
	Slot1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Slot1"));
	Slot1->SetupAttachment(GetMesh());

	// Player Slot2
	Slot2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Slot2"));
	Slot2->SetupAttachment(GetMesh());

	// Player Slot3
	Slot3 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Slot3"));
	Slot3->SetupAttachment(GetMesh());

}

// Called when the game starts or when spawned
void AMMOCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMMOCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMMOCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

