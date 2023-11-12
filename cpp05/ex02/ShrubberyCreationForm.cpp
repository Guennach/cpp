/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:56:54 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:53 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("Shrubbery Form", false, 145, 137) , target("default")
{
    std::cout << "Shrubbery Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("Shrubbery Form", false, 145, 137) , target(target)
{
    std::cout << "Shrubbery Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &scf)
 : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade()) , target(scf.target)
{
    std::cout << "Shrubbery Copied" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Destructed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &e) const
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
    
    
    std::ofstream fd(target + "_shrubbery");

    fd << "     *" <<std::endl;
    fd << "    ***" <<std::endl;
    fd << "   *****" <<std::endl;
    fd << "  *******" <<std::endl;
    fd << " *********" <<std::endl;
    fd << "***********" <<std::endl;
    fd << "    ***" <<std::endl;
    fd << "    ***" <<std::endl;
}

