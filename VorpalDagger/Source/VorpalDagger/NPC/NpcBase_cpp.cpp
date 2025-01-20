// Fill out your copyright notice in the Description page of Project Settings.


#include "NpcBase_cpp.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"

// Sets default values
ANpcBase_cpp::ANpcBase_cpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called when the game starts or when spawned
void ANpcBase_cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//void ANpcBase_cpp::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

//void ANpcBase_cpp::ResetTimer()
//{
//	doOnce = false;
//}
//
//void ANpcBase_cpp::Death()
//{
//	if (ACharacter* Character = Cast <ACharacter>(GetOwner()))
//	{
//		if (USkeletalMeshComponent* CharacterMesh = Character->GetMesh())
//		{
//			CharacterMesh->SetCollisionProfileName(FName("Ragdoll"));
//			CharacterMesh->SetSimulatePhysics(true);
//		}
//	}
//	//UCharacterMovementComponent* MoveComp = GetCharacterMovement();
//	////SetActorEnableCollision(false);
//	//MoveComp->DisableMovement();
//	//if (!doOnce)
//	//{
//	//	doOnce = true;
//	//	FTimerHandle Timer;
//	//	GetWorldTimerManager().SetTimer(Timer, this, &ANpcBase_cpp::ResetTimer, 3.0, false);
//	//}
//	
//}
//




