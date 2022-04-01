#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include "PhoneBook.hpp"

class Contact{
        public:
			Contact(void);
			~Contact(void);
			int		complete(void);
			void	afficher(void) const;
			void	aff_format_line(int i) const;

        private:
			int			comp(std::string str) const;
			void		_format(std::string str) const;
			std::string	_first;
			std::string _last;
			std::string _nick;
			std::string _secret;
			std::string _phon;
};
#endif
