/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jacob.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:54:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/14 16:56:37 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <vector>
#include <iostream>

std::vector<int> jacobsthal(int n)
{
    std::vector<int> sequence(n);
    sequence[0] = 0;
    sequence[1] = 1;

    for (int i = 2; i < n; ++i)
    {
        sequence[i] = sequence[i - 1] + 2 * sequence[i - 2];
    }

    return sequence;
}

int main()
{
    int n = 100; // specify the number of sequences you want to generate

    for (int i = 1; i <= n; ++i)
    {
        std::vector<int> sequence = jacobsthal(i);

        std::cout << "Jacobsthal sequence of " << i << ": ";
        for (int j = 0; j < i; ++j)
        {
            std::cout << sequence[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}