#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;
	
	std::cout<< "WRONG EXAMPLES" <<std::endl;
	const WrongAnimal *wanimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();
	std::cout << std::endl;
	std::cout << wanimal->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	wanimal->makeSound(); // will output the cat sound!
	wcat->makeSound();
	std::cout << std::endl;
	delete wanimal;
	delete wcat;
	
	return (0);
}