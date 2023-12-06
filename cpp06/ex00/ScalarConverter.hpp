/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:32:41 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 12:02:43 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip> 


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &sc);
    public:
        ~ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter &sc);
        static ScalarConverter* Init();
        void Converter(int type, char **av, char *p);
        void to_int(char **av, char *point, int checker);
        void to_float(char **av);
        void to_char(char *point, char **av);
        void to_double(char **av,  int checker);
        void to_zero();
        int ft_isnan(char **av);
};

