/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:17 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/06 14:52:04 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"


AMateria::AMateria (std::string const & type){
    this->type = type;
}

AMateria::~AMateria(){};

AMateria::AMateria(){};

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter __unused &target)
{
}

AMateria& AMateria::operator=(const AMateria &a)
{
    if (this != &a)
        this->type = a.getType();
    return (*this);
}
