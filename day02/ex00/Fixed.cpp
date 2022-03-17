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
	std::cout << "GetRawBits member function called" << std::endl;
	return this->_raw_bits;
}

void	Fixed::setRawBits(int const raw){
	this->_raw_bits = raw;
	return;
}
