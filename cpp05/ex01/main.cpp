/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:57 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:21:24 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("BEEEEEZ", 3);
        Form f("form", false, 5, 58);

        // b.decrementGrade();
        b.incrementGrade();
        f.beSigned(b);
        // std::cout << f.getSign() << std::endl;
        b.signForm(f);
        std::cout << f << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}