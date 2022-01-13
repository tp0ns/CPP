/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:51:04 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 06:35:53 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent(){
	return ;
}

ZombieEvent::~ZombieEvent(){
	return ;
}

void		ZombieEvent::setZombieType(std::string newtype)
{
	this->_type = newtype;
	return ;
}

Zombie		*ZombieEvent::newZombie(std::string name) const
{
	Zombie *newZombie = new Zombie(name, this->_type);
	return (newZombie);
}

Zombie		*ZombieEvent::randomChump() const
{
	srand(time(NULL));
	int	i = rand() % 5;
	std::string names[5] = {"Romain", "Louis", "Paul", "Marceau", "Theo"};
	// std::string types[5] = {"Loud", "Nice", "Smart", "Lazy", "Fast"};
	Zombie *newZombie = new Zombie(names[i], this->_type);

	return(newZombie);
}

std::string	ZombieEvent::get_type() const{
	return (this->_type);
}
