#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << i.getName() + " :" << std::endl
	<< "Target is : " << i.getTarget() << std::endl
	<< (i.isSigned() ? "Has been signed." : "Has not been signed")<<std::endl
	<< "Bureaucrat needs to be graded: " << i.getSignGrade() << " to sign this form"<<std::endl
	<< "Bureaucrat needs to be graded: " << i.getExecGrade() << " to execute this form"<<std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout<< "Drrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" <<std::endl;
	std::srand(std::time(NULL));
	if ((std::rand() % 2) == 1)
		std::cout << this->_target << " has failed robotomization!" << std::endl;
	else
		std::cout << "It worked ! " << this->_target << " is a robot from now on !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string RobotomyRequestForm::getTarget( void ) const {
	return (this->_target);
}

/* ************************************************************************** */