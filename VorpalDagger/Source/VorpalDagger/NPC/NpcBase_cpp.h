// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NpcBase_cpp.generated.h"

UCLASS()
class VORPALDAGGER_API ANpcBase_cpp : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANpcBase_cpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
		bool doOnce = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//UFUNCTION(BlueprintCallable)
	//void Death();
	//void ResetTimer();
	

};
