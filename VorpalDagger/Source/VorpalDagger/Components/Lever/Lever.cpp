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
        bool GetDestructable(){
            return destructable;
        }
        void SetDestructable(){
        }
        void SetPointMod(){
        }
        bool GetPointMod(){
            return false;
        }
        bool GetLeverState(){
            return leverActiveState;
        }
        void ToggleLeverState(){
            leverActiveState = !leverActiveState;
        }

      
    private:
        bool destructable = false;
        bool pointMod = false;
        bool active = false;
        bool leverActiveState = false;
};
