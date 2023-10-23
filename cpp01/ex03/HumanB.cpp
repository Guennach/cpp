/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:19 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 12:22:45 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};

HumanB::HumanB(std::string a){
	this->name = a;
};

HumanB::~HumanB(){};


void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->wp->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wp)
{
	this->wp = &wp;
}

Weapon* HumanB::getWeapon()
{
	return (this->wp);
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return (this->name);
}