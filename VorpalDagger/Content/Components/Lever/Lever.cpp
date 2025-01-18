#include "Interfaces/Interactable.hpp"


class Lever : public Interactable {
    public:
        bool getDestructable(){
            return destructable;
        }
        void setDestructable(){
        }
        bool getPoinMod(){
            return pointMod;
        }
        void setPointMod(){
        }
        bool getPointMod(){
            return false;
        }
        void toggleLeverState(){

        }

      
    private:
        bool destructable = false;
        bool pointMod = false;
        bool active = false;

};