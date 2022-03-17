#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & p);
		~Point();
		Point &	operator=(Point const & p);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed _x;
		Fixed _y;
};

std::ostream &	operator<<(std::ostream & o, Point const & p);
#endif
