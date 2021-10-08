#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cassert>

class Fixed {
    private:
        int                 pointValue;
        static const int    fBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed); 
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif