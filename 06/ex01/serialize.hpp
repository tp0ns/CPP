#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdint.h>

typedef struct s_data {
	int	i;
	char c;
} Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &o, const Data &obj);

#endif