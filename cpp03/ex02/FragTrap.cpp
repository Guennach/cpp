/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:31 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 12:13:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDmg = 30;
	std::cout << "FragTrap Created !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destroyed" << std::endl;
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
