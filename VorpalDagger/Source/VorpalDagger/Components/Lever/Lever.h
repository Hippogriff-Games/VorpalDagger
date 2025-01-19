// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Interfaces/Interactable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lever.generated.h"


UCLASS()
class VORPALDAGGER_API ALever : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALever();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
