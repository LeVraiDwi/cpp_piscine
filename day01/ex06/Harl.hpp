#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl{
	public:
			Harl();
			~Harl();

			typedef void	(Harl::*FuncPtr)(void) const;
			void	complain(std::string const & level) const;
			void	complainFiltre(std::string const & level) const;

	private:
		static FuncPtr		_ptr[4];
		static std::string	_func[4];
		void				_debug(void) const;
		void				_info(void) const;
		void				_warning(void) const;
		void				_error(void) const;
};
#endif
