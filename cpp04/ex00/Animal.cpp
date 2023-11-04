/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:59:29 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 11:02:57 by gothmane         ###   ########.fr       */
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

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}