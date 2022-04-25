#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T ptr[], unsigned const int size, void (*func)(T const &x))
{
	for (unsigned int i = 0; i < size; i++)
		func(ptr[i]);
	return;
}
#endif
