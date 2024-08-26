#ifndef player_h
#define player_h
#include <iostream>
#include <string>
using namespace std;
class Player {
public:
  string name;
  int health;
  int damage;

  Player(){};
  Player(string name, int health, int damage)
      : name(name), health(health), damage(damage){};
  void attack(Player *player, int damage) {
    player->health = player->health - damage;
  }
  void takedamage(int damage) {
    health = health - damage;
    std::cout << name << " takes " << damage
              << " damage. Remaining health: " << health << "\n";
  };
  int getHealth() { return health; }
  void setHealth(int healt) { health = healt; };
  string getName() { return name; };
};
#endif
