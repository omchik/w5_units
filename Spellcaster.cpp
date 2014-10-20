#include "Spellcaster.h"

Spellcaster::Spellcaster(const std::string& name, int hp, int dmg, int sp) :
    Unit(name, hp, dmg),
    spellPointsLimit(sp),
    spellPoints(sp)
{
    
}

Spellcaster::~Spellcaster() {
    
}

int Spellcaster::getSpellPoints() const {
    return spellPoints;
}
int Spellcaster::getSpellPointsLimit() const  {
    return spellPointsLimit;
}

void Spellcaster::spellPointsConsumption(int spellCost) {
    if ( spellCost > spellPoints ) {
        throw OutOfSpellPoints();
    }
    spellPoints -= spellCost;
}

void Spellcaster::addSpellPoints(int sp) {
    if ( spellPoints + sp > spellPointsLimit ) {
        spellPoints = spellPointsLimit;
    } else {
        spellPoints = sp;
    }
}

std::ostream& operator<<(std::ostream& out, const Spellcaster& spellcaster) {
    out << "Name: " << spellcaster.getName() << std::endl;
    out << "Current HP: " << spellcaster.getHitPoints() << std::endl;
    out << "Maximum HP: " << spellcaster.getHitPointsLimit() << std::endl;
    out << "Current SP: " << spellcaster.getSpellPoints() << std::endl;
    out << "Maximum SP: " << spellcaster.getSpellPointsLimit() << std::endl;
    out << "Attack power: " << spellcaster.getDamage() << std::endl;
    
    return out;
}
