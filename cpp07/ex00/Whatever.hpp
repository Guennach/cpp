/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:41:19 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/30 13:44:09 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T>
T min(T a, T b) {
    if (a < b)
        return a;
    return b;
}

template<typename T>
T max(T a, T b) {
    if (a > b)
        return a;
    return b;
}
