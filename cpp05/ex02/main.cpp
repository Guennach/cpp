/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:57 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 14:48:51 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    Bureaucrat b("BEEEEEZ", 10);
    // AForm f("form", true, 9, 8);
    ShrubberyCreationForm scf;

    b.decrementGrade();
    b.incrementGrade();
    // f.beSigned(b);
    scf.execute(b);
    std::cout << b << b;
}