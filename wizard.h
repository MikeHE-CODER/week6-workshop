#ifndef wizard_h
#define wizard_h
#include "player.h"
#include <iostream>
class Wizard : public Player {
public:
  int mana;
  Wizard(string name, int health, int damage, int mana) {
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->mana = mana;
  };
  void castSpell(Player *opponent) {
    attack(opponent, mana);
    std::cout << name << " casts a spell on " << opponent->getName() << " for "
              << damage << " damage.\n";
  };
};

#endif
