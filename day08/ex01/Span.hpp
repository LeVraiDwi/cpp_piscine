#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <numeric>
# include <exception>
# include <iostream>

class	Span{
	private:
		std::vector<int>	_cont;
		unsigned int 		_size;
		Span();

	public:
		Span(unsigned int const size);
		Span(Span const & src);
		virtual ~Span(void);

		Span &			operator=(Span const & rhs);
		void			addNumber(int const nb);
		void			addNumber(int *begin, int *end);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		class	OutOfRange: public std::exception{
			public:
				OutOfRange();
				virtual ~OutOfRange() throw();
				virtual const char	*what() const throw();
		};

		class	NoSpanFound: public std::exception{
			public:
				NoSpanFound();
				virtual ~NoSpanFound() throw();
				virtual const char	*what() const throw();
		};

};
#endif
