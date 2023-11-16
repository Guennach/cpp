/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:07:17 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:51 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> 


// bool    ft_check_char(std::string str)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122)) 
//             return (false);
//     }
//     return (true);
// }

// bool    ft_check_int(std::string str)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         if ((str[0] != '-' && str[0] != '+')
//             && (str[i] < 48 || str[i] > 57)) 
//             return (false);
//     }
//     return (true);
// }

// bool    ft_check_float(std::string str)
// {
//     int dot = 0;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == '.' && i > 0)
//         {
//             if (dot == 0)
//                 dot = 1;
//             else
//                 return (false);
//         }
//         if ((str[0] != '-' && str[0] != '+')
//             && (str[i] < 48 || str[i] > 57) && str[i] != '.')
//             {
//                 return (false);
//             }
//     }
//     if (dot == 0)
//         return (false);
//     return (true);
// }

// #include <iomanip>

// int main (int ac, char **av)
// {
//     std::string to_cast = av[1];

//     if (to_cast[0] && to_cast[1] == 0 && ft_check_char(to_cast))
//     {
//         std::cout << "******** IN CHAR ********" << std::endl;
//         if (std::isprint(to_cast[0]))
//             std::cout << "char: " << to_cast[0] << std::endl;
//         else
//             std::cout << "char: Non displayable"  << std::endl;
//         std::cout << "int: " << static_cast <int>(to_cast[0]) << std::endl;
//         std::cout << "float: " << static_cast <float>(to_cast[0]) << std::endl;
//         std::cout << "double: " << static_cast <double> (to_cast[0]) << std::endl;
//     }
//     else if (ft_check_float(to_cast))
//     {
//         std::cout << "******** IN FLOAT ********" << std::endl;
//         float num = std::atof(to_cast.c_str());
//         std::cout << num << std::endl;
//         if (num == 0)
//         {
//             std::cout << "char: Non displayable" << std::endl;
//             std::cout << "int: " << 0 << std::endl;
//             std::cout <<  "float: " << 0 << ".0f" << std::endl;
//             std::cout << "double: " << 0 << ".0" << std::endl;
//         }
//         else
//         {
//         if (std::isprint(static_cast <char> (num)))
//             std::cout << "char: " << static_cast <char> (num) << std::endl;
//         else
//             std::cout << "char: Non displayable"  << std::endl;
//             std::cout << "int: " << static_cast<int>(num) << std::endl;
//             std::cout <<   "float: " << num << "f" << std::endl;
//             std::cout << "double: " << static_cast<double>(num) << std::endl;
//         }
//     }
//     else if (ft_check_int(to_cast))
//     {
//         std::cout << "******** IN INT ********" << std::endl;
//         int num = std::atoi(to_cast.c_str());
//         if (num == 0)
//         {
//             std::cout << "char: Non displayable" << std::endl;
//             std::cout << "int: " << 0 << std::endl;
//             std::cout << "float: " << 0 << ".0f" << std::endl;
//             std::cout << "double: " << 0 << ".0" << std::endl;
//         }
//         else
//         {
//         if (std::isprint(static_cast <char> (num)))
//             std::cout << "char: " << static_cast <char> (num) << std::endl;
//         else
//             std::cout << "char: Non displayable"  << std::endl;
//             std::cout << "int: " << static_cast<int> (num) << std::endl;
//             std::cout << "float: " << (num) << std::endl;
//             std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
//         }
//     }

//     else if (to_cast == "nan")
//     {
//             std::cout << "******** IN NAAAN ********" << std::endl;
//             std::cout << "char: impossible" << std::endl;
//             std::cout << "int: impossible" << std::endl;
//             std::cout << "float: nanf" << std::endl;
//             std::cout << "double: nan" << std::endl;
//     }
//     else
//     {
//             std::cout << "******** IN NOTHING ********" << std::endl;
//             std::cout << "char: impossible" << std::endl;
//             std::cout << "int: impossible" << std::endl;
//             std::cout << "float: impossible" << std::endl;
//             std::cout << "double: impossible" << std::endl;
//     }
// }


#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    if (ac < 2)
        return (1);
    char *point = NULL;
    double result = std::strtod(av[1], &point);
    int detect_dot = std::string(av[1]).find('.');
    ScalarConverter *a = ScalarConverter::Init();
    if ((result <= INT_MIN || result >= INT_MAX) || (av[1] && av[1][0] == 0))
        a->Converter(5, av, point);
    else if ((result - static_cast<int>(result)) == 0 && point[0] == 0)
        a->Converter(0, av, point);
    else if (point && point[0] == 'f' && point[1] == 0)
        a->Converter(1, av, point);
    else if (point && (point[0] != 0) && point[0] && point[1] == 0)
        a->Converter(2, av, point);
    else if (detect_dot > 0 && point && point[0] == 0)
        a->Converter(3, av, point);
    else if (std::string(av[1]) == "nan")
        a->Converter(4, av, point);
    else
        a->Converter(5, av, point);
    delete a;
}