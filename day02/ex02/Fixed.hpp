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
		int		getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat() const;
		int		toInt() const;
		Fixed &		operator=(Fixed const & a);
		bool		operator<(Fixed const & val) const;
		bool		operator>(Fixed const & val) const;
		bool		operator<=(Fixed const & val) const;
		bool		operator>=(Fixed const & val) const;
		bool		operator==(Fixed const & val) const;
		bool		operator!=(Fixed const & val) const;
		Fixed		operator+(Fixed const & val) const;
		Fixed		operator-(Fixed const & val) const;
		Fixed		operator*(Fixed const & val) const;
		Fixed		operator/(Fixed const & val) const;
		Fixed		operator++(int);
		Fixed		operator--(int);
		Fixed		operator++(void);
		Fixed		operator--(void);
		static Fixed	min(Fixed const &a , Fixed const &b);
		static Fixed	max(Fixed const &a , Fixed const &b);

	private:
		int			_raw_bits;
		static int const	_fract_bit = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);
#endif
