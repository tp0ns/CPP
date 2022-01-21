/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:31:20 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:45:09 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	Zombie* zombie;

	zombie = newZombie("Louis");
	zombie->announce();
	randomChump("Romain");
	delete(zombie);
	return (0);
}
