/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:00:00 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 14:37:24 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    this->br = new Brain;
    std::cout << "A Dog is here" << std::endl;
};

Dog::Dog(const Dog &a)
{
    *this = a;
}

Dog::~Dog(){
    std::cout << "A Dog is gone" << std::endl;
    delete br;
};

Dog& Dog::operator=(const Dog &c)
{
    if (this != &c)
    {
        this->type = c.getType();
    }
    return (*this);
}


void Dog::makeSound() const
{
    std::cout << "Woooooooof Wooffff" << std::endl;
}