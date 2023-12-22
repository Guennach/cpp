/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:18 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/21 13:05:07 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int      N;
        unsigned int      counter;
    public:
        std::vector<int> vr;
        Span();
        Span(unsigned int n);
        Span(const Span &s);
        ~Span();
        Span& operator=(const Span &sp);
        void addNumber(int nbr);
        int shortestSpan();
        int longestSpan();
        void addSeqNbr(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};