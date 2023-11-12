/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:36:35 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/07 16:23:33 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){};

Brain::~Brain(){};

Brain::Brain(Brain &br)
{
    *this = br;
}

Brain& Brain::operator=(const Brain &b)
{
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
    }
    return (*this);
}