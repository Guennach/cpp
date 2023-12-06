/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:32:44 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 14:30:25 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &sc)
{
    *this = sc;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &sc)
{
    (void) sc;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::to_int(char **av, char *point, int checker)
{
    double num = std::strtod(av[1], &point);
    if (static_cast<int>(num) <= INT_MIN || static_cast<int>(num) >= INT_MAX)
        checker = 1;
    if (std::isprint(static_cast<char>(num)))
        std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (checker == 0)
    {
        if (static_cast<int>(num) <= INT_MIN || static_cast<int>(num) >= INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: " << (num) << std::endl;
    }
    else
    {
        if (static_cast<int>(num) <= INT_MIN || static_cast<int>(num) >= INT_MAX)
            std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: " << (num) << std::endl;
    }
}

void ScalarConverter::to_float(char **av)
{
    float num = std::atof(std::string(av[1]).c_str());
    if (std::isprint(static_cast<char>(num)))
        std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (static_cast<int>(num) <= INT_MIN || static_cast<int>(num) >= INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(4) << num << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void ScalarConverter::to_char(char *point, char **av)
{
    if (ft_isnan(av) == 1)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return ;
    }
    if (std::isprint(point[0]))
        std::cout << "char: '" << point[0] << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(point[0]) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(point[0]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(point[0]) << std::endl;
}

int ScalarConverter::ft_isnan(char **av)
{
    for (std::string::size_type  i = 0; i < std::string(av[1]).size(); i++)
    {
        if (av[1][i] >= '0' && av[1][i] <= '9')
            return (1);
    }
    return (0);
}

void ScalarConverter::to_double(char **av, int checker)
{
    double num = std::atof(std::string(av[1]).c_str());
    if (num < INT_MIN || num > INT_MAX)
        checker = 1;
    if (std::isprint(static_cast<char>(num)))
        std::cout << "char: " << static_cast<char>(num) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (checker == 0)
    {
        if (static_cast<int>(num) <= INT_MIN || static_cast<int>(num) >= INT_MAX)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(num) << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double: " << (num) << std::endl;
}

void ScalarConverter::to_zero()
{
    std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: 0" << std::endl;
    std::cout << "float: 0.0f" << std::endl;
    std::cout << "double: 0.0" << std::endl;
}

void ScalarConverter::Converter(int type, char **av, char *point)
{
    int checker = 0;
    if (type == 0)
        to_int(av, point, checker);
    else if (type == 1)
        to_float(av);
    else if (type == 2)
        to_char(point, av);
    else if (type == 3)
        to_double(av, checker);
    else if (type == 4)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (type == 6)
        to_zero();
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}

ScalarConverter* ScalarConverter::Init()
{
    return new ScalarConverter();
}