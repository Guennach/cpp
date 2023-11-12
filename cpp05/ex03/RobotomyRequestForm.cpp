/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:11:44 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:56 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("Robotomy Request Form", false, 72, 45) , target("default")
{
    std::cout << "Robotomy Request Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Robotomy Request Form", false, 72, 45) , target(target)
{
    std::cout << "Robotomy Request Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &scf)
 : AForm(scf.getName(), scf.getSign(), scf.getSiGrade(), scf.getExGrade()) , target(scf.target)
{
    std::cout << "Robotomy Request Copied" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Destructed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &e) const
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
    
    std::cout << ">>>>>> DRILLING NOISE <<<<<<" << std::endl;
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully 50 percent of the time" << std::endl;
    else
        std::cout << "Robotomy has failed" << std::endl;
}
