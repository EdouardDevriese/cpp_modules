#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

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

Fixed::Fixed(const int intValue) {
    std::cout << "*Int constructor called*" << std::endl;
    this->rawBits = intValue << nrFractionalBits;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "*Float constructor called*" << std::endl;
    this->rawBits = std::round(floatValue * (1 << nrFractionalBits));
}

int Fixed::getRawBits(void) const {
    return this->rawBits;
}

void Fixed::setRawBits(int const newRawBits) {
    this->rawBits = newRawBits;
}

int Fixed::toInt(void) const {
    return this->rawBits >> nrFractionalBits;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->rawBits) / (1 << nrFractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
