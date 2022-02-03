#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	delete [] this->learned;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learned[i] != NULL)
				delete this->learned[i];
			if (rhs.learned[i] != NULL)
				this->learned[i] = rhs.learned[i]->clone();
			else
				this->learned[i] = NULL; 
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		MateriaSource::learnMateria(AMateria* src) {
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] == NULL)
		{
			this->learned[i] = src;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */