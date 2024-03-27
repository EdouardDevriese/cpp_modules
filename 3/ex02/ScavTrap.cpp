#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Default constructor implementation
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << this->name << " is constructed." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

// Copy constructor implementation
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for " << this->name << std::endl;
}

// Copy assignment operator implementation
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment operator called for " << this->name << std::endl;
    return *this;
}

// Destructor implementation
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " is destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name << " cannot attack due to insufficient hit points or energy points." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
