/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:05:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/21 12:30:16 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>

template <typename T>
int   easyfind(T &t, int a)
{
    typename T::iterator checker = std::find(t.begin(), t.end(), a);

    if (checker != t.end())
        return (1);
    return (-1);
}
