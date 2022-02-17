#include "template.hpp"

int	main( void ) {
	int tabI[4] = {0, 1, 2, 3};
	std::string tabS[4] = {"Hello", "Hola", "Bonjour", "Buongiorno"};

	std::cout<< "Template used with int: " <<std::endl;
	iter(tabI, 4, output);
	std::cout<<std::endl
	<< "Template used with strings: " <<std::endl;
	iter(tabS, 4, output);
	return (0);
}