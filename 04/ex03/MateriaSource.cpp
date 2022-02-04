#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
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
	for (int i = 0; i < 4; i++)
		delete this->_learned[i];
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
			if (this->_learned[i] != NULL)
				delete this->_learned[i];
			if (rhs._learned[i] != NULL)
				this->_learned[i] = rhs._learned[i]->clone();
			else
				this->_learned[i] = NULL; 
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
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = src;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i]->getType() == type)
			return (this->_learned[i]->clone());
	}
	return (NULL);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */