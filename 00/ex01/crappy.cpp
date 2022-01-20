/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:11:07 by tpons             #+#    #+#             */
/*   Updated: 2022/01/20 12:27:17 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include <cstdlib>

std::string resize_info(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	search_command(int number, Contact *crappy)
{
	int index = 0;
	std::string str_input;
	int	search_input;

	if (number > 0)
	{
		std::cout<< "| Index |First name|Last  name| Nickname |" <<std::endl;
		while (index < number)
		{
			std::cout << "|";
			std::cout << std::setw(7);
			std::cout<< index + 1;
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(crappy[index].get_firstname());
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(crappy[index].get_lastname());
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(crappy[index++].get_nickname());
			std::cout<< "|" << std::endl;
		}
		while (42)
		{
			std::cout<< "What index should I display to you ?" <<std::endl;
			std::getline(std::cin, str_input);
			search_input = atoi(str_input.c_str());
			if ( search_input > 0 && search_input < number + 1)
				break ;
			else
				std::cout<< "Oupsie Daisy it seems you didn't understand my request, please type a valid index to display !" <<std::endl;
		}
		crappy[search_input - 1].display();
	}
	else
		std::cout<< "I'm empty, please add contact using my ADD command !" <<std::endl;
}

void	handle_input(std::string input)
{
	Contact crappy[8];
	int		number = 0;

	while (input.compare("EXIT") != 0)
	{
		std::cout<< "Type an action : ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
			return ;
		else if (input.compare("ADD") == 0)
		{
			if (number < 8)
				crappy[number++].add_contact();
			else
				crappy[7].add_contact();
		}
		else if (input.compare("SEARCH") == 0)
			search_command(number, crappy);
		else if (input.compare("EXIT") != 0)
			std::cout<< "Invalid command, try : ADD, SEARCH or EXIT" <<std::endl;
	}
	return ;
}

int		main(void)
{
	std::string input;
	Contact contact;

	std::cout<< "============CRAPPY=THE=PHONE=BOOK============" <<std::endl;
	handle_input(input);
	return (0);
}