#include "Fixed.hpp"
#include <iostream>

// Default constructor implementation
Fixed::Fixed() : rawBits(0) {
    std::cout << "*Default constructor called*" << std::endl;
}

// Copy constructor implementation
Fixed::Fixed(const Fixed& other) {
    std::cout << "*Copy constructor called*" << std::endl;
    *this = other;
}

// Copy assignment operator implementation
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "*Copy assignment operator called*" << std::endl;
    if (this != &other) {
        this->rawBits = other.getRawBits();
    }
    return *this;
}

// Destructor implementation
Fixed::~Fixed() {
    std::cout << "*Destructor called*" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "*getRawBits member function called*" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const newRawBits) {
    std::cout << "*setRawBits member function called*" << std::endl;
    this->rawBits = newRawBits;
}
