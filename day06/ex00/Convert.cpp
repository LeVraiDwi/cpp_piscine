#include "Convert.hpp"

Convert::Convert(char const *val): _to_convert(val){
	if (strlen(val) == 1 && !isdigit(val[0]))
		this->_val = static_cast<double>(val[0]);
	else
		this->_val = atof(val);
	return;
}

Convert::Convert(Convert const & src): _to_convert(src._to_convert), _val(src._val){
	return;
}

Convert::~Convert(){
	return;
}

Convert &	Convert::operator=(Convert const & rhs){
	if (&rhs == this)
		return *this;
	this->_to_convert = rhs._to_convert;
	this->_val = rhs._val;
	return *this;
}


float		Convert::_toFloat(void) const{
	if (!std::isinf(this->_val) && (this->_val > std::numeric_limits<float>::max() || static_cast<float>(this->_val) < (-1 * std::numeric_limits<float>::max())))
		throw ImpossibleException();
	if (!std::isnan(this->_val) && !std::isinf(this->_val) && strlen(this->_to_convert) != 1 && !this->_isNum(this->_to_convert))
		throw ImpossibleException();
	return static_cast<float>(this->_val);
}

char		Convert::_toChar(void) const{
	if (this->_val > std::numeric_limits<char>::max() || this->_val < std::numeric_limits<char>::min())
		throw ImpossibleException();
	if (strlen(this->_to_convert) != 1 && !this->_isNum(this->_to_convert))
		throw ImpossibleException();
	if (std::isnan(this->_val) || std::isinf(this->_val))
		throw ImpossibleException();
	if (!isprint(static_cast<char>(this->_val)))
		throw UnprintableException();
	return static_cast<char>(this->_val);
}

int			Convert::_toInt(void) const{
	if (this->_val > std::numeric_limits<int>::max() || this->_val < std::numeric_limits<int>::min())
		throw ImpossibleException();
	if (!std::isnan(this->_val) && !std::isinf(this->_val) && strlen(this->_to_convert) != 1 && !this->_isNum(this->_to_convert))
		throw ImpossibleException();
	if (std::isnan(this->_val) || std::isinf(this->_val))
		throw ImpossibleException();
	return static_cast<int>(this->_val);
}

double		Convert::_toDouble(void) const{
	if (!std::isinf(this->_val) && (this->_val > std::numeric_limits<double>::max() || this->_val < (-1 * std::numeric_limits<double>::max())))
		throw ImpossibleException();
	if (!std::isnan(this->_val) && !std::isinf(this->_val) && strlen(this->_to_convert) != 1 && !this->_isNum(this->_to_convert))
		throw ImpossibleException();
	return static_cast<double>(this->_val);
}

void		Convert::printConvert(void) const{
	std::cout << "char: ";
	try
	{
		std::cout << this->_toChar() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		std::cout << this->_toInt() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		std::cout << std::setprecision(1) << std::fixed;
		std::cout << this->_toFloat() << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
	std::cout << "double: ";
	try
	{
		std::cout << std::setprecision(1) << std::fixed;
		std::cout << this->_toDouble() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return;
}

bool		Convert::_isNum(char const *str) const{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] && str[i] == '.')
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] && (str[i] == 'f' && !str[i + 1]))
		return true;
	else if (str[i])
		return false;
	return true;
}

Convert::ImpossibleException::ImpossibleException(): std::exception(){
	return;
}

Convert::ImpossibleException::~ImpossibleException() throw(){
	return;
}

char const	*Convert::ImpossibleException::what() const throw(){
	return "impossible";
}

Convert::UnprintableException::UnprintableException(): std::exception(){
	return;
}

Convert::UnprintableException::~UnprintableException() throw(){
	return;
}

char const	*Convert::UnprintableException::what() const throw(){
	return "non displayable";
}
