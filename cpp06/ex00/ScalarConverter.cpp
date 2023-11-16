/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:32:44 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:54 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter &sc){
    *this = sc;
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::Converter(int type, char **av, char *point)
{
    if (type == 0)
    {
        std::cout << "INT" << std::endl;
        int num = std::atoi(std::string(av[1]).c_str());
        if (num == 0)
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << 0 << std::endl;
            std::cout << "float: " << 0 << ".0f" << std::endl;
            std::cout << "double: " << 0 << ".0" << std::endl;
        }
        else
        {
        if (std::isprint(static_cast <char> (num)))
            std::cout << "char: " << static_cast <char> (num) << std::endl;
        else
            std::cout << "char: Non displayable"  << std::endl;
            std::cout << "int: " << static_cast<int> (num) << std::endl;
            std::cout << "float: " << (num) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
        }
    }
    else if (type == 1)
    {
        float num = std::atof(std::string(av[1]).c_str());
        std::cout << num << std::endl;
        std::cout << static_cast<int>(num)<< std::endl;

        if (std::isprint(static_cast <char> (num)))
            std::cout << "char: " << static_cast <char> (num) << std::endl;
        else
            std::cout << "char: Non displayable"  << std::endl;
            std::cout << "int: " << static_cast<int>(num) << std::endl;
            if ((num - static_cast<int>(num)) != 0)
                std::cout <<   "float: " << num << "f" << std::endl;
            else
                std::cout <<   "float: " << num << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(num) << std::endl;
    }
    else if (type == 2)
    {
        std::cout << "CHAR" << std::endl;
        if (std::isprint(point[0]))
            std::cout << "char: " << point[0] << std::endl;
        else
            std::cout << "char: Non displayable"  << std::endl;
        std::cout << "int: " << static_cast <int>(point[0]) << std::endl;
        std::cout << "float: " << static_cast <float>(point[0]) << std::endl;
        std::cout << "double: " << static_cast <double> (point[0]) << std::endl;
    }
    else if (type == 3)
    {
        std::cout << "DOUBLE" << std::endl;
        double num = std::strtod(av[1], &point);
        std::cout << std::string(av[1]).c_str() << std::endl;
        if (std::isprint(static_cast <char> (num)))
            std::cout << "char: " << static_cast <char> (num) << std::endl;
        else
            std::cout << "char: Non displayable"  << std::endl;
            std::cout << "int: " << static_cast<int>(num) << std::endl;
            if ((num - static_cast<int>(num)) == 0)
                std::cout <<   "float: " << num << std::endl;
            else
                std::cout <<   "float: " << num << "0f" << std::endl;
            std::cout << "double: " << static_cast<double>(num) << std::endl;
    }
    else if (type == 4)
    {
        std::cout << "******** IN NAAAN ********" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (type == 5)
    {
        std::cout << "******** IN NOTHING ********" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

