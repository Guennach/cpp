/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:02:28 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 11:38:55 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "A wrong Animal is here !" << std::endl;
    this->type = "Wrong";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "A wrong animal is destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
    *this = wa;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wa)
{
    if (this != &wa)
    {
        this->type = wa.getType();
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Sound" << std::endl;
}