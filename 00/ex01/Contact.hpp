/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:03:44 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:02:09 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <iomanip>

class Contact{
private :
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _number;
	std::string _secret;

public :
	Contact(void);
	~Contact(void);

	std::string	get_firstname()		const;
	std::string	get_lastname()		const;
	std::string	get_nickname()		const;
	std::string	get_number()		const;
	std::string	get_secret()		const;
	void 		display()			const;
	void 		set_infos();
};

#endif