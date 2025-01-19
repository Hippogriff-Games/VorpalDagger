// Fill out your copyright notice in the Description page of Project Settings.


#include "NpcBase_cpp.h"

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
void ANpcBase_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANpcBase_cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

