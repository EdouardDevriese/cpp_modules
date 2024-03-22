#include "Zombie.hpp"
#include <string>

// Default constructor implementation
Zombie::Zombie() {
}

// Destructor implementation
Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string zName) {
    name = zName;
}
