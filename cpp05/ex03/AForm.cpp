/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 11:08:47 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : si_grade(1), ex_grade(1)
{
    std::cout << "AForm constructed" << std::endl;
}

AForm::AForm(std::string name, bool sign, int sg, int eg) : name(name) , sign(sign) ,si_grade(sg), ex_grade(eg)
{
    std::cout << "AForm constructed" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructed" << std::endl;
}

AForm::AForm(const AForm &f) :  name(f.name) , si_grade(f.si_grade), ex_grade(f.ex_grade)
{
    this->sign = f.sign;
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

// void AForm::setSign(bool si)
// {
//     this->sign = si;
// }



void AForm::beSigned(Bureaucrat const &b)
{
    try
    {
        if (b.getGrade() > 150)
            throw low_ex;
        else if (b.getGrade() < 1)
            throw high_ex;
       if (this->si_grade < b.getGrade())
            this->sign = false;
       else
           this->sign = true;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}