/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:07:17 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 13:24:06 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> 
#include "ScalarConverter.hpp"


int main2 (int ac, char **av)
{
    if (ac < 2)
        return (1);
    char *point = NULL;
    double result = std::strtod(av[1], &point);
    int detect_dot = std::string(av[1]).find('.');
    ScalarConverter *a = ScalarConverter::Init();
    

    if ((av[1] && av[1][0] == 0) || std::string(av[1]) == "nan" || std::string(av[1]) == "nanf")
        a->Converter(4, av, point);
    else if (point && av[1][0] !='f' && point[0] == 'f' && point[1] == 0)
        a->Converter(1, av, point);
    else if (point && (point[0] != 0) && point[0] && point[1] == 0)
        a->Converter(2, av, point);
    else if (detect_dot > 0 && point && point[0] == 0)
        a->Converter(3, av, point);
    else if (result && point[0] == 0)
        a->Converter(0, av, point);
    else 
    {
        if (std::string(av[1]) == "0")
            a->Converter(6, av, point);
        else
            a->Converter(5, av, point);
    }
    delete a;
    return (0);
}

int main(int ac, char **av)
{
    main2(ac, av);
}