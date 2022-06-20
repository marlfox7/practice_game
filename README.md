# practice_game


 WILL BE WRITTEN IN C++
 Just messing around with a text-based type of game idea for practice.

  Generic fantasy type, has different character classes and monsters to fight, no story yet.
     Classes are warrior and mage for now, maybe more later.
         Classes will have general skills for all, as well as specialized skills for each.
  All classes and monsters will have hp(health/hit points), mp(magic points), att(attack), spd(speed), def(defense).
  
  
  #Main.hpp
     Will include all the other files in order to run the game.

  #Type.hpp
     Currently going to hold both the character templates as well as the specific types of characters in a parent/child format. Not sure if want to split into different files later.

  #Items.hpp
     Will have various items that affect different types of stats, including character equipment(maybe).

 #Player.hpp
     Holds all character information, includes Type.hpp and Items.hpp .

 #Monster.hpp
     Includes Type.hpp .
     Will have different types of monsters like slimes and goblins, etc.
