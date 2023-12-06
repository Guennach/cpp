/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:18 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/27 14:05:48 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int      N;
        std::vector<int> vr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &s);
        ~Span();
        Span& operator=(const Span &sp);
        void addNumber(int nbr);
        int shortestSpan();
        int longestSpan();
};