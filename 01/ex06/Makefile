NAME = violence
CPP = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

$(NAME) : $(OBJECTS)
	$(CPP) -o $(NAME) $(FLAGS) $(OBJECTS)

all : $(NAME)

clean : 
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

%o : %cpp
	$(CPP) $(FLAGS) -c $<