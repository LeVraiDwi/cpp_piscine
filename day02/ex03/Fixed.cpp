#include "Fixed.hpp"

Fixed::Fixed(): _raw_bits(0){
	return;
}

Fixed::Fixed(Fixed const & a){
	*this = a;
	return;
}

Fixed::Fixed(int const val){
	this->_raw_bits = val << this->_fract_bit;
	return;
}

Fixed::Fixed(float const val){
	this->_raw_bits = roundf(val * (1 << this->_fract_bit));
	return;
}

Fixed &	Fixed::operator=(Fixed const & a){
	this->_raw_bits = a.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	return;
}

bool	Fixed::operator<(Fixed const & a) const{
	return (this->_raw_bits < a._raw_bits);
}

bool	Fixed::operator>(Fixed const & a) const{
	return (this->_raw_bits > a._raw_bits);
}

bool	Fixed::operator<=(Fixed const & a) const{
	return (this->_raw_bits <= a._raw_bits);
}

bool	Fixed::operator>=(Fixed const & a) const{
	return (this->_raw_bits >= a._raw_bits);
}

bool	Fixed::operator==(Fixed const & a) const{
	return (this->_raw_bits == a._raw_bits);
}

bool	Fixed::operator!=(Fixed const & a) const{
	return (this->_raw_bits != a._raw_bits);
}

Fixed	Fixed::operator+(Fixed const & val) const{
	return (Fixed(this->toFloat() + val.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & val) const{
	return (Fixed(this->toFloat() - val.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & val) const{
	return (Fixed(this->toFloat() * val.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & val) const{
	return (Fixed(this->toFloat() / val.toFloat()));
}

Fixed	Fixed::operator++(void){
	this->_raw_bits += 1;
	return (*this);
}

Fixed	Fixed::operator--(void){
	this->_raw_bits -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	tmp(*this);

	this->_raw_bits += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);

	this->_raw_bits -= 1;
	return (tmp);
}
 
Fixed	Fixed::min(Fixed const & a, Fixed const & b){
	return ((a > b) ? b : a);
}

Fixed	Fixed::max(Fixed const & a, Fixed const & b){
	return ((a > b) ? a : b);
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
