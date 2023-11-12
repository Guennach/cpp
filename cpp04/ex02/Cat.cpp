/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:59:56 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/07 16:27:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->br = new Brain();
    std::cout << "A cat is here" << std::endl;
}

Cat::Cat(Cat &a)
{
    this->br = NULL;
    *this = a;
}

Cat::~Cat(){
    std::cout << "A cat is gone" << std::endl;
    delete br;
}

Cat& Cat::operator=(const Cat &c)
{
    if (this != &c)
    {
        if(this->br)
            delete this->br;
        this->type = c.getType();
        this->br = new Brain(*c.br);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}
