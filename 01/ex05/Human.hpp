/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:02:05 by tpons             #+#    #+#             */
/*   Updated: 2021/06/01 05:27:59 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <iostream>

class	Human{
private :
	Brain const _brain;
public :
	Human();
	~Human();

	std::string	identify(void) const;

	Brain const	&getBrain(void) const;
};

#endif