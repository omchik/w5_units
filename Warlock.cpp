#include "Warlock.h"

Warlock::Warlock(const std::string& name, int hp, int dmg, int sp) :
    Spellcaster(name, hp, dmg, sp)
{
    demons = new std::list<Unit*>();
}

Warlock::~Warlock() {
    delete demons;
}


void Warlock::demonSummoning() {
    summoningCost = spellPointsLimit * 0.3;
    Unit* demon = new Unit("Demon", 50, 5);
    
    spellPointsConsumption(summoningCost);
    demons->push_back(demon);
}

int Warlock::getDemonsCount() const {
    return demons->size();
}

std::ostream& operator<<(std::ostream& out, const Warlock& warlock) {
    out << "Name: " << warlock.getName() << std::endl;
    out << "Current HP: " << warlock.getHitPoints() << std::endl;
    out << "Maximum HP: " << warlock.getHitPointsLimit() << std::endl;
    out << "Current SP: " << warlock.getSpellPoints() << std::endl;
    out << "Maximum SP: " << warlock.getSpellPointsLimit() << std::endl;
    out << "Attack power: " << warlock.getDamage() << std::endl;
    out << "Demons: " << warlock.getDemonsCount() << std::endl;
}
