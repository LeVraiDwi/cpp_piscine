#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void) const;

	private:
		int		_aff_index(std::string str) const;
		void	_aff_line(int index) const;
		Contact	_PhoneBook[8];
		int		_nb_page;
		int		_oldest;
		
};
#endif
