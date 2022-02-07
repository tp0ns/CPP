#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

int main( void ) {
	Bureaucrat gardener("Gardener", 0);
	ShrubberyCreationForm	tree("garden");

	gardener.signForm(tree);
	gardener.executeForm(tree);
	
	// Bureaucrat robot("Robot", 25);
	// RobotomyRequestForm		tomy("Cat");

	// robot.signForm(tomy);
	// robot.executeForm(tomy);
	// robot.executeForm(tomy);
	// robot.executeForm(tomy);
	// robot.executeForm(tomy);

	// Bureaucrat president("Mr President", 1);
	// PresidentialPardonForm	pardon("Patoche");

	// president.signForm(pardon);
	// president.executeForm(pardon);
	return (0);
}