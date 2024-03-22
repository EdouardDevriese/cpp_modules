#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name);

int main () {
    int N = 5;
    int M = 3;
    std::string name1 = "HordeZombie1";
    std::string name2 = "HordeZombie2";

    Zombie* horde1 = zombieHorde(N, name1);
    for (int i = 0; i < N; i++) {
        horde1[i].announce();
    }

    Zombie* horde2 = zombieHorde(M, name2);
    for (int j = 0; j < M; j++) {
        horde2[j].announce();
    }

    delete[] horde1;
    delete[] horde2;
    return 0;
}
