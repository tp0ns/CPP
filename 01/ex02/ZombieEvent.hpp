/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:51:07 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 06:35:52 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include "Zombie.hpp"

class	ZombieEvent{
private:
	std::string	_type;
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string newtype);
	Zombie	*newZombie(std::string name) const;
	Zombie	*randomChump() const;

	std::string get_type() const;
};

#endif