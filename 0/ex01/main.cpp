#include "Phonebook.hpp"
#include <iostream>
#include <string>

void promptAndSetContactField(std::string &field, const std::string &prompt) {
    std::cout << prompt;
    std::getline(std::cin, field);
    while (field.empty()) {
        std::cout << "> Field cannot be empty. " << prompt;
        std::getline(std::cin, field);
    }
}

int main() {
    PhoneBook pb;
    std::string cmd;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD") {
            Contact newContact;
            std::string input;

            promptAndSetContactField(input, "Enter first name: ");
            newContact.setFirstname(input);

            promptAndSetContactField(input, "Enter last name: ");
            newContact.setLastname(input);

            promptAndSetContactField(input, "Enter nickname: ");
            newContact.setNickname(input);

            promptAndSetContactField(input, "Enter phone number: ");
            newContact.setPhonenumber(input);

            promptAndSetContactField(input, "Enter darkest secret: ");
            newContact.setDarkestsecret(input);

            pb.addContact(newContact);
            std::cout << "~ Contact added successfully ~\n";
        }

        else if (cmd == "SEARCH") {
            if (pb.isEmpty()) {
                std::cout << "> Phonebook is empty.\n";
                continue;
            }

            pb.displayContactList();
            std::cout << "\nEnter the index of the contact to display (0 to " << pb.getContactCount() - 1 << "): ";
            int index;
            std::cin >> index;

            if (std::cin.fail() || index < 0 || index >= pb.getContactCount()) {
                std::cout << "> Invalid index. Please enter a valid number within the given range.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                pb.displayContactInfo(index);
            }

        }

        else if (cmd == "EXIT") {
            break;
        }

        else {
            std::cout << "> Command not recognized. Please try again.\n";
        }
    }
}
