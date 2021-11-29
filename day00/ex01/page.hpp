#include "phonebook.hpp"

#ifndef PAGE_HPP
# define PAGE_HPP

class page{
        public:
                page(void);
                ~page(void);
                int	complete(void);
                void	afficher(void) const;
		void	aff_format_line(int i) const;
		int	comp(std::string str) const;

        private:
		void	_format(std::string str) const;
		std::string _first;
		std::string _last;
		std::string _nick;
		std::string _secret;
};
#endif
