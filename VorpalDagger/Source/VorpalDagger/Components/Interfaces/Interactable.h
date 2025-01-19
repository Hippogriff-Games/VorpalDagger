/*
   Interface for interactive objects to the player character
*/

class Interactable {
   public:
      bool GetDestructable();
      void SetDestructable();
      bool GetPointMod();
      void SetPointMod();
      
   private:
      bool destructable; //Is this object destroyable
      bool pointMod; //Does this object modify point score
};