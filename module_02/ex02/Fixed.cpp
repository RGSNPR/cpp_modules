#include "Fixed.hpp"

Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    this->pointValue = 0;
}

Fixed::~Fixed() {
    // std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
    // std::cout << "Copy constructor called" << std::endl;
    this->pointValue = fixed.getRawBits();
}

Fixed::Fixed(const int value) {
    // std::cout << "Int constructor called" << std::endl;
    this->pointValue = (value << this->fBits);
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    this->pointValue = roundf(value * (1 << this->fBits));
}

Fixed& Fixed::operator = (const Fixed& fixed) {
    // std::cout << "Assignation operator called" << std::endl;
    this->pointValue = fixed.getRawBits();

    return (*this);
}

bool Fixed::operator > (const Fixed& fixed) const {
    return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator >= (const Fixed& fixed) const {
    return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator < (const Fixed& fixed) const {
    return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator <= (const Fixed& fixed) const{
    return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator == (const Fixed& fixed) const {
    return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator != (const Fixed& fixed) const {
    return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator + (Fixed const& fixed) {
    Fixed newFixedValue(*this);

    newFixedValue.setRawBits(this->getRawBits() + fixed.getRawBits());
    return (newFixedValue);
}

Fixed Fixed::operator - (Fixed const& fixed) {
    Fixed newFixedValue(*this);

    newFixedValue.setRawBits(this->getRawBits() - fixed.getRawBits());
    return (newFixedValue);
}

Fixed Fixed::operator * (Fixed const& fixed) {
    Fixed val(*this);
	long temp1, temp2;

	temp1 = ((long)this->getRawBits());
	temp2 = ((long)fixed.getRawBits());
	val.setRawBits((temp1 * temp2) / (1 << Fixed::fBits));
	return (val);
}

Fixed Fixed::operator / (Fixed const& fixed) {
    Fixed val(*this);
	long temp1, temp2;

	temp1 = ((long)this->getRawBits());
	temp2 = ((long)fixed.getRawBits());
	val.setRawBits((temp1 / temp2) / (1 << Fixed::fBits));
	return (val);
}

Fixed Fixed::operator ++ () {
    this->pointValue++;

    return (*this);
}

Fixed Fixed::operator ++ (int) {

    Fixed temp(*this);

    operator++();
    return (temp);
}

Fixed Fixed::operator -- () {
    this->pointValue--;

    return (*this);
}

Fixed Fixed::operator -- (int) {

    Fixed temp(*this);

    operator--();
    return (temp);
}

std::ostream& operator << (std::ostream& os, const Fixed& value) {
    os << value.toFloat();
    return (os);
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return(this->pointValue);
}

void Fixed::setRawBits(const int raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->pointValue = raw;
    return ;
}

float   Fixed::toFloat(void) const {
    return ((float)this->pointValue / (float)(1 << this->fBits));
}

int     Fixed::toInt(void) const {
    return ((int)this->pointValue >> this->fBits);
}

Fixed& Fixed::min(Fixed& fixedOne, Fixed& fixedTwo) {
    return (fixedOne < fixedTwo ? fixedOne : fixedTwo); 
}

const Fixed& Fixed::min(const Fixed& fixedOne, const Fixed& fixedTwo) {
    return (fixedOne < fixedTwo ? fixedOne : fixedTwo);
}

Fixed& Fixed::max(Fixed& fixedOne, Fixed& fixedTwo) {
    return (fixedOne > fixedTwo ? fixedOne : fixedTwo);
}

const Fixed& Fixed::max(const Fixed& fixedOne, const Fixed& fixedTwo) {
    return (fixedOne > fixedTwo ? fixedOne : fixedTwo);
}

Fixed& min(Fixed& fixedOne, Fixed& fixedTwo) {
    return (Fixed::min(fixedOne, fixedTwo));
}

Fixed& max(Fixed& fixedOne, Fixed& fixedTwo) {
    return (Fixed::max(fixedOne, fixedTwo));
}