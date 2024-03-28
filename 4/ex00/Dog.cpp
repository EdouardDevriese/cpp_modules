#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

// Default constructor implementation
Dog::Dog() {
    std::cout << "Dog default constructor has been called" << std::endl;
    type = "Dog";
}

// Copy constructor implementation
Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor has been called" << std::endl;
    *this = other;
}

// Copy assignment operator implementation
Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment operator has been called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

// Destructor implementation
Dog::~Dog() {
    std::cout << "Dog destructor has been called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
