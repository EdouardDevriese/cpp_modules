#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

// Default constructor implementation
HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {
}

void HumanB::setWeapon(Weapon& newWeapon) {
    this->weapon = &newWeapon;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " attacks with their bare hands" << std::endl;
    }
}
