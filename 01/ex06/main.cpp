/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:27:44 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 15:40:04 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	splitter(std::string arg)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arg == levels[i])
			return (i);
	}
	return (-1);	
}

int	main( int ac, char **av )
{
	Karen karen;
	
	if (ac != 2)
	{
		std::cout<< "./karenFilter <LOG LEVEL>"<<std::endl
		<<"LOG LEVEL can be DEBUG, INFO, WARNING or ERROR"
		<<std::endl;
		return (1);
	}
	switch (splitter(av[1]))
	{
	case 0:
		std::cout<<"[DEBUG]"<<std::endl;
		karen.complain("DEBUG");
	case 1:
		std::cout<<"[INFO]"<<std::endl;
		karen.complain("INFO");
	case 2:
		std::cout<<"[WARNING]"<<std::endl;
		karen.complain("WARNING");
	case 3:
		std::cout<<"[ERROR]"<<std::endl;
		karen.complain("ERROR");
		break ;
	default:
		std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
	}
	return (0);
}
