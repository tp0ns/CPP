#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		class InvalidFormName : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Form name doesn't exist");
				}
		};

		Form*			makeForm(std::string name, std::string target) const;
};

#endif /* ********************************************************** INTERN */