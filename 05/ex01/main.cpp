#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
	Form caf("APL", 150, 40);
	Bureaucrat you("You", 42);

	std::cout<< caf <<std::endl;

	you.signForm(caf);

	return (0);
}