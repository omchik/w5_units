#include "Unit.h"
#include "Soldier.h"
#include "Rogue.h"
#include "Vampire.h"
#include "Spellcaster.h"

int main() {
    Soldier* soldier = new Soldier("Soldier", 100, 16);
    Rogue* rogue = new Rogue("Rogue", 100, 17);
    Vampire* vampire = new Vampire("Vampire", 100, 12);
    Spellcaster* spellcaster = new Spellcaster("Spellcaster", 100, 12, 100);
    
    std::cout << *soldier << std::endl;
    std::cout << *rogue << std::endl;
    std::cout << *vampire << std::endl;
    std::cout << *spellcaster << std::endl;
    
    // rogue->attack(*soldier);
    // vampire->attack(*soldier);
    
    // std::cout << *soldier << std::endl;
    // std::cout << *rogue << std::endl;
    // std::cout << *vampire << std::endl;
    
    return 0;
}
