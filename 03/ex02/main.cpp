/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:39 by tpons             #+#    #+#             */
/*   Updated: 2022/01/28 16:25:43 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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
		
		FragTrap scavy("Fravy");

	    std::cout<<std::endl;
		scavy.highFiveGuys();
		scavy.takeDamage(2);
		scavy.attack("Dwight Schrute");
	    std::cout<<std::endl;

		FragTrap scopy(scavy);

	    std::cout<<std::endl;
		scopy.setName("Fropy");
		scopy.setDamage(5);
		scopy.attack("Michael Scott");
	    std::cout<<std::endl;
	return (0);
}
