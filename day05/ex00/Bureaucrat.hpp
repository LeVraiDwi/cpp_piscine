#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat{
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat();

		Bureaucrat &			operator=(Bureaucrat const & rhs);
		int						getGrade(void)const;
		std::string const		getName(void)const;
		void					rankUp(void);
		void					rankDown(void);

		class GradeTooHighException: public std::exception{
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException();
				virtual char const 	*what() const throw();
			private:
		};

		class GradeTooLowException: public std::exception{
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException();
				virtual char const 	*what() const throw();
			private:
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);
#endif
