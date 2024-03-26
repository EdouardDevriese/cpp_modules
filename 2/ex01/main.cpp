#include "Fixed.hpp"
#include <iostream>

int main() {
    // Testing default constructor
    std::cout << "Creating a default Fixed object 'a':" << std::endl;
    Fixed a;
    std::cout << "a = " << a << std::endl;

    // Testing constructor with integer parameter
    std::cout << "\nCreating a Fixed object 'b' with an integer parameter (42):" << std::endl;
    Fixed b(42);
    std::cout << "b = " << b << std::endl;

    // Testing constructor with floating-point parameter
    std::cout << "\nCreating a Fixed object 'c' with a floating-point parameter (42.42):" << std::endl;
    Fixed c(42.42f);
    std::cout << "c = " << c << std::endl;

    // Testing copy constructor
    std::cout << "\nCopying 'c' into a new Fixed object 'd' using the copy constructor:" << std::endl;
    Fixed d(c);
    std::cout << "d = " << d << std::endl;

    // Testing assignment operator
    std::cout << "\nAssigning 'b' to 'a' using the copy assignment operator:" << std::endl;
    a = b;
    std::cout << "a = " << a << std::endl;

    // Demonstrating conversion to float
    std::cout << "\nConverting 'c' to float:" << std::endl;
    std::cout << "c as float = " << c.toFloat() << std::endl;

    // Demonstrating conversion to int
    std::cout << "\nConverting 'c' to int:" << std::endl;
    std::cout << "c as int = " << c.toInt() << std::endl;

    return 0;
}

