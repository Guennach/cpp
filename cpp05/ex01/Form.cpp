/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 10:42:07 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : si_grade(1), ex_grade(1)
{
    std::cout << "Form constructed" << std::endl;
}

Form::Form(std::string name, bool sign, int sg, int eg) : name(name) , sign(sign) ,si_grade(sg), ex_grade(eg)
{
    std::cout << "Form constructed" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructed" << std::endl;
}

Form::Form(const Form &f) :  name(f.name) , si_grade(f.si_grade), ex_grade(f.ex_grade)
{
    this->sign = f.sign;
    std::cout << "Form copied" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Form &b)
{
    os << "Name : "<<  b.getName() << " , Ex Grade : " << b.getExGrade() << " , Si Grade : "  << b.getSiGrade() << " , Sign : " << b.getSign()  << std::endl;
    return (os);
}

Form &Form::operator=(const Form &f)
{
    if (this != &f)
    {
        this->sign = f.getSign();
    }
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getSiGrade() const
{
    return (this->si_grade);
}

int Form::getExGrade() const
{
    return (this->ex_grade);
}

void Form::setSign(bool si)
{
    this->sign = si;
}

void Form::beSigned(Bureaucrat &b)
{
    try
    {
       if (this->si_grade < b.getGrade())
       {
            throw low_ex;
       }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}