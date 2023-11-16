/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:11:44 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:29 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Robotomy Request Form", false, 72, 45), target("default")
{
    std::cout << "Robotomy Request Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("Robotomy Request Form", false, 72, 45), target(target)
{
    std::cout << "Robotomy Request Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &scf)
    : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade()), target(scf.target)
{
    *this = scf;
    std::cout << "Robotomy Request Copied" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Destructed" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
     if (this != &f)
    {
        this->target = f.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &e) const
{

    if (!this->getSign())
        throw Bureaucrat::BeSignedException();
    else if (e.getGrade() > this->getExGrade())
        throw Bureaucrat::GradeTooLowException();
    else
    {
        std::cout << ">>>>>> DRILLING NOISE <<<<<<" << std::endl;
        srand(time(NULL));
        if (rand() % 2)
            std::cout << this->target << " has been robotomized successfully 50 percent of the time" << std::endl;
        else
            std::cout << "Robotomy has failed" << std::endl;
    }
}
