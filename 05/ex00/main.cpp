#include "Bureaucrat.hpp"

int main( void ) {
	//---------------------- Test init too low
	try {
		std::cout<<"Trying to init a Bureaucrat with 151 grade... "<<std::endl;
		Bureaucrat ryan("Ryan", 151);
		std::cout<<"Success !" <<std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr<< e.what() << std::endl<<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr<< e.what() << std::endl<<std::endl;
	}
	//---------------------- Test init too high
	try {
		std::cout<<"Trying to init a Bureaucrat with 0 grade... "<<std::endl;
		Bureaucrat michael("Michael Scott", 0);
		std::cout<<"Success !" <<std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr<< e.what() << std::endl<<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr<< e.what() << std::endl<<std::endl;
	}
	//---------------------- Test decGrade() impossible
	try {
		Bureaucrat kelly("Kelly", 150);

		std::cout<< kelly <<std::endl
		<< "Trying to decGrade ... "<<std::endl;
		kelly.decGrade();
		std::cout<<"Success !" <<std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr<< e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr<< e.what() << std::endl;
	}
	//---------------------- Test incGrade() impossible
	try {
		Bureaucrat jim("Jim", 1);

		std::cout<<std::endl<< jim <<std::endl
		<< "Trying to incGrade ... "<<std::endl;
		jim.incGrade();
		std::cout<<"Success !" <<std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr<< e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr<< e.what() << std::endl;
	}
	return (0);
}
