/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 13:35:06 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDmg = 20;
	std::cout << "ScavTrap Created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destroyed" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st)
{
	*this = st;
	std::cout << "ScavTrap Copied" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ct)
{
	if (this != &ct)
	{
		this->Name = ct.Name;
		this->AttackDmg = ct.AttackDmg;
		this->EnergyPoint = ct.EnergyPoint;
		this->HitPoint = ct.HitPoint;
	}
	return (*this);
}