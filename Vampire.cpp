#include "Vampire.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    
}

Vampire::~Vampire() {
    
}

void Vampire::vampirism() {
    addHitPoints(damage*0.1);
}

void Vampire::attack(Unit& enemy) {
    enemy.takeDamage(this->damage);
    vampirism();
    if ( enemy.getHitPoints() != 0 ) {
        enemy.counterAttack(*this);
    }
}

void Vampire::counterAttack(Unit& enemy) {
        enemy.takeDamage(damage/2);
        vampirism();
}
