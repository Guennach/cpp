/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 13:35:48 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDmg = 30;
	std::cout << "FragTrap Created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destroyed" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &st) : ClapTrap(st)
{
	*this = st;
	std::cout << "FragTrap Copied !" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High FIVE GUYS !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ct)
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