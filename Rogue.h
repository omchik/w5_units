#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name, int hp, int dmg);
        ~Rogue();
        
        void attack(Unit& enemy);
};

#endif //ROGUE_H
