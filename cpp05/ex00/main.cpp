/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:57 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:21:09 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("BEEEEEZ", 1);
        // b.decrementGrade();
        b.incrementGrade();
        // b.incrementGrade();
        std::cout << b << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}