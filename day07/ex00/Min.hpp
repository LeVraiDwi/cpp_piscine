#ifndef MIN_HPP
# define MIN_HPP

template<typename T>
T	min(T const & x, T const & y){
	return (x < y ? x : y);
}
#endif
