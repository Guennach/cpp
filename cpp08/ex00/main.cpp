/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:05:36 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/26 14:23:51 by gothmane         ###   ########.fr       */
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

    int searchValue = 3;
    int result = easyfind(numbers, searchValue);

    if (result != -1)
    {
        std::cout << "The number " << searchValue << " is found in the container." << std::endl;
    }
    else
    {
        std::cout << "The number " << searchValue << " is not found in the container." << std::endl;
    }

    return 0;
}   