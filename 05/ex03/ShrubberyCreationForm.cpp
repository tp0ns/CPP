#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
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

void		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	(void)executor;
	std::string		out_filename(this->_target + "_shrubbery");	
	std::ofstream	output(out_filename.c_str());
	if (!output.is_open())
	{
		std::cerr<< "Couldn't open outputfile" <<std::endl;
		return ;
	}
	output << "                                                    .     " << std::endl
	<< "                                         .         ;      " << std::endl
	<< "            .              .              ;%     ;;       " << std::endl
	<< "              ,           ,                :;%  %;        " << std::endl
	<< "               :         ;                   :;%;'     ., " << std::endl
	<< "      ,.        %;     %;            ;        %;'    ,;   " << std::endl
	<< "        ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
	<< "         %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
	<< "          ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
	<< "           `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
	<< "            `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
	<< "               `:%;.  :;bd%;          %;@%;'              " << std::endl
	<< "                 `@%:.  :;%.         ;@@%;'               " << std::endl
	<< "                   `@%.  `;@%.      ;@@%;                 " << std::endl
	<< "                     `@%%. `@%%    ;@@%;                  " << std::endl
	<< "                       ;@%. :@%%  %@@%;                   " << std::endl
	<< "                         %@bd%%%bd%%:;                    " << std::endl
	<< "                           #@%%%%%:;;                     " << std::endl
	<< "                           %@@%%%::;                      " << std::endl
	<< "                           %@@@%(o);  . '                 " << std::endl
	<< "                           %@@@o%;:(.,'                   " << std::endl
	<< "                       `.. %@@@o%::;                      " << std::endl
	<< "                          `)@@@o%::;                      " << std::endl
	<< "                           %@@(o)::;                      " << std::endl
	<< "                          .%@@@@%::;                      " << std::endl
	<< "                          ;%@@@@%::;.                     " << std::endl
	<< "                         ;%@@@@%%:;;;.                    " << std::endl
	<< "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
	output.close();
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget( void ) const {
	return (this->_target);
}

/* ************************************************************************** */