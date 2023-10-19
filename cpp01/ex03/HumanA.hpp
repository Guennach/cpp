/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:21 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 13:26:45 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		wp;
		std::string	name;
	public:
		void		setName(std::string name);
		Weapon		getWeapon();
		std::string	getName();
		void		attack();
		// HumanA();
		HumanA(std::string a, Weapon& b);
		~HumanA();
		
};

#endif