#include <iostream>
#include <fstream>
#include <string>

void	writeAndReplace(std::string read, std::string s1, std::string s2, std::ofstream ofs)
{
	int l;

	if ((l = read.find(s1)) >= 0)
	{
		read.erase(l, s1.length());
		read.insert(l, s2);
	}
	ofs << read << std::endl;
	return;
}

int	main(int argc, char **argv)
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;
	std::ifstream	ifs;
	std::ofstream	ofs;;
	std::string	read;

	if (argc != 4)
	{
		std::cout << "Erreur: necessite 3 argument" << std::endl;
		return (1);
	}
	fileName  = argv[1];
	s1  = argv[2];
	s2  = argv[3];
	if (fileName.empty())
	{
		std::cout << "Erreur: le nom du fichier est invalide" << std::endl;
		return (1);
	}
	if (s1.empty())
	{
		std::cout << "Erreur: la chaine s1 est invalide" << std::endl;
		return (1);
	}
	if (s2.empty())
	{
		std::cout << "Erreur: le chaine s2 est invalide" << std::endl;
		return (1);
	}
	ifs.open(fileName);
	ofs.open(fileName);
	while (std::getline(ifs, read))
	{
		std::cout << read << std::endl;
		if (!read.empty())
			writeAndReplace(read, s1, s2, ofs);
	}
	ifs.close();
	return (0);
}
