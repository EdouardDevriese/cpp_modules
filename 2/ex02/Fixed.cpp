#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

// Default constructor implementation
Fixed::Fixed() : value(0) {
}

// Copy constructor implementation
Fixed::Fixed(const Fixed& other) {
    *this = other;
}

// Copy assignment operator implementation
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

// Destructor implementation
Fixed::~Fixed() {
}

Fixed::Fixed(const int intValue) {
    this->value = intValue << nrFractionalBits;
}

Fixed::Fixed(const float floatValue) {
    this->value = std::round(floatValue * (1 << nrFractionalBits));
}

int Fixed::getRawBits(void) const {
    return this->value;
}

void Fixed::setRawBits(int const newRawBits) {
    this->value = newRawBits;
}

int Fixed::toInt(void) const {
    return this->value >> nrFractionalBits;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / (1 << nrFractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator<(const Fixed& rhs) const {
    return this->value < rhs.value;
}

bool Fixed::operator>(const Fixed& rhs) const {
    return this->value > rhs.value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return this->value <= rhs.value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return this->value >= rhs.value;
}

bool Fixed::operator==(const Fixed& rhs) const {
    return this->value == rhs.value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return this->value != rhs.value;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    Fixed result;
    result.value = this->value + rhs.value;
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    Fixed result;
    result.value = this->value - rhs.value;
    return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    Fixed result;
    result.value = std::round((this->toFloat() * rhs.toFloat()) * (1 << nrFractionalBits));
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    Fixed result;
    if (rhs.value != 0) {
        result.value = std::round((this->toFloat() / rhs.toFloat()) * (1 << nrFractionalBits));
    } else {
        std::cerr << "Error: Division by zero." << std::endl;
    }
    return result;
}

Fixed& Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);
    return temp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
    return (lhs.value < rhs.value) ? lhs : rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
    return (lhs.value < rhs.value) ? lhs : rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
    return (lhs.value > rhs.value) ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
    return (lhs.value > rhs.value) ? lhs : rhs;
}
