/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:50:00 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 06:35:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		first;
	Zombie		*second;
	Zombie		*third;
	ZombieEvent	infection;

	std::cout<< "Patient 0 of a weird virus has been detected" <<std::endl;
	first.announce();

	infection.setZombieType("The Witcher Addict");
	second = infection.newZombie("Gaspard");
	second->announce();
	delete second;

	infection.setZombieType("LoL Addict");
	third = infection.randomChump();
	third->announce();
	delete third;
	
	return (0);
}