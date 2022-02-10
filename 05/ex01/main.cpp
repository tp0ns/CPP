#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
    try {
	    Form caf("APL", 42, 42);
	    Bureaucrat you("You", 21);

	    std::cout<< caf <<std::endl<<std::endl;

        you.signForm(&caf);

	    std::cout<<std::endl<< caf <<std::endl;
    }
    catch (Form::GradeTooHighException& e) {
        std::cerr<< "Form " << e.what() <<std::endl;
    }
    catch (Form::GradeTooLowException& e) {
        std::cerr<< "Form " << e.what() <<std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e) {
        std::cerr<< "Bureaucrat " << e.what() <<std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e) {
        std::cerr<< "Bureaucrat " << e.what() <<std::endl;
    }
    return  (0);
}