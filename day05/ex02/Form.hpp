#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form(std::string const & name, int signe, int execute);
		Form(Form const & src);
		virtual ~Form();

		Form &					operator=(Form const & rhs);
		int						getGradeSigne(void) const;
		int						getGradeExecute(void) const;
		std::string const		getName(void) const;
		bool					isSigned(void) const;
		void					beSigned(Bureaucrat const & bcrat);
		void					execute(Bureaucrat const & bcrat) const;
		virtual void			doExecute() const = 0;

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
		
		class FormNotSigned: public std::exception{
			public:
				FormNotSigned();
				virtual ~FormNotSigned();
				virtual char const 	*what() const throw();
		};

	private:
		std::string const	_name;
		bool				_signed;
		int const			_executable;
		int const			_signable;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);
#endif
