#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource: public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();

		MateriaSource &	operator=(MateriaSource const & rhs);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const & type);

	private:
		AMateria	*_materia[4];

};
#endif
