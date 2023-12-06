/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:30 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/17 10:27:09 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool        sign;
        const int   si_grade;
        const int   ex_grade;
    public:
        Form();
        ~Form();
        Form(const Form &fm);
        Form(std::string name, bool sign, int sg, int eg);
        Form& operator=(const Form &b);
        // getters
        std::string getName() const;
        bool getSign() const;
        int getSiGrade() const;
        int getExGrade() const;
        // setter
        void setSign(bool s);
        void beSigned(Bureaucrat const &b);
            class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    } low_ex;

};

std::ostream& operator<<(std::ostream& os, Form &b);

#include "Bureaucrat.hpp"