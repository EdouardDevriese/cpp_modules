#include <cctype>
#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

int main (int argc, char *argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            std::string arg(argv[i]);
            for (size_t j = 0; j < arg.length(); j++) {
                std::cout << (char)toupper(arg[j]);
            }
            if (i < argc - 1) {
                std::cout << " ";
            }    
        }
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";    
    }
    std::cout << std::endl;
    return 0;
}
