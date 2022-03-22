#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form{
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
		void					doExecute(void) const;
	private:
		std::string const	_target;
};

#endif
