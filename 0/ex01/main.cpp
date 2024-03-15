#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main() {
    PhoneBook pb;
    std::string cmd;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD") {

        }

        else if (cmd == "SEARCH") {

        }

        else if (cmd == "EXIT") {
            break;
        }

        else {
            std::cout << "Command not recognized. Please try again.\n";
        }
    }
}
