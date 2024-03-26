#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>
class Fixed {
private:
    int rawBits;
    static const int nrFractionalBits = 8;

public:
    Fixed();                              // constructor
    Fixed(const Fixed& other);            // copy constructor
    Fixed& operator=(const Fixed& other); // copy assignment operator
    ~Fixed();                             // destructor

    Fixed(const int intValue);
    Fixed(const float floatValue);

    int getRawBits(void) const;
    void setRawBits(int const newRawBits);

    int toInt(void) const;
    float toFloat(void) const;

    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif
