/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:57 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 10:38:13 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat b("BEEEEEZ", 10);
    Form f("form", true, 9, 8);
    
    b.decrementGrade();
    b.incrementGrade();
    f.beSigned(b);
    b.signForm(f);
    std::cout << b << b;
}