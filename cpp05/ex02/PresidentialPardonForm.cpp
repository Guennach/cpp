/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:11:46 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("Presidential Pardon Form", false, 72, 45) , target("default")
{
    std::cout << "Presidential Pardon Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential Pardon Form", false, 72, 45) , target(target)
{
    std::cout << "Presidential Pardon Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &scf)
 : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade()) , target(scf.target)
{
    std::cout << "Presidential Pardon Copied" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Destructed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &e) const
{
    try
    {
      if (!this->getSign())
        throw besigned_ex;
        else if (this->getExGrade() > e.getGrade())
        throw low_ex;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

