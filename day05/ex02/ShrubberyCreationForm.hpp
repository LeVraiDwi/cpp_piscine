#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# define TREE "    /\\\n   /  \\\n  /    \\\n    ||\n"

class Bureaucrat;

class ShrubberyCreationForm: public Form{
	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);
		void					doExecute(void) const;
	private:
		ShrubberyCreationForm();
		std::string const	_target;
};

#endif
