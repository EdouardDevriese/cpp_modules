#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();                               // constructor
    Animal(const Animal &other);            // copy constructor
    Animal &operator=(const Animal &other); // copy assignment operator
    virtual ~Animal();                              // destructor

    std::string getType() const;
    virtual void makeSound() const;
};

#endif
