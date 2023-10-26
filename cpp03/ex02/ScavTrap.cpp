/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 12:10:31 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDmg = 20;
	std::cout << "ScavTrap Created !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st)
{
	// ClapTrap(&ct);
	*this = st;
	std::cout << "ScavTrap Copied !" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}