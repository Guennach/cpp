/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:56:54 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:13 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery Form", false, 145, 137), target("default")
{
    std::cout << "Shrubbery Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("Shrubbery Form", false, 145, 137), target(target)
{
    std::cout << "Shrubbery Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf)
    : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade())
{
    std::cout << "Shrubbery Copied" << std::endl;
    *this = scf;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    if (this != &f)
    {
        this->target = f.target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Destructed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &e) const
{

    if (!this->getSign())
        throw Bureaucrat::BeSignedException();
    else if (e.getGrade() > this->getExGrade())
        throw Bureaucrat::GradeTooLowException();
    else
    {
        std::ofstream fd(target + "_shrubbery");

        fd << "     *" << std::endl;
        fd << "    ***" << std::endl;
        fd << "   *****" << std::endl;
        fd << "  *******" << std::endl;
        fd << " *********" << std::endl;
        fd << "***********" << std::endl;
        fd << "    ***" << std::endl;
        fd << "    ***" << std::endl;
        fd.close();
    }
}
