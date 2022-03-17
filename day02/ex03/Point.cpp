#include "Point.hpp"

Point::Point(): _x(), _y(){
	return;
}

Point::Point(float const x, float const y): _x(x), _y(y){
	return;
}

Point::Point(Point const & p){
	*this = p;
	return;
}

Point::~Point(){
	return;
}

Point &	Point::operator=(Point const & p){
	this->_x = p.getX();
	this->_y = p.getY();
	return *this;
}

Fixed Point::getX(void) const{
	return (this->_x);
}

Fixed Point::getY(void) const{
	return (this->_y);
}

std::ostream & operator<<(std::ostream & o, Point const & p){
	o << "x:" << p.getX() << "y:" << p.getY();
	return o;
}
