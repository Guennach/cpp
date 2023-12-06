/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:16 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/27 15:02:36 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Span.hpp"

Span::Span() : N(0) , vr(0)
{
}

Span::Span(unsigned int n) : N(n) 
{   
}

Span::Span(const Span &sp): N(sp.N) 
{
}

Span::~Span(){}

Span& Span::operator=(const Span &sp)
{
    if (this != &sp)
    {
        this->N = sp.N;
        this->vr = sp.vr;
    }
    return (*this);
}

void Span::addNumber(int nbr)
{
    vr.push_back(nbr);
    std::cout << "Size : " ;
    std::cout << vr.size() << std::endl;
}

int Span::shortestSpan()
{
    if (vr.size() >= 2)
    {
        int min_nbr = INT_MAX;
        int d = -404;
        for (size_t i = 1; i < vr.size(); i++)
        {
            d = std::abs(vr[i] - vr[i - 1]);
            if (d < min_nbr)
                min_nbr = d;
        }
        return (d);
    }
    return (-1);
}

int Span::longestSpan()
{
    if (vr.size() >= 2)
    {
        int max_nbr = 0;
        int d = -404;
        for (size_t i = 1; i < vr.size(); i++)
        {
            d = std::abs(vr[i] - vr[i - 1]);
            if (d > max_nbr)
                max_nbr = d;
        }
        return (max_nbr);
    }
    return (-1);
}