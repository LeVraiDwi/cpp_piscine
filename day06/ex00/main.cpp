#include "Convert.hpp"

int	main(int argc, char **argv)
{
	Convert	*conv;

	if (argc == 2)
	{
		conv = new Convert(argv[1]);
		conv->printConvert();
		delete conv;
	}
	return 0;
}
