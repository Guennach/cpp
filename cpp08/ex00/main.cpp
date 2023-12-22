/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:05:36 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/21 14:25:20 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    int value = 4;
    int result = easyfind(numbers, value);

    if (result != -1)
        std::cout << "\033[1;32mThe number [" << value << "] is found in the container.\033[0m" << std::endl;
    else
        std::cout << "\033[1;31mThe number [" << value << "] is not found in the container.\033[0m" << std::endl;
    return 0;
}   