#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void ) {
	try {
		Intern someRandomIntern;
		Form* rrf;
		// rrf = someRandomIntern.makeForm("asd", "Bender");
		// delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("schrubbery creation", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	catch (Intern::InvalidFormName& e) {
		std::cerr<< "Intern: " << e.what() <<std::endl;
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