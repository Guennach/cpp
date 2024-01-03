/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:18 by gothmane          #+#    #+#             */
/*   Updated: 2024/01/03 19:50:30 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        BitcoinExchange be;

        be.ft_fillmap("data.csv");
        be.ft_fillmap_input(av[1]);
    }
    else
        std::cerr << "\033[1;31mError: could not open file.\033[0m" << std::endl;
}