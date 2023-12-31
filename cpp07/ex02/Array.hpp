/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:13:59 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/18 17:26:22 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "exception"

template <typename T>
class Array
{
private:
    T *d;           // Pointer of T
    unsigned int s; // Size

public:
	class OutOfBound : public std::exception
	{
		virtual const char *what() const throw()
        {
            return "\033[1;31mOut of Bound !\033[0m";
        };
	} OutOfBound;
    
    Array()
    {
        this->d = new T();
        this->s = 0;
    };
    ~Array()
    {
        delete[] d;
    };
    Array(unsigned int n)
    {
        this->d = new T[n];
        for (unsigned int i = 0; i < n; i++)
            this->d[i] = T(); // Init with default constructer
        this->s = n;
    };
    Array(const Array &ar) : d(new T[ar.s]), s(ar.s)
    {
        for (unsigned int i = 0; i < s; i++)
            this->d[i] = ar.d[i];
    };
    Array &operator=(const Array &ar)
    {
        if (this == &ar)
        {
            delete[] d;             // removes the d and realloc on it so it won't leak
            this->d = new T[ar.s];  // alloc new T[size]; T can be any typename
            this->s = ar.s;
            for (unsigned int i = 0; i < s; i++)
                this->d[i] = ar.d[i];
        }
        return (*this);
    };
    unsigned int size()
    {
        return this->s;
    };
    T &operator[](unsigned int i)
    {
        if (i < 0 || i >= s)
            throw OutOfBound; // Index out of bounds (Access smtg out of size)
        return d[i];
    }
};