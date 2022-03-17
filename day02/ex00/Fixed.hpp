#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(Fixed const & a);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &	operator=(Fixed const & a);

	private:
		int			_raw_bits;
		static int const	_fract_bit = 8;
};
#endif
