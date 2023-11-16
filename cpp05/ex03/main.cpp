/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:57 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:40 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat b("BEEEEEZ", 1);
        // AForm f("form", true, 9, 8);
        ShrubberyCreationForm scf;
        RobotomyRequestForm rf;
        PresidentialPardonForm ppf;

        b.decrementGrade(); // dec grade (grade will be 2)
        b.incrementGrade(); // inc grade (grade will be 1)
        // f.beSigned(b);
        b.signForm(scf);  // Sign the scf form (can throw an exception)
        b.executeForm(scf); // Execute the form (can execute the form or throw exception in case of error)

        b.decrementGrade(); // will be 2
        b.incrementGrade(); // inc grade (grade will be 1)

        std::cout << b; // Print bureaucrat grade
        
        //EXCEPTION
        // b.incrementGrade(); // inc grade (grade will be 0) ERROR (EXCEPTION TOO HIGH)
        //END EXCEPTION

        b.signForm(rf);
        b.executeForm(rf);

        //EXCEPTION
        // b.signForm(ppf); 
        //END EXCEPTION
        b.executeForm(ppf); // Gonna Throw SIGN ERROR

        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        delete rrf;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
