#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form{
	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);
		void					doExecute(void) const;
	private:
		std::string const	_target;
};

#endif
