// Fill out your copyright notice in the Description page of Project Settings.

#include "UserInput.h"
#include "GameFramework/Pawn.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/World.h"

// Sets default values
AUserInput::AUserInput()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("My Meshs");
}


// Called when the game starts or when spawned
void AUserInput::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUserInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AUserInput::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

	check(PlayerInputComponent);

	Super::SetupPlayerInputComponent(PlayerInputComponent);	

	PlayerInputComponent->BindAction("onClick", IE_Pressed, this, &AUserInput::Shoot);
}

void AUserInput::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("pew"));

	UWorld* const  World = GetWorld();
	if (World != NULL)
	{
		const FRotator SpawnRotation = GetControlRotation();
		const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		World->SpawnActor<AMyProjectProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
	}	

}
