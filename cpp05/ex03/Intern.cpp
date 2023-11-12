/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:51:22 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 15:50:48 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

AForm*    Intern::makeForm(std::string name, std::string target)
{
    if (name.empty())
    {
        std::cout << "ERROR name must not be empty !!!" << std::endl;
        return (NULL);
    }
    std::string ar[3] = {"shrubbery request","presidential request","robotomy request"};
    for (int i = 0; i < 3; i++)    
    {
        if (ar[i] == name)
            switch (i)
            {
                case 0 :
                    return (new ShrubberyCreationForm(target));
                case 1 :
                    return (new PresidentialPardonForm(target));
                case 2 :
                    return (new RobotomyRequestForm(target));
            }
    }
    return (NULL);
}