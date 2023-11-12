/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:34:08 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 14:41:58 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"){
    this->setGrade(1);
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
    this->setGrade(grade);
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructed!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &b){
  *this = b;
  std::cout << "Bureaucrat copied!" << std::endl;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
    {
        // this->name = b.getName();
        this->setGrade(b.getGrade());
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (os);
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    try
    {
        if (grade > 150)
            throw low_ex;
        else if (grade < 1)
            throw high_ex;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }
    return (this->grade);
}



void Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade > 150)
            throw low_ex;
        else if (grade < 1)
            throw high_ex;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
    this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::decrementGrade()
{
    this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::signForm(AForm &f)
{
    if (f.getSign())
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    else
    {
        if (!f.getSign())
            std::cout << this->getName() << " couldn't sign "  << f.getName() << " because grade too low" << std::endl;
        else
            std::cout << this->getName() << " couldn't sign "  << f.getName() << " because an error ocured" << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) 
{
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
}