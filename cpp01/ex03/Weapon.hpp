/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:30 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 12:56:14 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		std::string	getType();
		void		setType(std::string tp);
		Weapon();
		Weapon(std::string type);
		~Weapon();
};

#endif