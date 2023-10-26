/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:33 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 12:16:10 by gothmane         ###   ########.fr       */
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
}

void ClapTrap::attack(const std::string& target)
{
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (this->EnergyPoint > 0 || this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		this->HitPoint -= this->AttackDmg;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->EnergyPoint > 0 || this->HitPoint > 0 || this->AttackDmg >= amount)
	{
		this->AttackDmg -= amount;
		std::cout << amount << " of damage have been taken from  " << this->Name << std::endl;
	}
	else
		std::cout << "The amount is bigger than the actual damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0 || this->HitPoint > 0)
	{
		this->AttackDmg += amount;
		std::cout << amount << " of damage have been given from  " << this->Name << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "No energy or Hit Point left!" << std::endl;
}

void ClapTrap::setName(std::string name)
{
	this->Name = name;
}

void ClapTrap::setHitPoint(int hp)
{
	this->HitPoint = hp;
}

void ClapTrap::setEnergyPoint(int ep)
{
	this->EnergyPoint = ep;
}

void ClapTrap::setAttackDmg(unsigned int ad)
{
	this->AttackDmg = ad;
}

std::string ClapTrap::getName()
{
	return (this->Name);
}

int			ClapTrap::getHitPoint()
{
	return (this->HitPoint);
}

int			ClapTrap::getEnergyPoint()
{
	return (this->EnergyPoint);
}

int			ClapTrap::getAttackDmg()
{
	return (this->AttackDmg);
}