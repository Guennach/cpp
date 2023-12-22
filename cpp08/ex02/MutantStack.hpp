/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:42:10 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/22 11:05:04 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T, >
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator; // Alias for iterator

        //Default constructer
        MutantStack() : std::stack<T>(){};

        //Copy Constructer
        MutantStack(const MutantStack& ms) : std::stack<T>(ms){}; // copy data of MutantStack to Stack

        //Destructer
        ~MutantStack(){};

        //Operator= overloader
        MutantStack& operator=(const MutantStack& ms)
        {
            if (this != &ms)
                std::stack<T>::operator=(ms); // we call the operator=() of stack
            return (*this);
        };

        //Returns first instance in the stack
        iterator begin()
        {
            return (std::stack<T>::c.begin()); // c is the underlying container (in this case it means the container_type (std::deque))
        };

        //Returns last instance in the stack
        iterator end()
        {
            return (std::stack<T>::c.end()); 
        };
};

