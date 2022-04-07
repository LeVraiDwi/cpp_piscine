#include "Harl.hpp"

Harl::Harl(){
	return;
}

Harl::~Harl(){
	return;
}

void	Harl::complain(std::string const & level) const{
	for (int i = 0; i < 4; i++)
		if (!_func[i].compare(level))
			return (this->*_ptr[i])();
	return;
}

void	Harl::_debug() const{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::_info() const{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::_warning() const{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::_error() const{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

std::string Harl::_func[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

Harl::FuncPtr	Harl::_ptr[4] = {
	&Harl::_debug,
	&Harl::_info,
	&Harl::_warning,
	&Harl::_error,
};
