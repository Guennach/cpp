/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:16 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/21 14:23:12 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Span.hpp"

Span::Span() : N(0) , counter(0) 
{
}

Span::Span(unsigned int n) : N(n) , counter(0) 
{   
}

Span::Span(const Span &sp): N(sp.N) ,  counter(sp.counter) , vr(sp.vr) 
{
}

Span::~Span(){}

Span& Span::operator=(const Span &sp)
{
    if (this != &sp)
    {
        this->N = sp.N;
        this->vr = sp.vr;
        this->counter = sp.counter;
    }
    return (*this);
}

void Span::addSeqNbr(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin < end)
    {
        addNumber(*begin);
        std::cout << "Counter = " << counter << std::endl;
        begin++;
    }
}

void Span::addNumber(int nbr)
{
    if (this->counter >= this->N)
        throw std::runtime_error("You can't add more than those elements");
    vr.push_back(nbr);
    this->counter++;
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
    throw std::runtime_error("\033[1;31mSize is less than two\033[0m");
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
    throw std::runtime_error("\033[1;31mSize is less than two\033[0m");
}