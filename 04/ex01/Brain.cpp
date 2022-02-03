#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain( void )
{
	std::srand(std::time(NULL));
	std::cout<< "Brain default constructor called" <<std::endl;
	std::string	smiley[] = {
		"😭",
		"😂",
		"🥺",
		"🤣",
		"✨",
		"🙏",
		"😍",
		"🥰",
		"😊",
	};

	std::string	quotes[] = {
		"I don't like desk lamps.",
		"It doesn't matter what college you went to.",
		"My hair curler is broken.",
		"I think I could fall asleep really quickly.",
		"She was shaking like a chihuahua.",
		"I'm crying.",
		"I'm sick of online dating.",
		"She had a black thumb.",
		"That's a huge load off my mind.",
		"We can go to lunch.",
		"I'm single.",
		"She prefers to take a vitamin capsule.",
		"I don't think you should go out with him.",
		"It's a significant promise.",
		"The tables were made of fake wood.",
		"I own a lot of property in New York.",
		"Michael doesn't work.",
		"The broken leg isn't Tom's biggest problem.",
		"The enemy destroyed the city.",
		"This could change all of our lives."
	};

	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = smiley[std::rand() % (sizeof(smiley) / sizeof(std::string))] + quotes[std::rand() % (sizeof(quotes) / sizeof(std::string))];
	}
	return ;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout<< "Brain destructor called" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string		Brain::getIdea( int i ) const {
	return (this->ideas[i]);
}

/* ************************************************************************** */