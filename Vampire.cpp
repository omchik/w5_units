#include "Vampire.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    
}

Vampire::~Vampire() {
    
}

void Vampire::vampirism(Unit& victim) {
    addHitPoints(1);
}

void Vampire::attack(Unit& enemy) {
    enemy.takeDamage(damage);
    vampirism(enemy);
    if ( enemy.getHitPoints() != 0 ) {
        counterAttack(*this);
    }
}

void Vampire::counterAttack(Unit& enemy) {
        enemy.takeDamage(damage/2);
        vampirism(enemy);
}
