/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:52:40 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 07:39:38 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int N)
{
	int	i = 0;
	srand(time(NULL));
	this->_horde = new Zombie[N];
	std::string names[10] = {"Drusus", "Liam", "Olivia", "Noah", "Emma", "Oliver", "Ava", "Elijah", "Charlotte", "William"};

	this->_pop = N;
	while (i < N)
	{
		this->_horde[i].set_name(names[rand() % 10]);
		i ++;
	}
	std::cout<< "OH MY GOD ! BEWARE OF THIS ZOMBIE HORDE !!!" <<std::endl;
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_horde;
	std::cout<< "Nice, they killed themselves, they are so dumb hahaha" <<std::endl;
	return ;
}

void	ZombieHorde::announce() const
{
	int i = 0;

	while (i < this->_pop)
	{
		this->_horde[i].announce();
			i++;
	}
	return ;
}
