/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 03:41:38 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 04:11:01 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

class Pony{
private :
	std::string	_name;
	std::string	_color;
	std::string	_size;
public :
	Pony(std::string n, std::string c, std::string s);
	~Pony();
	std::string	get_name() const;
	std::string get_color() const;
	std::string	get_size() const;
};

#endif