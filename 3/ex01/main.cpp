#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Create ScavTrap using the parameterized constructor
    ScavTrap scav1("SC4V-TP");
    std::cout << "\n";

    // Display initial state
    std::cout << scav1.getName() << " initial state:" << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav1.getAttackDamage() << std::endl;
    std::cout << "\n";

    // ScavTrap attacks
    scav1.attack("Target1");
    std::cout << scav1.getName() << " after attacking:" << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // ScavTrap takes damage
    scav1.takeDamage(30);
    std::cout << scav1.getName() << " after taking damage:" << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // ScavTrap repairs itself
    scav1.beRepaired(20);
    std::cout << scav1.getName() << " after repair:" << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "\n";

    // ScavTrap enters Gatekeeper mode
    scav1.guardGate();
    std::cout << "\n";

    // Demonstrate copy constructor
    std::cout << "Creating a copy of " << scav1.getName() << std::endl;
    ScavTrap scavCopy(scav1);
    scavCopy.attack("Target2");
    std::cout << "\n";

    // Demonstrate copy assignment
    std::cout << "Assigning " << scav1.getName() << " to a new ScavTrap" << std::endl;
    ScavTrap scavAssigned = scav1;
    scavAssigned.attack("Target3");
    std::cout << "\n";

    // Objects go out of scope and are destroyed in reverse order of their creation
    return 0;
}
