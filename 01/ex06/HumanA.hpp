/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:27 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:51:45 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA{
private :
	Weapon		*_myweapon;
	std::string	_name;
public :
	HumanA();
	HumanA(std::string name);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void	setWeapon(Weapon &new_weapon);
	void	attack() const;
};

#endif
