/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:19:50 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/05 16:27:53 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
};

RPN::~RPN()
{
};

RPN::RPN(const RPN &rp)
{
    *this = rp;
};

RPN &RPN::operator=(const RPN &rp)
{
    (void) rp;
    return (*this);
};

