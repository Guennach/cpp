/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:15 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 13:31:27 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		wp;
		std::string	name;
	public:
		void		setName(std::string name);
		void		setWeapon(Weapon& wp);
		Weapon*		getWeapon();
		std::string	getName();
		void		attack();
		HumanB();
		HumanB(std::string name);
		~HumanB();
		
};

#endif