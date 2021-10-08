#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->pointValue = 0;
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->pointValue = fixed.getRawBits();
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->pointValue = (value << this->fBits);
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->pointValue = roundf(value * (1 << this->fBits));
}

Fixed& Fixed::operator = (const Fixed& fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->pointValue = fixed.getRawBits();

    return (*this);
}

std::ostream& operator << (std::ostream& os, const Fixed& value) {
    os << value.toFloat();
    return (os);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->pointValue);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->pointValue = raw;
    return ;
}

float   Fixed::toFloat(void) const {
    return ((float)this->pointValue / (float)(1 << this->fBits));
}

int     Fixed::toInt(void) const {
    return ((int)this->pointValue >> this->fBits);
}