/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:25 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/25 08:48:23 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string tp){
	this->type = tp;
};

Weapon::~Weapon(){};


const std::string	&Weapon::getType(){
	return (this->type);
};

void	Weapon::setType(std::string type){
	this->type = type;
};