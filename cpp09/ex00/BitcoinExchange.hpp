/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:15 by gothmane          #+#    #+#             */
/*   Updated: 2024/01/02 12:18:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
       std::map< std::string,  std::string > data;
       std::map<int, std::pair <std::string,  std::string> > input;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &be);
        BitcoinExchange& operator=(const BitcoinExchange &be);
        ~BitcoinExchange();
        std::map<int, std::pair <std::string,  std::string> > getInput();
        std::map<std::string, std::string> getData();
        void        ft_fillmap(std::string nameFile);
        int ft_checkDate_nd_Value(std::string date);
        void ft_fillmap_input(std::string nameFile);

};