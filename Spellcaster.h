#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"

class OutOfSpellPoints {};

class Spellcaster : public Unit {
    protected:
        int spellPoints;
        int spellPointsLimit;
        void spellPointsConsumption(int spellCost);
    public:
        Spellcaster(const std::string& name, int hp, int dmg, int sp);
        ~Spellcaster();
        
        int getSpellPoints() const;
        int getSpellPointsLimit() const;
        
        void addSpellPoints(int sp);
};

std::ostream& operator<<(std::ostream& out, const Spellcaster& spellcaster);

#endif //SPELLCASTER_H
