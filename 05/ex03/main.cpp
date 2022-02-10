#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void ) {
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("asd", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("schrubbery creation", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	return (0);
}