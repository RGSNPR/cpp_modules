#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 pointValue;
        static const int    fBits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed); 
        friend std::ostream& operator << (std::ostream& os, const Fixed& value);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

#endif