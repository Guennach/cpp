/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:21:35 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 15:22:13 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"

AForm::AForm() : name("default"), sign(false), si_grade(1), ex_grade(1)
{
    std::cout << "AForm constructed" << std::endl;
}

AForm::AForm(std::string name, bool sign, int sg, int eg) : name(name) , sign(sign) , si_grade(sg), ex_grade(eg)
{
    std::cout << "AForm constructed" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructed" << std::endl;
}

AForm::AForm(const AForm &f) : name(f.name) , si_grade(f.si_grade), ex_grade(f.ex_grade)
{
    *this = f;
    std::cout << "AForm copied" << std::endl;
}

std::ostream &operator<<(std::ostream &os, AForm &b)
{
    os << "Name : "<<  b.getName() << " , Ex Grade : " << b.getExGrade() << " , Si Grade : "  << b.getSiGrade() << " , Sign : " << b.getSign()  << std::endl;
    return (os);
}

AForm &AForm::operator=(const AForm &f)
{
    if (this != &f)
    {
        this->sign = f.getSign();
    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSign() const
{
    return (this->sign);
}

int AForm::getSiGrade() const
{
    return (this->si_grade);
}

int AForm::getExGrade() const
{
    return (this->ex_grade);
}

void AForm::beSigned(Bureaucrat const &b)
{
    if (this->si_grade < b.getGrade())
        throw GradeTooLowException();
    else
        this->sign = true;
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "\033[1;31mGradeTooLowException\033[0m";
}