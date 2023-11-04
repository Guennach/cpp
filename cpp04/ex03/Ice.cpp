/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 14:36:35 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Ice.hpp"

Ice::Ice(/* args */) : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice &c)
{
    *this = c;
}

Ice& Ice::operator=(Ice &c)
{
    if (this != &c)
        return (*this);
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}