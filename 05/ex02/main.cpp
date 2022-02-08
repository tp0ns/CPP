#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
	Bureaucrat gardener("Gardener", 0);
	ShrubberyCreationForm	tree("garden");

	gardener.signForm(tree);
	gardener.executeForm(tree);
	
	Bureaucrat robot("Robot", 25);
	RobotomyRequestForm		tomy("Cat");
	RobotomyRequestForm		jerr("Mouse");

	robot.signForm(tomy);
	robot.signForm(jerr);
	robot.executeForm(tomy);
	robot.executeForm(tomy);
	robot.executeForm(jerr);
	robot.executeForm(jerr);

	Bureaucrat president("Zaphod Beeblebrox", 1);
	PresidentialPardonForm	pardon("Patoche");

	president.signForm(pardon);
	president.executeForm(pardon);
	return (0);
}