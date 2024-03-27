#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string name);                 // constructor
    ScavTrap(const ScavTrap& other);            // copy constructor
    ScavTrap& operator=(const ScavTrap& other); // copy assignment operator
    ~ScavTrap();                                // destructor

    void attack(const std::string& target);
    void guardGate();
};

#endif
