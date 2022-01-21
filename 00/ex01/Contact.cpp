/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:07:41 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:03:31 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string	contact_input(const char *str)
{
	std::string	input;

	while (input.empty())
	{
		std::cout<< "Please enter " << str;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout<< "It seems you didn't understand me, so I'll repeat." <<std::endl;
	}
	return (input);
}

void		Contact::set_infos(void)
{
	this->_first_name = contact_input("First name : ");
	this->_last_name = contact_input("Last name : ");
	this->_nickname = contact_input("Nickname : ");
	this->_number = contact_input("Phone number : ");
	this->_secret = contact_input("Darkest secret : ");
	return ;
}

void		Contact::display(void) const
{
	std::cout<< "First name :" << this->_first_name <<std::endl;
	std::cout<< "Last name :" << this->_last_name <<std::endl;
	std::cout<< "Nickname :" << this->_nickname <<std::endl;
	std::cout<< "Phone number :" << this->_number <<std::endl;
	std::cout<< "Darkest secret :" << this->_secret <<std::endl;
	return ;
}

std::string	Contact::get_firstname() const
{
	return (this->_first_name);
}

std::string	Contact::get_lastname() const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname() const
{
	return (this->_nickname);
}

std::string	Contact::get_number() const
{
	return (this->_number);
}

std::string	Contact::get_secret() const
{
	return (this->_secret);
}
