#include "serialize.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream &o, const Data &src) {
	o	<< "nb : " << src.i << std::endl;
	o	<< "c : " << src.c << std::endl;
	return (o);
}
