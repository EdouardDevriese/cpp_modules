#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FlagTrap : public ClapTrap {
public:
    FlagTrap(std::string name);                 // constructor
    FlagTrap(const FlagTrap& other);            // copy constructor
    FlagTrap& operator=(const FlagTrap& other); // copy assignment operator
    ~FlagTrap();                                // destructor

    void highFivesGuys();
};

#endif
