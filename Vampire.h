#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"

class Vampire : public Unit {
    private:
        void vampirism(Unit& victim);
    public:
        Vampire(const std::string& name, int hp, int dmg);
        ~Vampire();
        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

#endif //VAMPIRE_H
