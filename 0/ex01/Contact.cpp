#include "Contact.hpp"

// Default constructor
Contact::Contact() {}

// Setters
void Contact::setFirstname(const std::string &firstname) {
    this->firstname = firstname;
}

void Contact::setLastname(const std::string &lastname) {
    this->lastname = lastname;
}

void Contact::setNickname(const std::string &nickname) {
    this->nickname = nickname;
}

void Contact::setPhonenumber(const std::string &phonenumber) {
    this->phonenumber = phonenumber;
}

void Contact::setDarkestsecret(const std::string &darkestsecret) {
    this->darkestsecret = darkestsecret;
}

// Getters
std::string Contact::getFirstname() const { return firstname; }

std::string Contact::getLastname() const { return lastname; }

std::string Contact::getNickname() const { return nickname; }

std::string Contact::getPhonenumber() const { return phonenumber; }

std::string Contact::getDarkestsecret() const { return darkestsecret; }
