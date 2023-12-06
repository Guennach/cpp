/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:27 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/26 15:19:17 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

t_SlotsHolder	*Character::ft_lstlast(t_SlotsHolder *lst)
{
	t_SlotsHolder	*current;

	current = lst;
	if (!lst)
		return (NULL);
	while (current->next)
		current = current->next;
	return (current);
}

void	Character::ft_lstadd_back(t_SlotsHolder **lst, t_SlotsHolder *n)
{
	t_SlotsHolder	*last;

	if (*lst == NULL)
		*lst = n;
	else
	{
		last = ft_lstlast(*lst);
		last->next = n;
	}	
}


Character::Character(){
    this->count = 0;
    this->head = new t_SlotsHolder;
    this->ls = 0;
    for (int i = 0; i < 4; i++)
        this->slots[i] = 0;
}

Character::Character(std::string name){
    this->name = name;
    this->head = new t_SlotsHolder;
    this->ls = 0;
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
    t_SlotsHolder *tmp;

    tmp = this->head;
    while(tmp)
    {
        delete tmp->slot;
        tmp = tmp->next;
    }
    while(this->head)
    {
        delete this->head;
        this->head = this->head->next;
    }
    if (this->head)
        delete this->head;
}

Character::Character(Character &c)
{
    *this = c;
}

std::string const& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{   
    if (m == NULL)
    {
        std::cout << "Don't GIVE ME NULL FELLA !" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!this->slots[i])
        {
            this->slots[i] = m->clone();
            
            return ;
        }
    }
    std::cout << "Sorry, the inventory is already full !" << std::endl;
}


void Character::unequip(int idx)
{
    if ((idx >= 0 && idx < 4) && this->slots[idx])
    {
        this->ls = new t_SlotsHolder;
        this->ls->slot = this->slots[idx];
        ft_lstadd_back(&this->head, this->ls);
        this->slots[idx] = 0;
        return ;
    }
    std::cout << "Sorry, Can't unequip an empty inventory !" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[idx])
        {
            this->slots[idx]->use(target);
            return ;
        }
    }
    std::cout << "Sorry, slot not found in that specific index !" << std::endl;
}

Character& Character::operator=(const Character& a)
{
    if (this != &a)
    {
        this->name = a.getName();
        for (int i = 0; i < 4; i++)
            this->slots[i] = a.slots[i];
    }
    return (*this);
}