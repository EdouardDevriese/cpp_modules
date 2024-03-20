#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie(std::string zName);
    ~Zombie();
    void announce(void);
private:
    std::string name;
};

#endif
