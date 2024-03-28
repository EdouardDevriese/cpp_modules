#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();                            // constructor
    Cat(const Cat &other);            // copy constructor
    Cat &operator=(const Cat &other); // copy assignment operator
    virtual ~Cat();                   // destructor

    void makeSound() const;
};

#endif
