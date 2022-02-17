#include "serialize.hpp"

int	main (void) {
	Data initial =  {42, '*'};
	std::cout<< "Initial address: " << &initial <<std::endl;
	std::cout<< "Initial value: " << std::endl  << initial <<std::endl;

	uintptr_t serialized = serialize(&initial);

	std::cout<<std::endl<< "Serialized value: " << serialized <<std::endl<<std::endl;

	Data *deserialized = deserialize(serialized);

	std::cout<< "Deserialized address: " << deserialized <<std::endl;
	std::cout<< "Deserialized value: " << std::endl << *deserialized <<std::endl;
	return (0);
}