#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name, int hp, int dmg);
        ~Soldier();
};

#endif //SOLDIER_H
