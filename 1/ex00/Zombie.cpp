#include "Zombie.hpp"
#include <string>

// Default constructor implementation
Zombie::Zombie(std::string zName) : name(zName) {
}

// Destructor implementation
Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
