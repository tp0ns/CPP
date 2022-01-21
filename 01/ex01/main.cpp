/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:34:56 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:57:22 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main( void ) {
	Zombie* horde;
	int		hordeSize = 5;

	horde = zombieHorde(hordeSize, "Morty");
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
