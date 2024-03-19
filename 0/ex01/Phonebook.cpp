#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstddef>
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() : contactIndex(0), contactCount(0) {}

void PhoneBook::addContact(const Contact &newContact) {
    contacts[contactIndex % 8] = newContact;
    ++contactIndex;
    if (contactCount < 8) {
        ++contactCount;
    }
}

std::string PhoneBook::truncateString(std::string str, size_t width) const {
    if (str.length() > width) {
        str = str.substr(0, width - 1) + ".";
    }
    return str;
}

void PhoneBook::displayContactList() const {
    // Displays a summary of all contacts in a formatted list.
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contactCount; ++i) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncateString(contacts[i].getFirstname(), 10) << "|"
                  << std::setw(10) << truncateString(contacts[i].getLastname(), 10) << "|"
                  << std::setw(10) << truncateString(contacts[i].getNickname(), 10) << std::endl;
    }
}

void PhoneBook::displayContactInfo(int index) const {
    // Displays detailed information about a specific contact by index.
    if (index < 0 || index >= contactCount) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    const Contact &contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstname() << std::endl
              << "Last Name: " << contact.getLastname() << std::endl
              << "Nickname: " << contact.getNickname() << std::endl
              << "Phone Number: " << contact.getPhonenumber() << std::endl
              << "Darkest Secret: " << contact.getDarkestsecret() << std::endl;
}

bool PhoneBook::isEmpty() const {
    return contactCount == 0;
}

int PhoneBook::getContactCount() const {
    return contactCount;
}
