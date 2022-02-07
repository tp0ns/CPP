#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat ryan("Ryan", 151);
	Bureaucrat michael("Michael Scott", 0);
	Bureaucrat kelly("Kelly", 150);
	Bureaucrat jim("Jim", 1);

	std::cout<<std::endl<< kelly << jim <<std::endl;

	kelly.decGrade();
	jim.incGrade();

	Bureaucrat holly(michael);
	return (0);
}
