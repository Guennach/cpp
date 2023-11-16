/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:51:22 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:45 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &i)
{
    *this = i;
}

Intern& Intern::operator=(const Intern &i)
{
    (void) i;
    return (*this);
}

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
                    std::cout << "Intern creates " << name << std::endl;
                    return (new ShrubberyCreationForm(target));
                case 1 :
                    std::cout << "Intern creates " << name << std::endl;
                    return (new PresidentialPardonForm(target));
                case 2 :
                    std::cout << "Intern creates " << name << std::endl;
                    return (new RobotomyRequestForm(target));
            }
    }
    return (NULL);
}