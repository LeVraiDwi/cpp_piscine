#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <stdint.h>

typedef	struct	s_data
{
	int	a;
}				Data;

uintptr_t 	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
# endif
