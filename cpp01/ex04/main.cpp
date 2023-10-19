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

int main() {
    std::ifstream   in("input.txt");
    std::ofstream   out("outfile.txt");
    std::string     content;
    std::string      s1 = "out";
    std::string      s2 = "IN";
    
    if (in.is_open() && out.is_open()) 
    {
        if (std::getline(in, content))
        {
            std::cout << "Test content: " << std::endl;
            // std::cout << content << std::endl;
            int idx = content.find(s1);
            std::cout << idx << std::endl;
            content.erase(idx, s1.size());
            content.insert(idx, s2);
             std::cout << content << std::endl;
        }
        in.close();
        out.close();
    }  
}