/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:51:00 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 06:35:50 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie{
private :
	std::string _type;
	std::string _name;

public :
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void		announce() const;

	std::string	get_name() const;
	std::string	get_type() const;
	
};

#endif