#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    // Create a weapon
    Weapon club("crude spiked club");

    // Create HumanA with a weapon
    HumanA bob("Bob", club);
    bob.attack(); // Bob attacks with their crude spiked club

    // Create HumanB without a weapon initially
    HumanB jim("Jim");
    jim.attack(); // Jim has no weapon

    // Now, give Jim a weapon and attack again
    jim.setWeapon(club);
    jim.attack(); // Jim attacks with their crude spiked club

    // Changing the weapon's type to demonstrate dynamic behavior
    club.setType("some other type of club");
    bob.attack(); // Bob's weapon type changes as well
    jim.attack(); // Jim's weapon type changes as well

    return 0;
}
