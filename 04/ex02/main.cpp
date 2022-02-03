#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	int		pop = 6;
	AAnimal *tab[pop];

	for( int i = 0; i < pop; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}
	std::cout<<std::endl<<std::endl;
	//Uncommenting the test below should make the compilation fail :
	// AAnimal test;
	std::cout<< "WELL DONE IT HAS COMPILED" <<std::endl;
	std::cout<<std::endl<<std::endl;
	for (int i = 0; i < pop; i++)
		delete tab[i];
	return (0);
}