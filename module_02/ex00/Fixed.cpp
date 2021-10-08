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

Fixed& Fixed::operator = (const Fixed& fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->pointValue = fixed.getRawBits();

    return (*this);
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