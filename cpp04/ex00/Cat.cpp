/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:59:56 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/07 16:26:18 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "A cat is here" << std::endl;
};

Cat::Cat(Cat &a)
{
    *this = a;
}

Cat::~Cat(){
    std::cout << "A cat is gone" << std::endl;
};

Cat& Cat::operator=(const Cat &c)
{
    if (this != &c)
        this->type = c.getType();
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}