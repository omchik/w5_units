#ifndef WARLOCK_H
#define WARLOCK_H

#include "Spellcaster.h"
#include <list>

class Warlock : public Spellcaster {
    private:
        int summoningCost;
    public:
        std::list<Unit*>* demons;
        
        Warlock(const std::string& name, int hp, int dmg, int sp);
        ~Warlock();
        
        void demonSummoning();
        int getDemonsCount() const;
};

std::ostream& operator<<(std::ostream& out, const Warlock& warlock);

#endif //WARLOCK_H
