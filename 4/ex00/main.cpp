#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "--- Direct Object Demonstration ---" << std::endl;
    std::cout << "\n";

    // Generic Animal object
    Animal genericAnimal;
    std::cout << "> Generic animal type: " << genericAnimal.getType() << std::endl;
    genericAnimal.makeSound();
    std::cout << "\n";

    // Direct Dog object
    Dog directDog;
    std::cout << "> Direct dog type: " << directDog.getType() << std::endl;
    directDog.makeSound();
    std::cout << "\n";

    // Direct Cat object
    Cat directCat;
    std::cout << "> Direct cat type: " << directCat.getType() << std::endl;
    directCat.makeSound();
    std::cout << "\n";

    std::cout << "\n--- Polymorphic Animal Pointer Demonstration ---" << std::endl;

    // Using Dog object through an Animal pointer
    Animal* animalPtr1 = new Dog();
    std::cout << "> Animal pointer (pointing to Dog) type: " << animalPtr1->getType() << std::endl;
    animalPtr1->makeSound();
    delete animalPtr1;
    std::cout << "\n";

    // Using Cat object through an Animal pointer
    Animal* animalPtr2 = new Cat();
    std::cout << "> Animal pointer (pointing to Cat) type: " << animalPtr2->getType() << std::endl;
    animalPtr2->makeSound();
    delete animalPtr2;
    std::cout << "\n";

    return 0;
}

