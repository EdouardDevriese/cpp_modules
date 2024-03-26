#include "Fixed.hpp"
#include <iostream>

int main() {
    std::cout << "Creating a Fixed object 'a' using the default constructor." << std::endl;
    Fixed a;
    std::cout << "The raw bits of 'a' are: " << a.getRawBits() << std::endl;

    std::cout << "\nCreating a Fixed object 'b' using the copy constructor, copying from 'a'." << std::endl;
    Fixed b(a);
    std::cout << "The raw bits of 'b' are: " << b.getRawBits() << std::endl;

    std::cout << "\nCreating a Fixed object 'c' and setting its raw bits to 42." << std::endl;
    Fixed c;
    c.setRawBits(42);
    std::cout << "The raw bits of 'c' are: " << c.getRawBits() << std::endl;

    std::cout << "\nAssigning 'c' to 'a' using the copy assignment operator." << std::endl;
    a = c;
    std::cout << "The raw bits of 'a' are now: " << a.getRawBits() << std::endl;

    std::cout << "\nDemonstrating the destructor calls at the end of scope." << std::endl;
    // Destructors for a, b, and c will be called here, at the end of main.

    return 0;
}
