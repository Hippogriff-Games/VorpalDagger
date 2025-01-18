#include "Interfaces/Interactable.hpp"


class Lever : public Interactable {
    public:
        bool getDestructable(){
            return destructable;
        }
        void setDestructable(){
        }
        void setPointMod(){
        }
        bool getPointMod(){
            return false;
        }
        bool getLeverState(){
            return leverActiveState;
        }
        void toggleLeverState(){
            leverActiveState != leverActiveState;
        }

      
    private:
        bool destructable = false;
        bool pointMod = false;
        bool active = false;
        bool leverActiveState = false;
};