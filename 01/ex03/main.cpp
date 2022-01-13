/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:51:31 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 07:39:06 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	std::cout<< "Small horde (2) :" << std::endl;
	ZombieHorde small_horde(2);
	small_horde.announce();

	std::cout<<std::endl;
	std::cout<< "Medium horde (9) :" << std::endl;
	ZombieHorde medium_horde(9);
	medium_horde.announce();

	std::cout<<std::endl;
	std::cout<< "Large horde (23) :" << std::endl;
	ZombieHorde large_horde(23);
	large_horde.announce();

	return (0);
}
