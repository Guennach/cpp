/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:17:42 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/06 13:17:46 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>



int main(int ac, char **av)
{
    if (ac > 1)
    {
        std::vector<int> nbrs;
        int i = 1;

        for (; i < ac; i++)
            nbrs.push_back(std::atoi(av[i]));

        for (size_t i = 0; i < nbrs.size(); i++)
            std::cout << nbrs[i] << " ";
        std::cout << std::endl;

        std::vector<std::pair<int, int>> pairs;
        if (nbrs.size() % 2 == 0)
        {
            for (size_t i = 0; i < nbrs.size() - 1; i+=2)
            {
                pairs.push_back(std::make_pair(nbrs[i], nbrs[i + 1])); // 0 - 1 / 1 - 2 / 2 - 3
            }
        }
        i = 0;
        for (const auto &pair : pairs)
        {
            i++;
            if (((nbrs.size() - 1) / 2) == i)
            {
                std::cout << " || " ;
            }
            std::cout << "(" << pair.first << ", " << pair.second << ") ";
        }
        std::cout << std::endl;
    }
    return (0);
}