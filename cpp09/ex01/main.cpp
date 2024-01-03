/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:19:53 by gothmane          #+#    #+#             */
/*   Updated: 2024/01/03 20:02:28 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int ft_ifnbr(char *av)
{
    size_t i = 0;

    for (; i < std::string(av).size(); i++)
    {
        if (i == 0 && (av[i] == '+' 
            || av[i] == '-' || av[i] == '*' || av[i] == '/'))
            return (-1);
        if ((av[i] < '0' || av[i] > '9') 
            && av[i] != '+' && av[i] != '-' 
            && av[i] != '*' && av[i] != '/' 
            && av[i] != '\t' && av[i] != 32)
            return -1;
        else if (av[i] == '+')
        {
            if (av[i + 1] >= '0' && av[i + 1] <= '9')
                return -1;
        }
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
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
                    std::cerr << "\033[1;31mError: Not a number !\033[0m" << std::endl;
                    return (1);
                }
                else if ((token != "*" && token != "-" && token != "/" && token != "+") 
                    && std::atoi(token.c_str()) >= 10)
                {
                    std::cerr << "\033[1;31mError: Number >= 10 !\033[0m" << std::endl;
                    return (1);
                }
                if (token == "*")
                {
                    if (!tks.empty())
                    {
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
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
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
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
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
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
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
                        double sec_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        if (tks.empty())
                        {
                            std::cerr << "\033[1;31m "
                                      << "Error: Can't perform anyhing in without first and second nbr !"
                                      << "\033[0m" << std::endl;
                            exit(1);
                        }
                        double first_op = std::strtod(tks.top().c_str(), NULL);
                        tks.pop();
                        double result = first_op / sec_op;
                        std::string str = std::to_string(result);
                        tks.push(str);
                    }
                    continue;
                }
                tks.push(token);
            }
        }

        std::stack<std::string> tempStack = tks;

        if (tempStack.empty() || tempStack.size() > 1)
            std::cerr << "\033[1;31m " << "Error: Invalid Format" << "\033[0m" << std::endl;
        while (!tempStack.empty() && tempStack.size() == 1)
        {
            std::cout << "\033[1;32m " << std::atoi(std::string(tempStack.top()).c_str()) << "\033[0m" << std::endl;
            tempStack.pop();
        }
    }
    else
        std::cerr << "\033[1;31m " << "Error" << "\033[0m" << std::endl;
    return (0);
}