#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal(std::string const & type);
		~WrongAnimal();

		WrongAnimal &	operator=(WrongAnimal const & rhs);
        std::string		getType() const;
        void			makeSound() const;

	protected:
		std::string _type;
};
#endif
