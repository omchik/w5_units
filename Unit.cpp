#include "Unit.h"

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

Unit::Unit(const std::string& name, int hp, int dmg) :
    name(name),
    hitPoints(hp),
    hitPointsLimit(hp),
    damage(dmg)
{

}

Unit::~Unit() {

}

int Unit::getDamage() const {
    return damage;
}

int Unit::getHitPoints() const {
    return hitPoints;
}

int Unit::getHitPointsLimit() const {
    return hitPointsLimit;
}

const std::string& Unit::getName() const {
    return name;
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    
    if ( hitPoints + hp > hitPointsLimit ) {
        hitPoints = hitPointsLimit;
    } else {
        hitPoints += hp;
    }
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    
    if ( dmg > hitPoints ) {
        hitPoints = 0;
        throw UnitIsDead();
    }
    hitPoints -= dmg;
}

void Unit::attack(Unit& enemy) {
    enemy.takeDamage(damage);
    if ( enemy.hitPoints != 0 ) {
        counterAttack(*this);
    }
}

void Unit::counterAttack(Unit& enemy) {
    enemy.takeDamage(damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getName() << std::endl;
    out << "Current HP: " << unit.getHitPoints() << std::endl;
    out << "Maximum HP: " << unit.getHitPointsLimit() << std::endl;
    out << "Attack power: " << unit.getDamage() << std::endl;
    
    return out;
}
