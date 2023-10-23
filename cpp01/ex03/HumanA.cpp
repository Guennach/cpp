/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:22 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 11:29:59 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA() : wp("weapon"){
// 	// this->name = a;
// };

HumanA::HumanA(std::string a, Weapon& b) : wp(b){
	this->name = a;
};

HumanA::~HumanA(){};

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->wp.getType() << std::endl;
}

Weapon HumanA::getWeapon()
{
	return (this->wp);
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return (this->name);
}