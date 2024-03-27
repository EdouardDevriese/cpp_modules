#include "FlagTrap.hpp"
#include <iostream>

int main() {
    // Create FlagTrap using the parameterized constructor
    FlagTrap flag1("FL4G-TP");
    std::cout << "\n";

    // Display initial state
    std::cout << flag1.getName() << " initial state:" << std::endl;
    std::cout << "Hit Points: " << flag1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << flag1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << flag1.getAttackDamage() << std::endl;
    std::cout << "\n";

    // FlagTrap attacks
    flag1.attack("Enemy Target");
    std::cout << flag1.getName() << " after attacking:" << std::endl;
    std::cout << "Hit Points: " << flag1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << flag1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // FlagTrap takes damage
    flag1.takeDamage(50);
    std::cout << flag1.getName() << " after taking damage:" << std::endl;
    std::cout << "Hit Points: " << flag1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << flag1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // FlagTrap repairs itself
    flag1.beRepaired(40);
    std::cout << flag1.getName() << " after repair:" << std::endl;
    std::cout << "Hit Points: " << flag1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << flag1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // FlagTrap requests high fives
    flag1.highFivesGuys();
    std::cout << "\n";

    // Demonstrate copy constructor
    std::cout << "Creating a copy of " << flag1.getName() << std::endl;
    FlagTrap flagCopy(flag1);
    flagCopy.attack("Another Enemy");
    std::cout << "\n";

    // Demonstrate copy assignment
    std::cout << "Assigning " << flag1.getName() << " to a new FlagTrap" << std::endl;
    FlagTrap flagAssigned = flag1;
    flagAssigned.attack("Yet Another Enemy");
    std::cout << "\n";

    // Objects go out of scope and are destroyed in reverse order of their creation
    return 0;
}

