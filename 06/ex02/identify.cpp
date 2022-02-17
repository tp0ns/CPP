#include "identify.hpp"

Base*	generate( void ) {
	srand(time(NULL));
	switch (rand() % 3) {
	case 0:
		std::cout<< "A subtype created." <<std::endl;
		return ( new A);
	case 1:
		std::cout<< "B subtype created." <<std::endl;
		return (new B);
	case 2:
		std::cout<< "C subtype created." <<std::endl;
		return (new C);
	default:
		return (NULL);
	}
}

void	identify( Base* p ) {
	if (dynamic_cast<A *>(p))
		std::cout << "This Base pointer points to an A type !" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This Base pointer points to a B type !" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This Base pointer points to a C type !" << std::endl;
}

void	identify( Base& p ) {
try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "This Base reference refer to an A type !" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "This Base reference refer to a B type !" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "This Base reference refer to a C type !" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "You shouldn't be reading this....." << std::endl;
			}

		}
	}
}
