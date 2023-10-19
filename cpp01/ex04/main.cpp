/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:49:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 15:35:11 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void    ft_replace(std::string infile, std::string s1, std::string s2)
{
    std::ifstream   in(infile.c_str());
    std::ofstream   out(infile.append(".replace").c_str());
    std::string     content;

     if (in.is_open() && out.is_open()) 
    {
        while (std::getline(in, content))
        {
            std::cout << "Test content: " << std::endl;
            int idx = content.find(s1);
            if (idx == -1)
                continue;
            std::cout << idx << std::endl;
            content.erase(idx, s1.size());
            content.insert(idx, s2);
            std::cout << content << std::endl;
        }
        in.close();
        out.close();
    }
}

int main() {
    ft_replace("input.txt", "out", "WAAAAAAAAAAAAAAAAAAAAAAAAAA");
}