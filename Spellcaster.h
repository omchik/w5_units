#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"

class OutOfSpellPoints {};

class Spellcaster : public Unit {
    protected:
        int spellPoints;
        int spellPointsLimit;
    public:
        Spellcaster(const std::string& name, int hp, int dmg, int sp);
        ~Spellcaster();
        
        int getSpellPoints() const;
        int getSpellPointsLimit() const;
        
        void addSpellPoints(int sp);
};

#endif //SPELLCASTER_H
