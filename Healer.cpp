#include "Healer.h"

Healer::Healer(const std::string& name, int hp, int dmg, int sp) :
    Spellcaster(name, hp, dmg, sp) 
{
    
}

Healer::~Healer() {
    
}

void Healer::heal(Unit& target) {
    healCost = spellPointsLimit * 0.3;
    healPower = damage * 1.3;
    
    spellPointsConsumption(healCost);
    target.addHitPoints(healPower);
}
