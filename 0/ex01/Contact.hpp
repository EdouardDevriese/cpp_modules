#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    Contact();

    // setters
    void setFirstname(const std::string &firstname);
    void setLastname(const std::string &lastname);
    void setNickname(const std::string &nickname);
    void setPhonenumber(const std::string &phonenumber);
    void setDarkestsecret(const std::string &darkestsecret);

    // getters
    std::string getFirstname() const;
    std::string getLastname() const;
    std::string getNickname() const;
    std::string getPhonenumber() const;
    std::string getDarkestsecret() const;

private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;
};

#endif
