#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

// Default constructor implementation
Cat::Cat() {
    std::cout << "Cat default constructor has been called" << std::endl;
    type = "Cat";
}

// Copy constructor implementation
Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "Cat copy constructor has been called" << std::endl;
    *this = other;
}

// Copy assignment operator implementation
Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator has been called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

// Destructor implementation
Cat::~Cat() {
    std::cout << "Cat destructor has been called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
