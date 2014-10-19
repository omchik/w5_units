#include "Spellcaster.h"

Spellcaster::Spellcaster(const std::string& name, int hp, int dmg, int sp) :
    Unit(name, hp, dmg),
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

void Spellcaster::addSpellPoints(int sp) {
    if ( sp > spellPointsLimit ) {
        spellPoints = spellPointsLimit;
    }
    spellPoints = sp;
}
