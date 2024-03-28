#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();                            // constructor
    Dog(const Dog &other);            // copy constructor
    Dog &operator=(const Dog &other); // copy assignment operator
    virtual ~Dog();                   // destructor

    void makeSound() const;
};

#endif
