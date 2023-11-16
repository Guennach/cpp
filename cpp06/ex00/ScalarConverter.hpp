/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:32:41 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &sc);
    public:
        ~ScalarConverter();
        static ScalarConverter* Init();
        void Converter(int type, char **av, char *p);
};

inline ScalarConverter* ScalarConverter::Init()
{
    return new ScalarConverter();
}