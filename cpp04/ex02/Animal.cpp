/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g <gothmane@student.1337.>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:59:29 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 07:37:54 by g                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){};

Animal::~Animal(){};

Animal::Animal(Animal &a)
{
    *this = a;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string tp)
{
    this->type = tp;
}

Animal& Animal::operator=(const Animal &a)
{
    if (this != &a)
    {
        this->type = a.getType();
    }
    return (*this);
}

