#include "FlagTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Default constructor implementation
FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
    std::cout << "FlagTrap " << this->name << " is constructed." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

// Copy constructor implementation
FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other) {
    std::cout << "FlagTrap copy constructor called for " << this->name << std::endl;
}

// Copy assignment operator implementation
FlagTrap& FlagTrap::operator=(const FlagTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FlagTrap copy assignment operator called for " << this->name << std::endl;
    return *this;
}

// Destructor implementation
FlagTrap::~FlagTrap() {
    std::cout << "FlagTrap " << this->name << " is destroyed." << std::endl;
}

void FlagTrap::highFivesGuys() {
    std::cout << "HIGH FIVE MATE" << std::endl;
}
