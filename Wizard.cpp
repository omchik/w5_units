#include "Wizard.h"

Wizard::Wizard(const std::string& name, int hp, int dmg, int sp) :
    Spellcaster(name, hp, dmg, sp) 
{
    
}

Wizard::~Wizard() {
    
}


void Wizard::lightningStrike(Unit& target) {
    lightningCost = spellPointsLimit * 0.3;
    lightningPower = damage * 1.3;
    
    spellPointsConsumption(lightningCost);
    target.takeDamage(lightningPower);
}
