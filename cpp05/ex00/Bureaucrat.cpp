/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:34:08 by gothmane          #+#    #+#             */
/*   Updated: 2023/12/08 11:17:33 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    this->setGrade(1);
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->setGrade(grade);
    std::cout << "Bureaucrat constructed!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
    *this = b;
    std::cout << "Bureaucrat copied!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
    {
        this->setGrade(b.getGrade());
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) 
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

    if (grade > 150)
        throw low_ex;
    else if (grade < 1)
        throw high_ex;
    else
        return (this->grade);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw low_ex;
    else if (grade < 1)
        throw high_ex;
    else
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

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "\033[1;31mGradeTooHighException\033[0m";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\033[1;31mGradeTooLowException\033[0m";
}