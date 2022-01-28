/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:39 by tpons             #+#    #+#             */
/*   Updated: 2022/01/28 16:25:57 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
		ClapTrap clappy("Clappy");
	
    	std::cout<<std::endl;
		clappy.takeDamage(2);
		clappy.attack("Dwight Schrute");
    	std::cout<<std::endl;
		
		ClapTrap copy(clappy);
	
    	std::cout<<std::endl;
		copy.setName("Copy");
		copy.setDamage(5);
		copy.attack("Michael Scott");
    	std::cout<<std::endl;
		
		ScavTrap scavy("Scavy");

	    std::cout<<std::endl;
		scavy.guardGate();
		scavy.takeDamage(2);
		scavy.attack("Dwight Schrute");
	    std::cout<<std::endl;

		ScavTrap scopy(scavy);

	    std::cout<<std::endl;
		scopy.setName("Scopy");
		scopy.setDamage(5);
		scopy.attack("Michael Scott");
	    std::cout<<std::endl;
	return (0);
}
