#include <iostream>

int	main(int argc, char **argv)
{
	int	i(1);
	int	l;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			l = 0;
			while (argv[i][l])
			{
				argv[i][l] = toupper(argv[i][l]);
				l++;
			}
			std::cout << argv[i];
			i++;
			if ( i < argc)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}
