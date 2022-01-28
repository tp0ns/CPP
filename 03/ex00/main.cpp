/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:39 by tpons             #+#    #+#             */
/*   Updated: 2022/01/28 15:38:03 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap clappy("Clappy");

    std::cout<<std::endl;
	clappy.takeDamage(20);
	clappy.attack("Dwight Schrute");
    std::cout<<std::endl;
	
	ClapTrap copy(clappy);

    std::cout<<std::endl;
	copy.setName("Copy");
	copy.setDamage(5);
	copy.attack("Michael Scott");
    std::cout<<std::endl;

	return (0);
}
