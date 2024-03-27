#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
    // Create a ClapTrap named "CL4P-TP"
    ClapTrap claptrap("CL4P-TP");
    std::cout << "\n--- Constructor Demonstration ---" << std::endl;
    std::cout << "ClapTrap Name: " << claptrap.getName() << std::endl;
    std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

    // Demonstrate attack
    std::string target = "Bandit";
    std::cout << "\n--- Attack Demonstration ---" << std::endl;
    claptrap.attack(target);
    // Assuming attack modifies the ClapTrap's state, show the relevant state
    std::cout << "Energy Points after attacking: " << claptrap.getEnergyPoints() << std::endl;

    // Demonstrate takeDamage
    std::cout << "\n--- Take Damage Demonstration ---" << std::endl;
    claptrap.takeDamage(4);
    // Show the relevant state after taking damage
    std::cout << "Hit Points after taking damage: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points after taking damage (should be unchanged): " << claptrap.getEnergyPoints() << std::endl;

    // Demonstrate beRepaired
    std::cout << "\n--- Be Repaired Demonstration ---" << std::endl;
    claptrap.beRepaired(6);
    // Show the relevant state after repairing
    std::cout << "Hit Points after being repaired: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points after being repaired: " << claptrap.getEnergyPoints() << std::endl;

    std::cout << "\n";

    return 0;
}

