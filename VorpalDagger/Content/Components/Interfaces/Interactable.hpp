/*
   Interface for interactive objects to the player character
*/

class Interactable {
   public:
      bool getDestructable();
      void setDestructable();
      bool getPointMod();
      void setPointMod();
      
   private:
      bool destructable; //Is this object destroyable
      bool pointMod; //Does this object modify point score
};