#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"

class Wizard : public Spellcaster {
    private:
        int lightningCost;
        int lightningPower;
    public:
        Wizard(const std::string& name, int hp, int dmg, int sp);
        ~Wizard();
        
        void lightningStrike(Unit& target);
};

#endif //WIZARD_H
