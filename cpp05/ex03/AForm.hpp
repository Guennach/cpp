/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:30 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 15:22:05 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class AForm
{
    private:
        const std::string name;
        bool        sign;
        const int   si_grade;
        const int   ex_grade;
    public:
        AForm();
        virtual ~AForm();
        virtual void execute(Bureaucrat const & executor) const = 0;
        AForm(const AForm &fm);
        AForm(std::string name, bool sign, int sg, int eg);
        AForm& operator=(const AForm &b);
        // getters
        std::string getName() const;
        bool getSign() const;
        int getSiGrade() const;
        int getExGrade() const;
        // setter
        void beSigned(Bureaucrat const &b);
         class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    } low_ex;
};


std::ostream& operator<<(std::ostream& os, AForm &b);
