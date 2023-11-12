/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:30 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/12 10:34:25 by gothmane         ###   ########.fr       */
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
        void beSigned(Bureaucrat &b);
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "\033[1;31mGradeTooHighException\033[0m";
        }
    } high_ex;

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "\033[1;33mGradeTooLowException\033[0m";
        }
    } low_ex;
};


std::ostream& operator<<(std::ostream& os, Form &b);

#include "Bureaucrat.hpp"