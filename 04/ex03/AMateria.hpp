#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria();
		AMateria( AMateria const &src);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria&	operator=(AMateria const & rhs);

		std::string const &getType() const; //Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */