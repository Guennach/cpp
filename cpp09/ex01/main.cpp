/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:19:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/05 18:48:33 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <string>

int ft_ifnbr(char *av)
{
    size_t i = 0;

    for (; i < std::string(av).size(); i++)
    {
        if ((av[i] < '0' || av[i] > '9') 
        && av[i] != '+' && av[i] != '-' && av[i] != '*' && av[i] != '/' && av[i] != '\t' && av[i] != 32)
        {
            if (av[i] == 13)
                std::cout << "[" << av[1] << "]" << std::endl;
            return -1;
        }
    }
    return (1);
}

std::string perfom_logic(std::stack<std::string> tks, int idx)
{
    double result = 0;
    double sec_op = std::strtod(tks.top().c_str(), NULL);
    tks.pop();
    double first_op = std::strtod(tks.top().c_str(), NULL);
    tks.pop();
    if (idx == 0)
        result = sec_op + first_op;
    else if (idx == 1)
        result = sec_op - first_op;
    else if (idx == 2)
        result = sec_op * first_op;
    else if (idx == 3)
        result = sec_op / first_op;
    return (std::to_string(result));
}


int main(int ac, char **av)
{
    if (ac > 1)
    {
        std::stack<int> st;
        std::string input = std::string(av[1]);
        std::istringstream iss(input);
        std::stack<std::string> tks;
        std::string token;

        while (std::getline(iss, token, ' '))
        {
            if (!token.empty())
            {
                if (ft_ifnbr(av[1]) == -1)  
                {
                    std::cout << "Error" << std::endl;
                    return (1);
                }
                if (token == "*")
                {
                    if (!tks.empty())
                    {
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double first_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double result = sec_op * first_op;
                        std::string str = std::to_string(result);
                        tks.push(str);
                    }
                    continue;
                }
                else if (token == "-")
                {
                    if (!tks.empty())
                    {
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double first_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double result = first_op - sec_op;
                        std::string str = std::to_string(result);
                        tks.push(str);
                    }
                    continue;
                }
                else if (token == "+")
                {
                    if (!tks.empty())
                    {
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double first_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double result = sec_op + first_op;
                        std::string str = std::to_string(result);
                        tks.push(str);
                    }
                    continue;
                }
                 else if (token == "/")
                {
                    if (!tks.empty())
                    {
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double first_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double result = sec_op / first_op;
                        std::string str = std::to_string(result);
                        tks.push(str);
                    }
                    continue;
                }
                tks.push(token);
            }
        }

        std::stack<std::string> tempStack = tks;

        while (!tempStack.empty())
        {
            std::cout << std::atoi(std::string(tempStack.top()).c_str()) << std::endl;
            tempStack.pop();
        }
    }
    return (0);
}