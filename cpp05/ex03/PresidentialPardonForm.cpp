/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:11:46 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("Presidential Pardon Form", false, 25, 5) , target("default")
{
    std::cout << "Presidential Pardon Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential Pardon Form", false, 25, 5) , target(target)
{
    std::cout << "Presidential Pardon Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &scf)
 : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade())
{
    *this = scf;
    std::cout << "Presidential Pardon Copied" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Destructed" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    if (this != &f)
    {
        this->target = f.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &e) const
{ 
    if (!this->getSign())
        throw Bureaucrat::BeSignedException();
    else if (e.getGrade() > this->getExGrade())
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

