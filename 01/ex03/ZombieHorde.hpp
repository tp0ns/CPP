/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:52:36 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 07:21:00 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde{
private :
	int		_pop;
	Zombie	*_horde;
public :
	ZombieHorde(int N);
	~ZombieHorde();

	void	announce() const;
};

#endif
