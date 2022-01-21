/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:24:28 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:05:15 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class Phonebook {
private:
	int		size;
	Contact contacts[8];
public:
	Phonebook( void );
	~Phonebook( void );
	void	add( void );
	void 	display( void ) const;
	void	search( void ) const;
};

#endif