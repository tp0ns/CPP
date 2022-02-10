#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
		void		execute(Bureaucrat const & executor) const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		std::string		getTarget( void ) const;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */