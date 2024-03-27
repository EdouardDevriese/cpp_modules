#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

// Default constructor implementation
ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->name << " has been constructed" << std::endl;
}

// Copy constructor implementation
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap copy constructor called for " << this->name << std::endl;
}

// Copy assignment operator implementation
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called for " << this->name << std::endl;
    return *this;
}

// Destructor implementation
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

std::string ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getHitPoints() const {
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->name << " cannot attack due to insufficient hit points or energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints > amount) {
        this->hitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
    } else if (this->hitPoints > 0) {
        this->hitPoints = 0;
        std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage and is now destroyed!" << std::endl;
    } else {
        std::cout << "That's enough! ClapTrap " << this->name << " is already dead...";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " repairs itself, recovering "
                  << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->name << " cannot repair itself due to insufficient hit points or energy points." << std::endl;
    }
}
