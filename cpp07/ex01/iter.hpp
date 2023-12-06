/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:23:59 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/02 12:42:13 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void ft_print(T &re)
{
    std::cout << re << " ";
}

template<typename T, typename F>
void iter(T* arr, int size,  F f)
{
    for (int i = 0; i < size; i++)
    {
        f(arr[i]);
    }
}