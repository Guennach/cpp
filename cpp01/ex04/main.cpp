/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:49:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/23 12:11:31 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void ft_replace(std::string infile, std::string s1, std::string s2)
{
    std::ifstream in(infile.c_str());
    std::ofstream out(infile.append(".replace").c_str());
    std::string content;
    int indicator = 0;
    
    if (in.is_open() && out.is_open())
    {
        if (s1.empty() || s2.empty())
        {
            std::cerr << "Please provide me smtg in the strings!!" << std::endl;
            exit(1);
        }
        indicator = 1;
        while (std::getline(in, content))
        {
            int idx = -1;
            while ((idx = content.find(s1)) != -1)
            {
                if (idx == -1)
                {
                    out << content << std::endl;
                    continue;
                }
                content.erase(idx, s1.size());
                content.insert(idx, s2);
            }
            out << content << std::endl;
        }
        in.close();
        out.close();
    }
    if (indicator == 0)
    {
        if (std::remove(infile.c_str()) == 0)
            std::cout << "There's no in file so the outfile gonna get removed!" << std::endl;
        else
            std::cout << "Failed to remove the in file!" << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        ft_replace(av[1], av[2], av[3]);
    }
}