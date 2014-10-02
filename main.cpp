#include "Unit.h"
#include "Soldier.h"
#include "Rogue.h"
#include "Vampire.h"

int main() {
    Soldier* ali = new Soldier("Soldier", 10, 1);
    Rogue* bobo = new Rogue("Bobo", 100, 17);
    Vampire* george = new Vampire("Vampire", 10, 1);
    
    std::cout << *ali << std::endl;
    // std::cout << *bobo << std::endl;
    std::cout << *george << std::endl;
    
    // bobo->attack(*ali);
    ali->attack(*george);
    
    std::cout << *ali << std::endl;
    // std::cout << *bobo << std::endl;
    std::cout << *george << std::endl;
    
    return 0;
}
