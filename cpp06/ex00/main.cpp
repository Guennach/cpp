/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:07:17 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 16:54:14 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string to_cast;


    if ()
    std::cout << "Char representation   : " << to_cast.c_str() << std::endl;
    std::cout << "int representation    : " << static_cast <int>(to_cast) << std::endl;
    std::cout << "float representation  : " << static_cast <float>(to_cast) << std:endl;
    std::cout << "double representation : " << static_cast <double> (to_cast) << std::endl;
} 