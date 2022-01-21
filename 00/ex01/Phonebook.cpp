/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:24:15 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:02:12 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) {
	this->size = 0;
	return ;
}

Phonebook::~Phonebook( void ) {
	return ;
}

void	Phonebook::add( void ) {
	if (this->size < 8)
		this->contacts[this->size++].set_infos();
	else
		this->contacts[7].set_infos();
	return ;
}

std::string resize_info(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	Phonebook::display( void ) const {
	int	index = 0;

	if (this->size > 0)
	{
		std::cout<< "|   Index  |First name|Last  name| Nickname |" <<std::endl;
		while (index < this->size)
		{
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout<< index + 1;
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(this->contacts[index].get_firstname());
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(this->contacts[index].get_lastname());
			std::cout<< "|";
			std::cout << std::setw(10);
			std::cout << resize_info(this->contacts[index++].get_nickname());
			std::cout<< "|" << std::endl;
		}
	}
	return ;
}

void	Phonebook::search( void ) const {
	std::string str_input;
	int	search_input;

	if (this->size > 0)
	{
		this->display();
		while (42)
		{
			std::cout<< "What index should I display to you ?" <<std::endl;
			std::getline(std::cin, str_input);
			search_input = atoi(str_input.c_str());
			if ( search_input > 0 && search_input < this->size + 1)
				break ;
			else
				std::cout<< "Oupsie Daisy it seems you didn't understand my request, please type a valid index to display !" <<std::endl;
		}
		this->contacts[search_input - 1].display();
	}
	else
		std::cout<< "I'm empty, please add contact using my ADD command !" <<std::endl;
	return ;
}
