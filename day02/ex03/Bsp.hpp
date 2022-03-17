#ifndef BSP_HPP
# define BSP_HPP

# include <iostream>
# include <cmath>
# include "Point.hpp"
# include "Fixed.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	prod_vectoriel(Point const & a, Point const & b, Point const & c);
#endif
