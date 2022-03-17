#include "Fixed.hpp"

Fixed::Fixed(): _raw_bits(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
	return;
}

Fixed::Fixed(int const val){
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = val << this->_fract_bit;
	return;
}

Fixed::Fixed(float const val){
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(val * (1 << this->_fract_bit));
	return;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=(Fixed const & a){
	std::cout << "copy assigment operator called" << std::endl;
	this->_raw_bits = a.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{
	return this->_raw_bits;
}

void	Fixed::setRawBits(int const raw){
	this->_raw_bits = raw;
	return;
}

float	Fixed::toFloat() const{
	float	val;
	val = (float)(this->_raw_bits) / (1 << this->_fract_bit);
	return val;
}

int	Fixed::toInt() const{
	int	val;
	val = (int)(this->_raw_bits >> this->_fract_bit);
	return val;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}
