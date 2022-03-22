#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Intern();
		Intern(Intern const & src);
		virtual ~Intern();

		Intern &	operator=(Intern const & rhs);
		Form *		makeForm(std::string const & request, std::string const & target);
		typedef Form* (Intern::*FunctionPointer)(std::string const &);

		class	FormNotFound: public std::exception{
			public:
				FormNotFound();
				virtual ~FormNotFound() throw();
				virtual char const * what() const throw(); 
		};

	private:
		static std::string		_form[3];
		static FunctionPointer	_funcPointer[3];
		Form *					_newPresidential(std::string const &target);
		Form *					_newRobotomi(std::string const &target);
		Form *					_newTree(std::string const &target);
		Form *					_choose_form(std::string const & form, std::string & target);
};

#endif
