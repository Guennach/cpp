/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:51:39 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 14:37:45 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for(int i = 0; i < 4; i++)
        this->stocks[i] = 0;
};

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->stocks[i])
            delete stocks[i];
    }
}

MateriaSource::MateriaSource(MateriaSource &ms)
{
    *this = ms;
}

void MateriaSource::learnMateria(AMateria *ora)
{
    int check = 0;

    for (int i = 0; i < 4; i++)
    {
        if (!this->stocks[i])
        {
            this->stocks[i] = ora;
            check = 1;
            break;
        }
    }
    if (check == 0)
        std::cout << "Sorry! There's no place in the STOCKS !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int check = 0;

    for (int i = 0; i < 4; i++)
    {
        if (this->stocks[i] && this->stocks[i]->getType() == type)
            return (this->stocks[i]->clone());
        // std::cout << type << std::endl;
    }
    if (check == 0)
        std::cout << "Sorry! That materia's not found!" << std::endl;
    return (NULL);
}