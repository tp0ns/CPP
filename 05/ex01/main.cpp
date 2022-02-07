#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
	Form caf("APL", 1, 40);
	Bureaucrat you("You", 42);

	std::cout<< caf <<std::endl;

	// caf.beSigned(you);
	you.signForm(caf);

	std::cout<< caf <<std::endl;
	return (0);
}