#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & src);
		Animal(std::string const & type);
		virtual ~Animal();

		Animal &	    operator=(Animal const & rhs);
        std::string     getType() const;
        virtual void    makeSound() const;

	protected:
		std::string _type;
        
};
#endif
