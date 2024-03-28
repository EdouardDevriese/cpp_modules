#include "Animal.hpp"
#include <iostream>

// Default constructor implementation
Animal::Animal() {
    std::cout << "Animal default constructor has been called" << std::endl;
}

// Copy constructor implementation
Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor has been called" << std::endl;
    *this = other;
}

// Copy assignment operator implementation
Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignment operator has been called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

// Destructor implementation
Animal::~Animal() {
    std::cout << "Animal destructor has been called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}
