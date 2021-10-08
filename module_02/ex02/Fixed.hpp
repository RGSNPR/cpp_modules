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
        Fixed operator + (const Fixed& fixed);
        Fixed operator - (const Fixed& fixed);
        Fixed operator * (const Fixed& fixed);
        Fixed operator / (const Fixed& fixed);

        bool operator > (const Fixed &fixed) const;
        bool operator >= (const Fixed &fixed) const;
        bool operator < (const Fixed &fixed) const;
        bool operator <= (const Fixed &fixed) const;
        bool operator != (const Fixed &fixed) const;
        bool operator == (const Fixed &fixed) const;

        Fixed operator ++ (int);
        Fixed operator ++ ();
        Fixed operator -- (int);
        Fixed operator -- ();


        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        static Fixed&  min(Fixed& fixedOne, Fixed& fixedTwo);
        static Fixed&  max(Fixed& fixedOne, Fixed& fixedTwo);
        const static Fixed&  min(const Fixed& fixedOne, const Fixed& fixedTwo);
        const static Fixed&  max(const Fixed& fixedOne, const Fixed& fixedTwo);
};


Fixed& min(Fixed& fixedOne, Fixed& fixedTwo);
Fixed& max(Fixed& fixedOne, Fixed& fixedTwo);

#endif