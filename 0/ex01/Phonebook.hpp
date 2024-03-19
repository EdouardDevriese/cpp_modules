#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstddef>
#include <string>

class PhoneBook {
public:
    PhoneBook();
    void addContact(const Contact &newContact);
    void displayContactList() const;
    void displayContactInfo(int index) const;
    bool isEmpty() const;
    int getContactCount() const;

private:
    Contact contacts[8];
    int contactIndex;
    int contactCount;
    std::string truncateString(std::string str, size_t width) const;
};

#endif
