#include "Fixed.hpp"
#include <iostream>

int main() {
    // Demonstrating constructors
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    // Demonstrating comparison operators
    std::cout << "\nComparing c and b:" << std::endl;
    std::cout << "c > b: " << (c > b) << std::endl;
    std::cout << "c < b: " << (c < b) << std::endl;
    std::cout << "c >= b: " << (c >= b) << std::endl;
    std::cout << "c <= b: " << (c <= b) << std::endl;
    std::cout << "c == b: " << (c == b) << std::endl;
    std::cout << "c != b: " << (c != b) << std::endl;

    // Demonstrating arithmetic operators
    std::cout << "\nArithmetic with b and c:" << std::endl;
    std::cout << "b + c: " << b + c << std::endl;
    std::cout << "b - c: " << b - c << std::endl;
    std::cout << "b * c: " << b * c << std::endl;
    std::cout << "b / c: " << b / c << std::endl;

    // Demonstrating increment/decrement operators
    std::cout << "\nIncrementing and decrementing a:" << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a: " << a << std::endl;

    // Demonstrating static min/max functions
    std::cout << "\nUsing min and max functions:" << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    std::cout << "const min(c, d): " << Fixed::min(c, d) << std::endl;
    std::cout << "const max(c, d): " << Fixed::max(c, d) << std::endl;

    return 0;
}

