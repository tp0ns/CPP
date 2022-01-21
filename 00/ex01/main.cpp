/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:11:07 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:05:02 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	std::string input;
	Phonebook crappy;

	std::cout<< "============CRAPPY=THE=PHONE=BOOK============" <<std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cout<< "Type an action : ";
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
			return (0);
		else if (input.compare("ADD") == 0)
			crappy.add();
		else if (input.compare("SEARCH") == 0)
			crappy.search();
		else if (input.compare("EXIT") != 0)
			std::cout<< "Invalid command, try : ADD, SEARCH or EXIT" <<std::endl;
	}
	return (0);
}