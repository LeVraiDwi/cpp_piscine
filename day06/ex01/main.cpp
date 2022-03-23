#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	uintptr_t	ptr;
	Data		*data = new Data;

	data->a = 42;
	std::cout << data->a << std::endl;
	ptr = serialize(data);
	data = deserialize(ptr);
	std::cout << data->a << std::endl;
	delete data;
	return 0;
}
