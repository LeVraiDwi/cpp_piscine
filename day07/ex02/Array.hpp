#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array{
	public:
		Array<T>(void){
			this->_array = 0;
			this->_size = 0;
			return;
		}
		Array<T>(unsigned int const n){
			this->_array = new T[n];
			this->_size = n;
			return;
		}
		Array<T>(Array<T> const & src){
			this->_array = new T[src._size];
			this->_size = src._size;
			for (unsigned int i; i < _size; i++)
				this->_array[i] == src._array[i];
			return;
		}
		virtual ~Array<T>(void){
			if (this->_array)
				delete [] this->_array;
			return;
		}

		Array<T> &	operator=(Array<T> const  & rhs){
			if (&rhs == this)
				return *this;
			if (this->_array)
				delete this->_array;
			this->_array = new T[rhs._size];
			this->_size = rhs._size;
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return *this;
		}
		T &	operator[](int iterator){
			if (iterator > static_cast<int>(this->_size) || iterator < 0)
				throw OutOfRangeException();
			return this->_array[iterator];
		}
		T 	operator[](int iterator) const{
			if (iterator > static_cast<int>(this->_size) || iterator < 0)
				throw OutOfRangeException();
			return this->_array[iterator];
		}
		
		unsigned int const & size(void) const{
			return (this->_size);
		}
		class OutOfRangeException: public std::exception{
			public:
				OutOfRangeException(void) {return;};
				~OutOfRangeException(void) throw() {return;};
				char const	*what(void) const throw() {return ("iterator out of range");};
		};
	private:
		T				*_array;
		unsigned int	_size;
};
#endif
