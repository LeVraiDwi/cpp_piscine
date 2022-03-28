#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <deque>
# include <stack>
# include <list>

template <typename T, typename container = std::deque<T>>
class	MutantStack: public std::stack<T, container>{
	public:
		MutantStack(): std::stack<T, container>() {return;}
		MutantStack(MutantStack<T, container> const & src) {*this = src;}
		~MutantStack() {return;}

		MutantStack<T, container> &	operator=(MutantStack<T, container> const & rhs) {
			if (&rhs == this)
				return (*this);
			*this->c = rhs.c;
			return *this;
		}		

		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;
	
		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}
		const_iterator	begin() const {return this->c.begin();}
		const_iterator	end() const {return this->c.end();}
		reverse_iterator	rbegin() {return this->c.rbegin();}
		reverse_iterator	rend() {return this->c.rend();}
		const_reverse_iterator	rbegin() const {return this->c.rbegin();}
		const_reverse_iterator	rend() const {return this->c.rend();}

};
#endif
