#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed const & a);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int	toInt() const;
		Fixed &	operator=(Fixed const & a);

	private:
		int			_raw_bits;
		static int const	_fract_bit = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);
#endif
