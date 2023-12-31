/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:14:01 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 15:48:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(){}

C::~C(){}

C::C(const C &C)
{
    *this = C;
}

C& C::operator=(const C &C)
{
    if (this != &C)
    {
        (void) C;
    }
    return (*this);
}