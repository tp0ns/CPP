/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:39 by tpons             #+#    #+#             */
/*   Updated: 2022/01/31 18:26:05 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
		DiamondTrap scavy("Davy");

	    std::cout<<std::endl;
		scavy.highFiveGuys();
		scavy.guardGate();
		scavy.whoAmI();
		scavy.takeDamage(2);
		scavy.attack("Dwight Schrute");
	    std::cout<<std::endl;

		DiamondTrap scopy(scavy);

	    std::cout<<std::endl;
		scopy.setName("Dopy");
		scopy.setDamage(5);
		scopy.attack("Michael Scott");
	    std::cout<<std::endl;
	return (0);
}
