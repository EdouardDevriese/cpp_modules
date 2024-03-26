#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int rawBits;
    static const int nrFractionalBits = 8;

public:
    Fixed();                              // constructor
    Fixed(const Fixed& other);            // copy constructor
    Fixed& operator=(const Fixed& other); // copy assignment operator
    ~Fixed();                             // destructor

    int getRawBits(void) const;
    void setRawBits(int const newRawBits);
};

#endif
