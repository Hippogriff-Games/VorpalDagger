#include "Lever.h"
// Sets default values
ALever::ALever()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

class Lever : public Interactable {
    public:
        UFUNCTION(BlueprintPure) bool GetDestructable(){
            return destructable;
        }
		UFUNCTION(BlueprintCallable) void SetDestructable(){
        }
		UFUNCTION(BlueprintCallable) void SetPointMod(){
        }
		UFUNCTION(BlueprintPure) bool GetPointMod(){
            return pointMod;
        }
		UFUNCTION(BlueprintPure) bool GetLeverState(){
            return leverActiveState;
        }
		UFUNCTION(BlueprintCallable) void ToggleLeverState(){
            leverActiveState = !leverActiveState;
        }

      
    private:
        bool destructable = false;
        bool pointMod = false;
        bool active = false;
        bool leverActiveState = false;
};
