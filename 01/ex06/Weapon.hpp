/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:12 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:14:37 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon{
private :
	std::string _type;
public :
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const &getType() const;
	void setType(std::string new_type);
};

#endif
