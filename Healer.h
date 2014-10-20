#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"

class Healer : public Spellcaster {
    private:
        int healCost;
        int healPower;
    public:
        Healer(const std::string& name, int hp, int dmg, int sp);
        ~Healer();
        
        void heal(Unit& target);
};

#endif //HEALER_H