#include "Bsp.hpp"

float	prod_vectoriel(Point const & a, Point const & b, Point const & c)
{
	Fixed	prod_vect;

	prod_vect = (a.getX() - b.getX()) * (c.getY() - b.getY()) - (a.getY() - b.getY()) * (c.getX() - b.getX());
	return prod_vect.toFloat();
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float vect_a;
	float vect_b;
	float vect_c;

	vect_a = prod_vectoriel(a, point, b);
	vect_b = prod_vectoriel(b, point, c);
	vect_c = prod_vectoriel(c, point, a);
	if (vect_a < 0 && vect_b < 0 && vect_c < 0)
		return (true);
	if (vect_a > 0 && vect_b > 0 && vect_c > 0)
		return (true);
	return (false);
}
