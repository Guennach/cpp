/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:12:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 15:47:26 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(){}

Base::~Base(){}

Base::Base(const Base &b)
{
    *this = b;
}

Base& Base::operator=(const Base &b)
{
    if (this != &b)
    {
        (void) b;
    }
    return (*this);
}