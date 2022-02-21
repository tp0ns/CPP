#include "easyfind.hpp"

int main( void ) {
	try {
		std::list<int> lst;
		lst.push_back(21);
		lst.push_back(42);
		lst.push_back(84);
		std::cout<< ::easyfind(lst, 42) << " found in this list." <<std::endl;
	}
	catch (std::exception& e) {
		std::cout<< "Element not found in list !" <<std::endl;
	}
	try {
		std::vector<int>	vct(20, 42);

		std::cout<< ::easyfind(vct, 42) << " found in this vector." <<std::endl;
	}
	catch (std::exception& e) {
		std::cout<< "Element not found in vector !" <<std::endl;
	}
	return (0);
}