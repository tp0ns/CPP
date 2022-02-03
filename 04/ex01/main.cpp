#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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
	Animal	copy(*tab[0]);
	std::cout<<std::endl<<std::endl;
	std::cout<< "First of animal tab is : " << *tab[0] <<std::endl;
	std::cout<< "Copy of first animal in tab is : " << copy <<std::endl;
	std::cout<<std::endl<<std::endl<<"CHANGING FIRST ANIMAL IN TAB TYPE..."<<std::endl;
	std::cout<<std::endl<<std::endl;
	delete tab[0];
	tab[0] = new Dog();
	std::cout<< "First of animal tab is : " << *tab[0] <<std::endl;
	std::cout<< "Copy constructed animal is : " << copy <<std::endl;
	std::cout<<std::endl<<std::endl;
	for (int i = 0; i < pop; i++)
		delete tab[i];
	return (0);
}