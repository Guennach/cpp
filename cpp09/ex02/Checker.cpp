/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:23:38 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/22 13:25:49 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>

int main(int ac, char **av) {

    if (ac >= 2)
    {
        
    }
    std::vector<int> v = {1, 2, 3, 4, 5};

    if (std::is_sorted(v.begin(), v.end())) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }

    return 0;
}