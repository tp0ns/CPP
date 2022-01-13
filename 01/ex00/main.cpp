/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 03:41:27 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 04:26:40 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack()
{
	Pony	Peanut("Peanut", "Brown", "Little");

	std::cout<< "His name is " << Peanut.get_name() << "." <<std::endl;
	std::cout<< "He's " << Peanut.get_color() << " !" <<std::endl;

	return ;
}

void	ponyOnTheHeap()
{
	Pony	*Daisy = new Pony("Daisy", "White", "Huge");

	std::cout<< "Her name is " << Daisy->get_name() << "." <<std::endl;
	std::cout<< "She's " << Daisy->get_color() << " !" <<std::endl;

	delete Daisy;
	return ;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
