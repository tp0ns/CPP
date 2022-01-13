/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:30 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:57:53 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include "Weapon.hpp"

class HumanB{
private :
	Weapon		*_myweapon;
	std::string	_name;
public :
	HumanB();
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();
	
	void	setWeapon(Weapon &new_weapon);
	void	attack() const;
};

#endif