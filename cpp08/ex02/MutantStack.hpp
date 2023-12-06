/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:42:10 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/28 14:29:11 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() : std::stack<T>()
        {};
        ~MutantStack(){};
        iterator begin()
        {
            return (std::stack<T>::c.begin());
        };
        iterator end()
        {
            return (std::stack<T>::c.end());
        };
};

