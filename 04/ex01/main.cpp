#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	int		pop = 6;
	Animal *tab[pop];

	for( int i = 0; i < pop; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}
	std::cout<< "First of animal tab is :" << *tab[0] <<std::endl;
	std::cout<< "Last of animal tab is : " << *tab[pop - 1] <<std::endl;

	std::cout<< "First 5 ideas of first animal in tab are : " <<std::endl;
	for (int i = 5; i < 10; i++)
		std::cout<< ((Cat *)tab[0])->getBrain()->getIdea(i) <<std::endl;
	std::cout<< "First 5 ideas of last animal in tab are : " <<std::endl;
	for (int i = 5; i < 10; i++)
		std::cout<< ((Cat *)tab[pop - 1])->getBrain()->getIdea(i) <<std::endl;
	for (int i = 0; i < pop; i++)
		delete tab[i];
	return (0);
}