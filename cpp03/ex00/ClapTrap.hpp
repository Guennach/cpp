/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 14:31:19 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	 private:
		std::string Name;
		int			HitPoint;
		int			EnergyPoint;
		unsigned int		AttackDmg;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//Const, dest, copy const
		~ClapTrap();
		ClapTrap();
		ClapTrap(const ClapTrap &ct);
		ClapTrap& operator=(const ClapTrap &ct);
		ClapTrap(std::string Name);
		//Getters
		std::string getName()const ;
		int			getHitPoint() const;
		int			getEnergyPoint() const;
		int			getAttackDmg() const;
};

#endif