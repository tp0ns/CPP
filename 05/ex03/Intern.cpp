#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int						whichForm(std::string name)
{
	std::string names[3] = {
		"schrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++)
		if (name == names[i])
			return (i);
	return (-1);
}

Form*					Intern::makeForm(std::string name, std::string target) const {
	switch (whichForm(name))
	{
		case 0:
		{
			std::cout<< "Intern creates " << name <<std::endl;
			return (new ShrubberyCreationForm(target));
		}
		case 1 :
		{
			std::cout<< "Intern creates " << name <<std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 2 :
		{
			std::cout<< "Intern creates " << name <<std::endl;
			return (new PresidentialPardonForm(target));
		}
		default:
		{
			throw Intern::InvalidFormName();
		}
	}
}

/* ************************************************************************** */