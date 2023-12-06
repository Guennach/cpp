/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:05:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/26 15:30:39 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>

template <typename T>
int   easyfind(T &t, int a)
{
    int checker = std::find(t.begin(), t.end(), a);

    if (checker != t.end)
    {
        std::cout << "Found !" << std::endl;
        return (1);
    }
    std::cout << "Not Found !" << std::endl;
    return (-1);
}
