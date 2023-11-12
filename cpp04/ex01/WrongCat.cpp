/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:02:24 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/08 15:36:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "A wrong Cat is here !" << std::endl;
    this->type = "Wrong";
}

WrongCat::~WrongCat()
{
    std::cout << "A wrong Cat is destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wa)
{
    *this = wa;
}

WrongCat& WrongCat::operator=(const WrongCat &wa)
{
    if (this != &wa)
        this->type = wa.getType();
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat Sound" << std::endl;
}