/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:35 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/07 17:50:00 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

struct t_SlotsHolder
{
    AMateria            *slot;
    t_SlotsHolder       *next;
};

class Character : public ICharacter
{
private:
    std::string             name;
    AMateria                *slots[4];
    t_SlotsHolder           *head;
    t_SlotsHolder           *ls;
    int count;
public:
    Character();
    Character(std::string name);
    ~Character();
    Character(Character &c);
    Character &operator=(const Character &a);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    t_SlotsHolder	*ft_lstlast(t_SlotsHolder *lst);
    void	ft_lstadd_back(t_SlotsHolder **lst, t_SlotsHolder *n);
};

#endif