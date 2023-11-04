/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:33 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 13:55:21 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name){
	this->Name = Name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDmg = 0;
	std::cout << "ClapTrap created" << std::endl;
};

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destroyed" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << "ClapTrap copied" << std::endl;
}

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap created" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint > 0 || (unsigned int) this->HitPoint >= amount)
	{
		this->HitPoint -= amount;
		std::cout << amount << " of damage have been taken from " << this->Name << std::endl << "The new hit point value gonna be = " << this->HitPoint << std::endl;
	}
	else
		std::cout << "Can't procced with that action" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0)
	{
		this->HitPoint += amount;
		std::cout << amount << " of damage have been given from " << this->Name << std::endl << "The new hit point value gonna be = " << this->HitPoint << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->Name);
}

int			ClapTrap::getHitPoint() const
{
	return (this->HitPoint);
}

int			ClapTrap::getEnergyPoint() const
{
	return (this->EnergyPoint);
}

int			ClapTrap::getAttackDmg() const
{
	return (this->AttackDmg);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct)
{
	if (this != &ct)
	{
		this->Name = ct.getName();
		this->AttackDmg = ct.getAttackDmg();
		this->EnergyPoint = ct.getEnergyPoint();
		this->HitPoint = ct.getHitPoint();
	}
	return (*this);
}