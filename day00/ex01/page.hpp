#ifndef PAGE_HPP
# define PAGE_HPP

class page{
        public:
                page(void);
                ~page(void);
                int	complete(void);
                void	afficher(void) const;
		void	afficher_format_line(int i) const;
		void	comp(std::string str) const;

        private:
		void	_format(std::string str) const;
		std::string _first;
		std::string _last;
		std::string _nick;
		std::string _secret;
}
#endif
