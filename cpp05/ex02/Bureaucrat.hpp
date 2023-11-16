/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:54 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/16 14:21:56 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>

class AForm;

class Bureaucrat
{
private:
    const std::string name; // gotta be const
    int grade;

public:
    Bureaucrat();
    Bureaucrat(Bureaucrat &b);
    ~Bureaucrat();
    // Bureaucrat &operator=(Bureaucrat &b);
    Bureaucrat(std::string name, int grade);
    Bureaucrat& operator=(const Bureaucrat &b);
    int getGrade() const;
    void setGrade(int grade);
    const std::string getName() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &f);
    void executeForm(AForm const & form);
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    } high_ex;

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    } low_ex;
    class BeSignedException : public std::exception
    {
        virtual const char *what() const throw();
    } besigned_ex;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#include "AForm.hpp"
