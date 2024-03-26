#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>
class Fixed {
private:
    int value;
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

    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(Fixed& lhs, Fixed& rhs);
    static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
    static Fixed& max(Fixed& lhs, Fixed& rhs);
    static const Fixed& max(const Fixed& lhs, const Fixed& rhs);
};

#endif
