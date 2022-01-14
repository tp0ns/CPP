/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:29:33 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 10:19:11 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>
# include <iomanip>

class	Zombie{
private :
	std::string	_name;
public :
	Zombie( void );
	~Zombie( void );

	void	announce( void ) const;
	void	setName( std::string name );		
};

#endif
