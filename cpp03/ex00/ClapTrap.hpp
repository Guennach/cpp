/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 11:50:09 by gothmane         ###   ########.fr       */
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
		ClapTrap(std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &ct);
		//Setters
		void setName(std::string name);
		void setHitPoint(int hp);
		void setEnergyPoint(int ep);
		void setAttackDmg(unsigned int ad);
		//Getters
		std::string getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDmg();
};

#endif