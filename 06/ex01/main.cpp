#include "serialize.hpp"

int	main (void) {
	Data meta =  {42, '*'};
	std::cout<< "Initial address: " << &meta <<std::endl;
	std::cout<< "Initial value: " << std::endl  << meta <<std::endl;

	uintptr_t serialized = serialize(&meta);

	std::cout<< "Serialized: " << serialized <<std::endl<<std::endl;

	Data deserialized = *deserialize(serialized);

	std::cout<< "Deserialized address: " << &deserialized <<std::endl;
	std::cout<< "Deserialized value: " << std::endl << deserialized <<std::endl;
	return (0);
}