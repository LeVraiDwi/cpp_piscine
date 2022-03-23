#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string.h>
# include <string>
# include <cmath>
# include <limits>

class Convert{
	public:
		Convert(char const *val);
		Convert(Convert const & src);
		virtual ~Convert();

		Convert &	operator=(Convert const & rhs);
		void		printConvert(void) const;

		class ImpossibleException: public std::exception{
			public:
				ImpossibleException();
				virtual	~ImpossibleException() throw();
				virtual const char	*what() const throw();
		};

		class UnprintableException: public std::exception{
			public:
				UnprintableException();
				virtual ~UnprintableException() throw();
				virtual const char	*what() const throw();
		};

	private:
		char const		*_to_convert;
		long double		_val;
		bool			_isNum(char const *str) const;
		float			_toFloat(void) const;
		char			_toChar(void) const;
		int				_toInt(void) const;
		double			_toDouble(void) const;
};
#endif
