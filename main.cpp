#include "Soldier.h"
#include "Rogue.h"
#include "Vampire.h"
#include "Healer.h"
#include "Wizard.h"
#include "Warlock.h"

int main() {
    Soldier* soldier = new Soldier("Soldier", 100, 16);
    Rogue* rogue = new Rogue("Rogue", 100, 17);
    Vampire* vampire = new Vampire("Vampire", 100, 12);
    Healer* healer = new Healer("Healer", 100, 5, 100);
    Wizard* wizard = new Wizard("Wizard", 100, 18, 100);
    Warlock* warlock = new Warlock("Warlock", 100, 5, 100);
    
    std::cout << *soldier << std::endl;
    std::cout << *rogue << std::endl;
    std::cout << *vampire << std::endl;
    std::cout << *healer << std::endl;
    std::cout << *wizard << std::endl;
    std::cout << *warlock << std::endl;
    
    // wizard->lightningStrike(*soldier);
    // std::cout << *soldier << std::endl;
    // vampire->attack(*soldier);
    // healer->heal(*soldier);
    // std::cout << *wizard << std::endl;
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *vampire << std::endl;
    
    warlock->demonSummoning();
    
    std::cout << *warlock << std::endl;
    
    return 0;
}
