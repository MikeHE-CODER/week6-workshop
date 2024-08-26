#ifndef warrior_h
#define warrior_h
#include "player.h"
#include <iostream>
using namespace std;
class Warrior : public Player {
private:
  string weapon;

public:
  Warrior(string name, int health, int damage, string weapon) {
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->weapon = weapon;
  };
  void swingWeapon(Player *opponent) {
    attack(opponent, damage);
    std::cout << name << " swings their " << weapon << " at "
              << opponent->getName() << "!\n";
  };
};
#endif
