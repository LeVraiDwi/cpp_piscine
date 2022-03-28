#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <deque>
#include <list>
#include <queue>
#include <set>
#include <stack>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>
#include <stdexcept>

class NotFound : public std::exception{
	public:
		NotFound() {return ;};
		virtual ~NotFound() throw () {return ;};
		virtual char const * what(void) const throw(){return "Occurence not found";};
};

template<typename T>
int const &	easyfind(T const & cont, int const n){
	typename T::const_iterator	it;

	for (it = cont.begin(); it != cont.end(); it++)
		if (*it == n)
			return *it;
	throw NotFound();
}
#endif
