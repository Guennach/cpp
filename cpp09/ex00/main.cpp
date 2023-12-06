/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:49:18 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/05 15:10:26 by gothmane         ###   ########.fr       */
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

        // std::map<std::string, std::string> data = be.getData();
        // std::map<int, std::pair<std::string, std::string>> input = be.getInput();

        //  if (be.ft_checkDate_nd_Value(date) == 0 || (std::atof(it.c_str()) < 0 || std::atof(it.c_str()) > 1000))
        //         {
        //             if (std::atof(it.c_str()) < 0)
        //                 std::cout << "Error: not a positive number." << std::endl;
        //             else if (std::atof(it.c_str()) > 0)
        //                 std::cout << "Error: too large a number." << std::endl;
        //             // std::cout << "Key: " << i << ", Value: BREAKED INPUT (" << date << ", " << it << ")" << std::endl;
        //             // break;
        //         }

        // std::cout << findClosestLowerDate(data, "2011-01-03") << std::endl;
        // while (it != data.end())
        // {
        //     const std::pair<std::string, std::string> &value_data = it->second;

        //     while (iter != input.end())
        //     {
        //         float nbr1 , nbr2;

        //         const std::pair<std::string, std::string> &value_input = iter->second;
        //         nbr1 = std::atof(value_data.second.c_str());
        //         nbr2 = std::atof(value_input.second.c_str());
        //         // std::cout << "Input = "<<  value_input.first << std::endl;
        //         if (value_data.first == value_input.first)
        //         {
        //             std::cout << value_data.first << " ====> " << value_input.first << std::endl;
        //             break;
        //         }
        //         std::cout << value_input.first << std::endl;
        //         ++iter;
        //     }
        //     // std::cout << value_data.first << std::endl;
        //     iter = input.begin();
        //     ++it;
        // }

        // auto it = input.begin();
        // auto iter = data.begin();
        // int check = 0;

        // while (it != input.end())
        // {
        //     const std::pair<std::string, std::string> &v_i = it->second;
        //     std::cout << v_i.first << std::endl;
        //     ++it;
        // }
        // std::map<int, std::pair<std::string, std::string>> list_dates;
        // int i = 0;
        // while (it != input.end())
        // {
        //     const std::pair<std::string, std::string> &v_i = it->second;
        //     if (v_i.second == "DATE_ERROR")
        //         std::cout << "date error" << std::endl;
        //     else if (v_i.second == "MIN_INT")
        //         std::cout << "MIN_INT" << std::endl;
        //     else if (v_i.second == "MAX_INT")
        //         std::cout << "MAX_INT" << std::endl;
        //     else if (v_i.second == "MAX_VALUE")
        //         std::cout << "MAX_VALUE" << std::endl;
        //     else
        //     {
        //         while (iter != data.end())
        //         {
        //             const std::string v_d = iter->first;
        //             if (v_d == v_i.first)
        //             {
        //                 // std::pair<int, std::pair <std::string,  std::string>> pr = std::make_pair(i, std::make_pair(v_d, iter->second));
        //                 // list_dates.insert(pr);
        //                 i++;
        //             std::cout << "NON" << std::endl;

        //                 check = 1;
        //                 // std::cout << "DYAL DATE SENSEI " << v_d << std::endl;
        //             }
        //             ++iter;
        //         }
        //         iter = data.begin();
        //         if (check == 0)
        //         {

        //             std::cout << v_i.first << std::endl;
        //             std::map<int, std::pair<std::string, std::string>> input = be.getInput();
        //             // if (closet_date != "")
        //             // {
        //             //     std::pair<int, std::pair <std::string,  std::string>> pr = std::make_pair(i, std::make_pair(closet_date, iter->second));
        //             //     list_dates.insert(pr);
        //             // }
        //             if (closet_date != "")
        //             {
        //                 auto iter = data.begin();
        //                 while (iter != data.end())
        //                 {
        //                     const std::string v_d = iter->first;
        //                     if (v_d == closet_date)
        //                     {
        //                         // std::cout << "-----------------------------" << std::endl;
        //                         // std::cout << v_d << std::endl;
        //                         // std::cout << closet_date << std::endl;
        //                         // std::cout << "-----------------------------" << std::endl;
        //                         std::cout << "DYAL DATE SENSEI " << iter->second << " * " << v_i.second << " = "
        //                                   << (std::strtod(iter->second.c_str(), NULL) * std::strtod(v_i.second.c_str(), NULL)) << std::endl;
        //                     }
        //                     ++iter;
        //                 }
        //             }
        //             std::cout << "closet date is = " << findClosestLowerDate(data, v_i.first) << std::endl;
        //             std::cout << "OUI" << std::endl;
        //         }
        //         else
        //         {
        //             // auto iter = data.begin();
        //             // while (iter != data.end())
        //             // {
        //             //     const std::string v_d = iter->first;
        //             //     if (v_d == v_i.first)
        //             //     {
        //             //         // std::cout << "brbrbrbr-----------------------------" << std::endl;
        //             //         // std::cout << v_d << std::endl;
        //             //         std::cout << "brbrbrbr-----------------------------" << std::endl;
        //             //         std::cout << v_i.first << std::endl;
        //             //         std::cout << "DYAL DATE SENSEI " << iter->second << " * " << v_i.second << " = "
        //             //                   << (std::strtod(iter->second.c_str(), NULL) * std::strtod(v_i.second.c_str(), NULL)) << std::endl;
        //             //     }
        //             //     ++iter;
        //             // }
        //             std::cout << "NON" << std::endl;
        //         }
        //     }
        //     ++it;
        // }

        // while (it != data.end())
        // {
        //     // const std::pair<std::string, std::string> &val_input = iter->second;
        //     // it = data.begin();

        //     // while (it != data.end())
        //     // {
        //     //     const std::pair<std::string, std::string> &val_data = it->second;
        //     //     if (val_data.first == val_input.first)
        //     //     {
        //     //         std::cout << val_data.first << " ====> " << val_input.first << std::endl;
        //     //         break;
        //     //         // Perform your logic for the occurrence here
        //     //     }
        //     //     ++it;
        //     // }
        //     const std::pair<std::string, std::string> &val_data = it->second;
        //     std::cout << val_data.first<<std::endl;
        //     ++it;
        // }
    }
}