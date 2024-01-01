/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:18 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/29 14:44:20 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    if (ac >= 2)
    {
        BitcoinExchange be;

        be.ft_fillmap("data.csv");
        be.ft_fillmap_input(av[1]);
    }
}