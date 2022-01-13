/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:01:43 by tpons             #+#    #+#             */
/*   Updated: 2021/06/01 05:31:51 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iomanip>

class Brain{
private :
	int _size_mm;
public :
	Brain();
	~Brain();
	
	std::string	identify(void) const;

	int			get_size(void) const;
	void		set_size(int new_size);
};

#endif