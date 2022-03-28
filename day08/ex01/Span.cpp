#include "Span.hpp"

Span::Span(void): _size(0){
	return;
}

Span::Span(unsigned int const size): _size(size){
	return;
}

Span::Span(Span const & src){
	*this = src;
	return;
}

Span::~Span(void){
	return;
}

Span &	Span::operator=(Span const & rhs){
	this->_size = rhs._size;
	this->_cont  = rhs._cont;
	return *this;
}

void	Span::addNumber(int const nb){
	if (this->_cont.size() >= this->_size)
		throw OutOfRange();
	this->_cont.insert(this->_cont.begin(), nb);
	return;
}

void	Span::addNumber(int *begin, int *end){
	if ((this->_cont.size() + (end - begin)) > this->_size)
		throw OutOfRange();
	while (begin < end)
	{
		this->addNumber(*begin);
		begin++;
	}
	return;
}

unsigned int		Span::shortestSpan() const{
	std::vector<int>	vect(this->_size, 0);

	if (this->_size < 2)
		throw NoSpanFound();
	std::adjacent_difference(this->_cont.begin(), this->_cont.end(), vect.begin());
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		*it = std::abs(*it);
	return *std::min_element(vect.begin(), vect.end());
}

unsigned int		Span::longestSpan() const{
	std::vector<int>	vect(this->_size, 0);

	if (this->_size < 2)
		throw NoSpanFound();
	std::adjacent_difference(this->_cont.begin(), this->_cont.end(), vect.begin());
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		*it = std::abs(*it);	
	return *std::max_element(vect.begin(), vect.end());
}

Span::OutOfRange::OutOfRange(): std::exception(){
	return;
}

Span::OutOfRange::~OutOfRange() throw(){
	return;
}

char const	*Span::OutOfRange::what() const throw(){
	return "Span already full";
}

Span::NoSpanFound::NoSpanFound(): std::exception(){
	return;
}

Span::NoSpanFound::~NoSpanFound() throw(){
	return;
}

char const	*Span::NoSpanFound::what() const throw(){
	return "Span must have at least a size of 2";
}
