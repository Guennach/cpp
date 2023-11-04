/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:27 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 14:37:31 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; i++)
        this->slots[i] = 0;
}

Character::Character(std::string name){
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->slots[i] = 0;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            delete this->slots[i];
    }
}

Character::Character(Character *c)
{
    *this = c;
}

std::string const& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    int check = 0;

    for (int i = 0; i < 4; i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = m;
            check = 1;
            return ;
        }
    }
    if (check == 0)
        std::cout << "Sorry, the inventory is already full !" << std::endl;
}

void Character::unequip(int idx)
{
    int check = 0;

    for (int i = 0; i < 4; i++)
    {
        if (this->slots[idx])
        {
            delete this->slots[idx];
            check = 1;
        }
    }
    if (check == 0)
        std::cout << "Sorry, Can't unequip an empty inventory !" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    int check = 0;

    for (int i = 0; i < 4; i++)
    {
        if (this->slots[idx])
        {
            this->slots[idx]->use(target);
            check = 1;
            return ;
        }
    }
    if (check == 0)
        std::cout << "Sorry, slot not found in that specific index !" << std::endl;
}