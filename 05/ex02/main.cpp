#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
	try {
		Bureaucrat gardener("Gardener", 50);
		ShrubberyCreationForm	tree("garden");

		gardener.signForm(&tree);
		gardener.executeForm(tree);
		
		Bureaucrat robot("Robot", 25);
		RobotomyRequestForm		tomy("Cat");
		RobotomyRequestForm		jerr("Mouse");

		robot.signForm(&tomy);
		robot.signForm(&jerr);
		robot.executeForm(tomy);
		robot.executeForm(tomy);
		robot.executeForm(jerr);
		robot.executeForm(jerr);

		Bureaucrat president("Zaphod Beeblebrox", 1);
		PresidentialPardonForm	pardon("Patoche");

		president.signForm(&pardon);
		president.executeForm(pardon);
	}
	catch (Form::ExecDeniedException& e) {
		std::cerr<< "Form: " << e.what() <<std::endl;
	}
	catch (Form::GradeTooHighException& e) { 
		std::cerr<< "Form: " << e.what() <<std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cerr<< "Form: " << e.what() <<std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr<< "Bureaucrat: " << e.what() <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr<< "Bureaucrat: " << e.what() <<std::endl;
	}
	return (0);
}