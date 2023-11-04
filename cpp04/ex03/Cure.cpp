/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:41 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 14:36:53 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cure.hpp"

Cure::Cure(/* args */) : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure &c) : AMateria(c)
{
    *this = c;
}

Cure& Cure::operator=(Cure &c)
{
    if (this != &c)
        return (*this);
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}